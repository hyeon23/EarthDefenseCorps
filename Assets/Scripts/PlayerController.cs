using TMPro;
using UnityEngine;
using System.Collections;
using System.Collections.Generic;

public enum PlayerState { Idle, SideStepLeft, SideStepRight, Jump, Sheld, Attack, SpecialMove, Count }

public class PlayerController : MonoBehaviour
{
    private PlayerState playerState;

    [SerializeField]
    private Transform[] playerPos;
    [SerializeField]
    private TextMeshProUGUI textText;
    [SerializeField]
    private float swipeSensitivity = 10;

    //Player Variables
    public bool isJump = false;
    public bool isSheld = false;
    public bool isOverlapped = false;
    public bool parryingSheld = false;

    [SerializeField]
    private Animator anime;
    private int positionIndex = 1;

    private Vector2 touchDif;
    private Vector2 touchBeganPos;
    private Vector2 touchEndedPos;

    [Header("Parents")]
    [SerializeField]
    private Rigidbody2D parentRigid;
    [SerializeField]
    private Transform parentTransform;

    private static PlayerController instance = null;

    void Awake()
    {
        if (null == instance)
        {
            instance = this;
        }
        else
        {
            Destroy(this.gameObject);
        }
        ChangeState(PlayerState.Idle);
    }

    public static PlayerController Instance
    {
        get
        {
            if (null == instance)
            {
                return null;
            }
            return instance;
        }
    }

    private void ChangeState(PlayerState newState)
    {
        StopCoroutine(playerState.ToString());
        playerState = newState;
        StartCoroutine(playerState.ToString());
    }

    private void FixedUpdate()
    {
        Swipe();
    }

    //스와이프와 터치
    public void Swipe()
    {
        if (Input.touchCount > 0)
        {
            Touch touch = Input.GetTouch(0);

            if (touch.phase == TouchPhase.Began)
            {
                touchBeganPos = touch.position;
            }
            if (touch.phase == TouchPhase.Ended)
            {
                touchEndedPos = touch.position;
                touchDif = (touchEndedPos - touchBeganPos);
                if (Mathf.Abs(touchDif.y) > swipeSensitivity || Mathf.Abs(touchDif.x) > swipeSensitivity)
                {
                    if (touchDif.x > 0 && Mathf.Abs(touchDif.y) < Mathf.Abs(touchDif.x))
                    {
                        //Right Move
                        if (positionIndex >= 2 || isJump || isOverlapped) return;

                        ChangeState(PlayerState.SideStepRight);
                    }
                    else if (touchDif.x < 0 && Mathf.Abs(touchDif.y) < Mathf.Abs(touchDif.x))
                    {
                        //Left Move
                        if (positionIndex <= 0 || isJump || isOverlapped) return;

                        ChangeState(PlayerState.SideStepLeft);
                    }
                    else if (touchDif.y > 0 && Mathf.Abs(touchDif.y) > Mathf.Abs(touchDif.x))
                    {

                        if (isJump)
                        {
                            //Spetial Move
                            ChangeState(PlayerState.SpecialMove);
                        }
                        else
                        {
                            //Jump
                            if (isSheld || isOverlapped) return;

                            ChangeState(PlayerState.Jump);
                        }
                    }
                    else if (touchDif.y < 0 && Mathf.Abs(touchDif.y) > Mathf.Abs(touchDif.x))
                    {
                        //Sheld
                        if (!isSheld)
                        {
                            if (PlayerData.Instance.curSheldGage < 33.3f) { return; }

                            PlayerData.Instance.curSheldGage -= 40f;

                            timer = 0;
                            anime.ResetTrigger("onSheld");
                            ChangeState(PlayerState.Sheld);
                        }
                    }
                }
                else
                {
                    //Attack
                    ChangeState(PlayerState.Attack);
                }
            }
        }
        else
        {
            if (isJump || isSheld) return;

            ChangeState(PlayerState.Idle);
        }

    }

    private IEnumerator Idle()
    {
        yield return null;
    }

    public void Moving(bool dir)
    {
        positionIndex = dir == true ? positionIndex + 1 : positionIndex - 1;
        parentTransform.localScale = (dir == true ? Vector3.one : new Vector3(-1, 1, 1));
        parentTransform.position = playerPos[positionIndex].position;
        anime.SetTrigger("doSideStep");

        SheldToX();
    }

    private IEnumerator SideStepLeft()
    {
        textText.text = "Left Move";
        Moving(false);
        yield return null;
    }

    private IEnumerator SideStepRight()
    {
        textText.text = "Right Move";
        Moving(true);
        yield return null;
    }

    private IEnumerator Jump()
    {
        isJump = true;
        textText.text = "JUMP";
        anime.SetTrigger("doJump");
        anime.SetBool("isJump", isJump);
        parentRigid.AddForce(new Vector2(0, 30f), ForceMode2D.Impulse);
        gameObject.layer = LayerMask.NameToLayer("Player");

        yield return null;
    }

