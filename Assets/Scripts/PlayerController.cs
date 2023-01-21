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
    public bool isSheld = false;
    public bool parryingSheld = false;
    [SerializeField]
    private bool isJump = false;
    [SerializeField]
    private bool isCrushed = false;

    [SerializeField]
    private Animator anime;
    [SerializeField]
    private Animator weaponAnime;

    private int positionIndex = 1;

    private Vector2 touchDif;
    private Vector2 touchBeganPos;
    private Vector2 touchEndedPos;

    
    private Rigidbody2D rigid;
    private SpriteRenderer spriteRenderer;

    private static PlayerController instance = null;

    void Awake()
    {
        if (null == instance)
        {
            instance = this;
            DontDestroyOnLoad(this.gameObject);
        }
        else
        {
            Destroy(this.gameObject);
        }

        rigid = gameObject.GetComponent<Rigidbody2D>();
        spriteRenderer = gameObject.GetComponent<SpriteRenderer>();

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
                        if (positionIndex >= 2 || isJump || isCrushed) return;

                        ChangeState(PlayerState.SideStepRight);
                    }
                    else if (touchDif.x < 0 && Mathf.Abs(touchDif.y) < Mathf.Abs(touchDif.x))
                    {
                        //Left Move
                        if (positionIndex <= 0 || isJump || isCrushed) return;

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
                            if (isSheld || isCrushed) return;

                            ChangeState(PlayerState.Jump);
                        }
                    }
                    else if (touchDif.y < 0 && Mathf.Abs(touchDif.y) > Mathf.Abs(touchDif.x))
                    {
                        //Sheld
                        ChangeState(PlayerState.Sheld);
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

    private void OnCollisionEnter2D(Collision2D collision)
    {
        if (collision.gameObject.tag == "Floor")
        {
            isJump = false;
            anime.SetBool("isJump", isJump);
            gameObject.layer = LayerMask.NameToLayer("PlayerGrounded");
        }
    }

    private void OnTriggerEnter2D(Collider2D collision)
    {
        if (collision.transform.tag == "Block")
        {
            isCrushed = true;
        }
    }

    private void OnTriggerExit2D(Collider2D collision)
    {
        if (collision.transform.tag == "Block")
        {
            isCrushed = false;
        }
    }

    public void OnCrushed()
    {
        isCrushed = true;
    }

    public void OffCrushed()
    {
        isCrushed = false;
    }

    private IEnumerator Idle()
    {
        while (true)
        {
            yield return null;
        }
    }

    public void Moving(bool dir)
    {
        positionIndex = dir == true ? positionIndex + 1 : positionIndex - 1;
        spriteRenderer.flipX = !dir;
        transform.position = playerPos[positionIndex].position;
        anime.SetTrigger("doSideStep");
    }

    private IEnumerator SideStepLeft()
    {
        isSheld = false;
        textText.text = "Left Move";
        Moving(false);
        yield return null;
    }

    private IEnumerator SideStepRight()
    {
        isSheld = false;
        textText.text = "Right Move";
        Moving(true);
        yield return null;
    }

    private IEnumerator Jump()
    {
        isJump = true;
        textText.text = "JUMP";
        anime.SetBool("isJump", isJump);
        rigid.AddForce(new Vector2(0, 10f), ForceMode2D.Impulse);
        gameObject.layer = LayerMask.NameToLayer("Player");

        yield return null;
    }

    private IEnumerator Sheld()
    {
        anime.SetBool("isSheld", isSheld);

        if (isSheld)
        {
            //Sheld Off
            Debug.Log("1");
            textText.text = "SheldOff";
            anime.SetTrigger("offSheld");

            isSheld = false;
        }
        else
        {
            //Sheld On
            Debug.Log("2");
            textText.text = "SheldOn";
            anime.SetTrigger("onSheld");
            //anime.SetBool("isSheld", !isSheld);

            isSheld = true;

            float timer = 0f;

            while (true)
            {
                Debug.Log("3");
                timer += Time.deltaTime;

                if (timer >= 1)
                {
                    //SheldOff!
                    Debug.Log("4");
                    anime.SetBool("isSheld", true);
                    textText.text = "SheldOff";
                    anime.SetTrigger("offSheld");

                    isSheld = false;
                    parryingSheld = false;
                    yield break;
                }
                else if (parryingSheld)
                {
                    //Parrying!
                    Debug.Log("5");
                    anime.SetTrigger("doParrying");

                    if (isJump && !isSheld)
                    {
                        rigid.AddForce(new Vector2(0f, -10f), ForceMode2D.Impulse);
                    }

                    anime.SetBool("isSheld", false);
                    isSheld = false;
                    parryingSheld = false;
                    yield break;
                }

                yield return null;
            }
        }

        //Ver#1
        //anime.SetBool("isSheld", isSheld);

        //if (isSheld)
        //{
        //    //Sheld Off
        //    textText.text = "SheldOff";
        //    anime.SetTrigger("offSheld");
        //}
        //else
        //{
        //    //Sheld On
        //    textText.text = "SheldOn";
        //    anime.SetTrigger("onSheld");

        //    //float timer = 0f;

        //    //while (true)
        //    //{
        //    //    timer += Time.deltaTime;
        //    //    if (isSheld && timer >= 1)
        //    //    {
        //    //        //SheldOff!
        //    //        anime.SetTrigger("offSheld");

        //    //        anime.SetBool("isSheld", false);

        //    //        isSheld = false;
        //    //        parryingSheld = false;
        //    //        yield break;
        //    //    }
        //    //    else if (isSheld && parryingSheld)
        //    //    {
        //    //        //Parrying!
        //    //        anime.SetTrigger("doParrying");

        //    //        if (isJump && !isSheld)
        //    //        {
        //    //            rigid.AddForce(new Vector2(0f, -10f), ForceMode2D.Impulse);
        //    //        }

        //    //        anime.SetBool("isSheld", false);
        //    //        isSheld = false;
        //    //        parryingSheld = false;
        //    //        yield break;
        //    //    }
        //    //    yield return null;
        //    //}
        //}

        //isSheld = !isSheld;

        //yield return null;
    }


    private IEnumerator Attack()
    {
        isSheld = false;

        textText.text = "Attack";
        anime.SetTrigger("doAttack");
        weaponAnime.SetTrigger("doAttack");

        yield return null;
    }

    private IEnumerator SpecialMove()
    {
        textText.text = "Spetial Move";

        yield return null;
    }
}
