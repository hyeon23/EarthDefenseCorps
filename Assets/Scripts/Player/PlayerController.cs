using TMPro;
using UnityEngine;
using System.Collections;
using System.Collections.Generic;
using Unity.VisualScripting;

public enum PlayerState { Idle, SideStepLeft, SideStepRight, Jump, Sheld, Attack, SpecialMove, Dead, Count }

public class PlayerController : MonoBehaviour
{
    private static PlayerController instance = null;

    private PlayerState playerState;

    [SerializeField]
    public Transform[] playerPos;
    [SerializeField]
    private float swipeSensitivity = 10;

    //Player Variables
    public bool isDead = false;
    public bool isJump = false;
    public bool isSheld = false;
    public bool isSpecial = false;
    public bool isCrushed = false;
    public bool isOverlapped = false;
    public bool parryingSheld = false;

    [SerializeField]
    private Animator anime;
    [SerializeField]
    private int positionIndex = 1;

    private Vector2 touchDif;
    private Vector2 touchBeganPos;
    private Vector2 touchEndedPos;

    [Header("Parents")]
    [SerializeField]
    public Rigidbody2D parentRigid;
    [SerializeField]
    public Transform parentTransform;

    [Header("Parents")]
    private int atkOrder = 0;

    [Header("Special")]
    [SerializeField]
    private GameObject specialAxis = null;
    [SerializeField]
    private Collider2D specialTrigger = null;
    [SerializeField]
    private GameObject specialAfterEffect = null;
    //[SerializeField]
    //private GameObject specialBullet = null;

    [Header("JumpDetectRay")]
    RaycastHit2D hit;
    int layerMask;  // Player 레이어만 충돌 체크함

    [Header("SpawnPos")]
    [SerializeField] private Transform[] spawnPos;

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

        layerMask = 1 << LayerMask.NameToLayer("Floor");
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

    private void Update()
    {
        if (!isDead)
        {
            for(int i = 0; i < spawnPos.Length; i++)
            {
                spawnPos[i].position = new Vector2(spawnPos[i].position.x, gameObject.transform.position.y + 50) ;
            }

            if (DataManager.Instance.playerData.curHp <= 0)
            {
                isDead = true;
                ChangeState(PlayerState.Dead);
                GameManager.Instance.GameOver();
            }
            else
            {
                Swipe();

                if (!isSheld)
                {
                    DataManager.Instance.playerData.curSheldGage = DataManager.Instance.playerData.curSheldGage >= DataManager.Instance.playerData.PlayerShledGage ? DataManager.Instance.playerData.PlayerShledGage : DataManager.Instance.playerData.curSheldGage + 0.3f;
                }
            }

            hit = Physics2D.Raycast(gameObject.transform.position, Vector2.down, 1.0f, layerMask);
            Debug.DrawRay(gameObject.transform.position, Vector2.down * 1.0f, Color.red);

            if (hit.collider == null)
            {
                gameObject.layer = LayerMask.NameToLayer("Player");
            }
            else if (hit.collider.tag == "Floor")
            {
                Debug.Log(hit.collider.tag);
                gameObject.layer = LayerMask.NameToLayer("PlayerGrounded");
            }
        }
    }