    float timer = 0f;

    //Ver1
    private IEnumerator Sheld()
    {
        //Sheld On
        isSheld = !isSheld;
        textText.text = "SheldOn";
        anime.SetTrigger("onSheld");

        while (true)
        {
            timer += Time.deltaTime;
            if (timer >= 1)
            {
                //SheldOff!
                SheldOff();
                yield break;
            }
            else if (parryingSheld)
            {
                //Parrying!
                Parrying();
                yield break;
            }

            yield return null;
        }
    }

    private void SheldOff()
    {
        textText.text = "SheldOff";
        anime.SetTrigger("offSheld");

        SheldToX();
    }

    private void Parrying()
    {
        //Parrying!
        textText.text = "Parrying!";
        anime.SetTrigger("doParrying");

        if (isJump)
        {
            parentRigid.velocity = Vector2.zero;
            parentRigid.AddForce(new Vector2(0f, -20f), ForceMode2D.Impulse);
        }

        SheldToX();
        anime.ResetTrigger("offSheld");
    }

    private IEnumerator Attack()
    {
        SheldToX();
        textText.text = "Attack";
        anime.SetTrigger("doAttack");

        yield return null;
    }

    private IEnumerator SpecialMove()
    {
        SheldToX();
        textText.text = "Spetial Move";

        yield return null;

    }

    private void SheldToX()
    {
        isSheld = false;
        parryingSheld = false;
    }

    private void OnCollisionEnter2D(Collision2D collision)
    {
        if (collision.gameObject.tag == "Floor")
        {
            isJump = false;
            anime.SetBool("isJump", isJump);
            gameObject.layer = LayerMask.NameToLayer("PlayerGrounded");
        }
    }
}

//Ver2: Sheld Cancel Ver
//using TMPro;
//using UnityEngine;
//using System.Collections;
//using System.Collections.Generic;

//public enum PlayerState { Idle, SideStepLeft, SideStepRight, Jump, Sheld, Attack, SpecialMove, Count }

//public class PlayerController : MonoBehaviour
//{
//    private PlayerState playerState;

//    [SerializeField]
//    private Transform[] playerPos;
//    [SerializeField]
//    private TextMeshProUGUI textText;
//    [SerializeField]
//    private float swipeSensitivity = 10;

//    //Player Variables
//    public bool isJump = false;
//    public bool isSheld = false;
//    public bool offSheld = false;
//    public bool isCrushed = false;
//    public bool isOverlapped = false;
//    public bool parryingSheld = false;

//    [SerializeField]
//    private Animator anime;
//    private int positionIndex = 1;

//    private Vector2 touchDif;
//    private Vector2 touchBeganPos;
//    private Vector2 touchEndedPos;

//    [Header("Parents")]
//    [SerializeField]
//    private Rigidbody2D parentRigid;
//    [SerializeField]
//    private Transform parentTransform;

//    private static PlayerController instance = null;

//    void Awake()
//    {
//        if (null == instance)
//        {
//            instance = this;
//        }
//        else
//        {
//            Destroy(this.gameObject);
//        }
//        ChangeState(PlayerState.Idle);
//    }

//    public static PlayerController Instance
//    {
//        get
//        {
//            if (null == instance)
//            {
//                return null;
//            }
//            return instance;
//        }
//    }

//    private void ChangeState(PlayerState newState)
//    {
//        StopCoroutine(playerState.ToString());
//        playerState = newState;
//        StartCoroutine(playerState.ToString());
//    }

//    private void FixedUpdate()
//    {
//        Swipe();
//    }

//    //스와이프와 터치
//    public void Swipe()
//    {
//        if (Input.touchCount > 0)
//        {
//            Touch touch = Input.GetTouch(0);

//            if (touch.phase == TouchPhase.Began)
//            {
//                touchBeganPos = touch.position;
//            }
//            if (touch.phase == TouchPhase.Ended)
//            {
//                touchEndedPos = touch.position;
//                touchDif = (touchEndedPos - touchBeganPos);
//                if (Mathf.Abs(touchDif.y) > swipeSensitivity || Mathf.Abs(touchDif.x) > swipeSensitivity)
//                {
//                    if (touchDif.x > 0 && Mathf.Abs(touchDif.y) < Mathf.Abs(touchDif.x))
//                    {
//                        //Right Move
//                        if (positionIndex >= 2 || isJump || isOverlapped) return;

//                        ChangeState(PlayerState.SideStepRight);
//                    }
//                    else if (touchDif.x < 0 && Mathf.Abs(touchDif.y) < Mathf.Abs(touchDif.x))
//                    {
//                        //Left Move
//                        if (positionIndex <= 0 || isJump || isOverlapped) return;