    //스와이프와 터치
    public void Swipe()
    {
        if (Input.touchCount == 1)
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
                        if (positionIndex >= 2 || isJump || isCrushed || isSpecial) return;
                        ChangeState(PlayerState.SideStepRight);
                    }
                    else if (touchDif.x < 0 && Mathf.Abs(touchDif.y) < Mathf.Abs(touchDif.x))
                    {
                        //Left Move
                        if (positionIndex <= 0 || isJump || isCrushed || isSpecial) return;
                        ChangeState(PlayerState.SideStepLeft);
                    }
                    else if (touchDif.y > 0 && Mathf.Abs(touchDif.y) > Mathf.Abs(touchDif.x))
                    {

                        if (isJump || isSpecial)
                        {
                            //Special Move
                            if (DataManager.Instance.playerData.curSpecialMoveGage < DataManager.Instance.playerData.playerSpecialMoveGage) { return; }

                            DataManager.Instance.playerData.curSpecialMoveGage -= 100f;
                            
                            ChangeState(PlayerState.SpecialMove);
                        }
                        else
                        {
                            //Jump
                            if (isSheld || isOverlapped || isSpecial) return;

                            ChangeState(PlayerState.Jump);
                        }
                    }
                    else if (touchDif.y < 0 && Mathf.Abs(touchDif.y) > Mathf.Abs(touchDif.x))
                    {
                        if (isSpecial) return;

                        //Sheld
                        if (!isSheld)
                        {
                            if (DataManager.Instance.playerData.curSheldGage < 35f) { return; }

                            DataManager.Instance.playerData.curSheldGage -= 35f;
                            timer = 0;
                            anime.ResetTrigger("onSheld");
                            ChangeState(PlayerState.Sheld);
                        }
                    }
                }
                else
                {
                    if (isSpecial) return;

                    //Attack
                    ChangeState(PlayerState.Attack);
                }
            }
        }
        else if(Input.touchCount == 0)
        {
            if (isJump || isSheld || isSpecial) return;

            ChangeState(PlayerState.Idle);
        }
    }

    private IEnumerator Idle()
    {
        yield return null;
    }

    public void Moving(bool dir)
    {
        SoundManager.Instance.SFXPlay(SoundManager.SFX.SideWalk);

        positionIndex += dir ? 1 : -1;
        parentTransform.position = playerPos[positionIndex].position;
        parentTransform.localScale = new Vector3(dir ? 1 : -1, 1, 1);
        anime.SetTrigger("doSideStep");
        SheldToX();
    }

    //private void SideStepLeft()
    //{
    //    Debug.Log("SideLeft");
    //    textText.text = "Left Move";
    //    positionIndex += -1;
    //    parentTransform.position = playerPos[positionIndex].position;
    //    parentTransform.localScale = new Vector3(-1, 1, 1);
    //    Moving(false);
    //}

    //private void SideStepRight()
    //{
    //    Debug.Log("SideRight");
    //    textText.text = "Right Move";
    //    positionIndex += 1;
    //    parentTransform.position = playerPos[positionIndex].position;
    //    parentTransform.localScale = Vector3.one;
    //    Moving(true);
    //}

    //private void Attack()
    //{
    //    Debug.Log("Attack");
    //    textText.text = "Attack";
    //    SheldToX();
    //    anime.SetTrigger("doAttack");
    //}

    private IEnumerator SideStepLeft()
    {
        Moving(false);
        yield return null;
    }

    private IEnumerator SideStepRight()
    {
        Moving(true);
        yield return null;
    }

    private IEnumerator Attack()
    {
        SheldToX();
        atkOrder++;
        SoundManager.Instance.SFXPlay(SoundManager.SFX.Attack);
        EffectManager.Instance.SpawnSwordEffect(gameObject, atkOrder);
        anime.SetTrigger("doAttack");
        yield return null;
    }

    private IEnumerator Dead()
    {
        anime.SetTrigger("doDead");
        yield return null;
    }

    private IEnumerator Jump()
    {
        isJump = true;
        anime.SetBool("isJump", isJump);
        SoundManager.Instance.SFXPlay(SoundManager.SFX.Jump);
        parentRigid.AddForce(new Vector2(0, 20f), ForceMode2D.Impulse);

        yield return null;
    }

    float timer = 0f;

    //Ver1
    private IEnumerator Sheld()
    {
        //Sheld On
        isSheld = !isSheld;
        anime.SetTrigger("onSheld");
        SoundManager.Instance.SFXPlay(SoundManager.SFX.SheldOn);

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
        anime.SetTrigger("offSheld");
        SoundManager.Instance.SFXPlay(SoundManager.SFX.SheldOff);
        SheldToX();
    }

    private void Parrying()
    {
        //Parrying!
        anime.SetTrigger("doParrying");

        if (isJump)
        {
            parentRigid.velocity = Vector2.zero;
            parentRigid.AddForce(Vector2.down * 50f, ForceMode2D.Impulse);
        }

        SheldToX();
        anime.ResetTrigger("offSheld");
    }

    private IEnumerator SpecialMove()
    {
        SheldToX();

        float start = 0;
        float end = 1f;

        float percent = 0;

        isSpecial = true;

        specialAxis.SetActive(true);
        specialTrigger.enabled = true;

        SoundManager.Instance.SFXPlay(SoundManager.SFX.SpecialMove);
        Time.timeScale = 0f;

        yield return new WaitForSecondsRealtime(0.5f);

        Time.timeScale = 1f;

        anime.SetBool("isSpecial", isSpecial);

        anime.SetTrigger("doSpecial");


        specialAfterEffect.SetActive(true);

        parentRigid.velocity = Vector2.zero;
        parentRigid.AddForce(Vector2.up * 25, ForceMode2D.Impulse);

        while (percent <= 1)
        {
            start += Time.deltaTime;
            percent = start / end;
            parentRigid.AddForce(Vector2.up * 1, ForceMode2D.Impulse);
            //transform.parent.position = Vector3.Lerp(startPos, targetPos, percent);
            yield return null;
        }

        parentRigid.velocity = Vector2.zero;
        parentRigid.AddForce(Vector2.down * 30f, ForceMode2D.Impulse);

        specialAfterEffect.SetActive(false);
        specialTrigger.enabled = false;
        specialAxis.SetActive(false);

        isSpecial = false;
        anime.SetBool("isSpecial", isSpecial);
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
            SoundManager.Instance.SFXPlay(SoundManager.SFX.Landing);
        }
    }
}