//                        ChangeState(PlayerState.SideStepLeft);
//                    }
//                    else if (touchDif.y > 0 && Mathf.Abs(touchDif.y) > Mathf.Abs(touchDif.x))
//                    {

//                        if (isJump)
//                        {
//                            //Spetial Move
//                            ChangeState(PlayerState.SpecialMove);
//                        }
//                        else
//                        {
//                            //Jump
//                            if (isSheld || isOverlapped) return;

//                            ChangeState(PlayerState.Jump);
//                        }
//                    }
//                    else if (touchDif.y < 0 && Mathf.Abs(touchDif.y) > Mathf.Abs(touchDif.x))
//                    {
//                        //Sheld
//                        if (!isSheld)
//                        {
//                            if (PlayerData.Instance.curSheldGage < 33.3f) { return; }

//                            timer = 0;
//                            offSheld = false;
//                            anime.ResetTrigger("onSheld");
//                            anime.ResetTrigger("offSheld");
//                            ChangeState(PlayerState.Sheld);
//                        }
//                        else
//                        {
//                            offSheld = true;
//                            anime.ResetTrigger("onSheld");
//                            anime.ResetTrigger("offSheld");
//                        }
//                    }
//                }
//                else
//                {
//                    //Attack
//                    ChangeState(PlayerState.Attack);
//                }
//            }
//        }
//        else
//        {
//            if (isJump || isSheld) return;

//            ChangeState(PlayerState.Idle);
//        }

//    }

//    private IEnumerator Idle()
//    {
//        yield return null;
//    }

//    public void Moving(bool dir)
//    {
//        positionIndex = dir == true ? positionIndex + 1 : positionIndex - 1;
//        parentTransform.localScale = (dir == true ? Vector3.one : new Vector3(-1, 1, 1));
//        parentTransform.position = playerPos[positionIndex].position;
//        anime.SetTrigger("doSideStep");

//        SheldToX();
//    }

//    private IEnumerator SideStepLeft()
//    {
//        textText.text = "Left Move";
//        Moving(false);
//        yield return null;
//    }

//    private IEnumerator SideStepRight()
//    {
//        textText.text = "Right Move";
//        Moving(true);
//        yield return null;
//    }

//    private IEnumerator Jump()
//    {
//        isJump = true;
//        textText.text = "JUMP";
//        anime.SetTrigger("doJump");
//        anime.SetBool("isJump", isJump);
//        parentRigid.AddForce(new Vector2(0, 20f), ForceMode2D.Impulse);
//        gameObject.layer = LayerMask.NameToLayer("Player");

//        yield return null;
//    }

//    float timer = 0f;

//    //Ver1
//    private IEnumerator Sheld()
//    {
//        //Sheld On
//        isSheld = !isSheld;
//        textText.text = "SheldOn";
//        anime.ResetTrigger("offSheld");//순서 중요
//        anime.SetTrigger("onSheld");


//        offSheld = false;

//        while (true)
//        {
//            timer += Time.deltaTime;
//            if (timer >= 1)
//            {
//                //SheldOff!
//                SheldOff();
//                yield break;
//            }
//            else if (parryingSheld)
//            {
//                //Parrying!
//                Parrying();
//                yield break;
//            }
//            else if (offSheld == true)
//            {
//                //SheldOff!
//                Debug.Log("2 여기가 문제였다 여기서 Sheld On이 바로 씹히는 현상이 발생");
//                SheldOff();
//                yield break;
//            }

//            yield return null;
//        }
//    }

//    private void SheldOff()
//    {
//        textText.text = "SheldOff";
//        anime.SetTrigger("offSheld");

//        SheldToX();
//    }

//    private void Parrying()
//    {
//        //Parrying!
//        textText.text = "Parrying!";
//        anime.SetTrigger("doParrying");

//        if (isJump)
//        {
//            parentRigid.velocity = Vector2.zero;
//            parentRigid.AddForce(new Vector2(0f, -20f), ForceMode2D.Impulse);
//        }

//        SheldToX();
//        anime.ResetTrigger("offSheld");
//    }

//    private IEnumerator Attack()
//    {
//        SheldToX();
//        textText.text = "Attack";
//        anime.SetTrigger("doAttack");

//        yield return null;
//    }

//    private IEnumerator SpecialMove()
//    {
//        SheldToX();
//        textText.text = "Spetial Move";

//        yield return null;

//    }

//    private void SheldToX()
//    {
//        isSheld = false;
//        offSheld = false;
//        parryingSheld = false;
//    }

//    private void OnCollisionEnter2D(Collision2D collision)
//    {
//        if (collision.gameObject.tag == "Floor")
//        {
//            isJump = false;
//            anime.SetBool("isJump", isJump);
//            gameObject.layer = LayerMask.NameToLayer("PlayerGrounded");
//        }
//    }
//}
