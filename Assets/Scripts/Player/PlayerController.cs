using TMPro;
using UnityEngine;
using System.Collections;
using System.Collections.Generic;
using Unity.VisualScripting;

public enum PlayerState { Idle, SideStepLeft, SideStepRight, Jump, Sheld, Attack, SpecialMove, Dead, Count }

[System.Serializable]
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
    public bool isStucked = false;
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
    RaycastHit2D floorHit;
    int floorLayerMask;  // Player 레이어만 충돌 체크함

    RaycastHit2D upEnemyHit;
    RaycastHit2D downEnemyHit;

    [Header("SpecialMoveRay")]
    RaycastHit2D specialEnemyHit;
    int enemyLayerMask;  // Player 레이어만 충돌 체크함

    [Header("SpawnPos")]
    [SerializeField] private Transform[] spawnPos;

    public Collider2D specialTargetEnemyCollider = null;

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

        floorLayerMask = 1 << LayerMask.NameToLayer("Floor");
        enemyLayerMask =
            (1 << LayerMask.NameToLayer("BlockTrigger"))
            | (1 << LayerMask.NameToLayer("AlienTrigger"))
            | (1 << LayerMask.NameToLayer("AlienBossTrigger"));
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

            //Raycast To Floor
            floorHit = Physics2D.Raycast(gameObject.transform.position, Vector2.down, 1.25f, floorLayerMask);
            Debug.DrawRay(gameObject.transform.position, Vector2.down * 1.25f, Color.red);

            //Raycast To Enemy
            upEnemyHit = Physics2D.Raycast(gameObject.transform.position, Vector2.up, 1.25f, enemyLayerMask);
            Debug.DrawRay(gameObject.transform.position, Vector2.up * 1.25f, Color.blue);

            //Raycast To Enemy
            downEnemyHit = Physics2D.Raycast(gameObject.transform.position + new Vector3(-1, -1, 0), Vector2.right, 1.25f, enemyLayerMask);
            Debug.DrawRay(gameObject.transform.position + new Vector3(-0.5f, -0.5f, 0), Vector2.right * 1.25f, Color.green);

            //Raycast To Enemy
            specialEnemyHit = Physics2D.Raycast(gameObject.transform.position, Vector2.up, Mathf.Infinity, enemyLayerMask);
            Debug.DrawRay(gameObject.transform.position + new Vector3(0.1f, 0, 0), Vector2.up * 100, Color.black);

            //Enemy Collide
            if (upEnemyHit.collider == null)
            {
                isOverlapped = false;
                parentRigid.mass = 1;
            }
            else if (upEnemyHit.collider.tag == "BlockTrigger" || upEnemyHit.collider.tag == "AlienTrigger")
            {
                parentRigid.mass = 0.5f;
                isOverlapped = true;
            }

            //Enemy Collide
            if (downEnemyHit.collider == null)
            {
                isStucked = false;
            }
            else if (downEnemyHit.collider.tag == "BlockTrigger" || downEnemyHit.collider.tag == "AlienTrigger")
            {
                isStucked = true;
            }

            //Special Collide
            if (specialEnemyHit.collider == null)
            {
                specialTargetEnemyCollider = null;
            }
            else if (specialEnemyHit.collider.tag == "BlockTrigger" || specialEnemyHit.collider.tag == "AlienTrigger")
            {
                specialTargetEnemyCollider = specialEnemyHit.collider;

                Debug.Log(specialEnemyHit.transform.position);
            }

            //Floor Collide
            if (floorHit.collider == null)
            {
                if (isSpecial) return;

                if (isStucked || (isJump && isOverlapped && isCrushed))
                {
                    gameObject.layer = LayerMask.NameToLayer("PlayerGrounded");

                    float tempGravity = parentRigid.gravityScale;

                    Debug.Log("TickTick");

                    parentRigid.gravityScale = 0;
                    parentRigid.velocity = Vector2.zero;
                    parentTransform.position = playerPos[positionIndex].position;
                    Debug.Log("TickTackToe");
                    parentRigid.gravityScale = tempGravity;

                    return;
                }
                gameObject.layer = LayerMask.NameToLayer("Player");
            }
            else if (floorHit.collider.tag == "Floor")
            {
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
                        if ((isJump && specialTargetEnemyCollider != null && !isSpecial))
                        {
                            //Special Move
                            if (DataManager.Instance.playerData.curSpecialMoveGage < DataManager.Instance.playerData.playerSpecialMoveGage) return;

                            DataManager.Instance.playerData.curSpecialMoveGage -= 100f;
                            
                            ChangeState(PlayerState.SpecialMove);
                        }
                        else
                        {
                            //Jump
                            if (isJump || isSheld || isOverlapped || isSpecial) return;

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
        EffectManager.Instance.SpawnEffect(new int[] { 35 }, transform.position + new Vector3(0, -0.5f, 0));
        positionIndex += dir ? 1 : -1;
        parentTransform.position = playerPos[positionIndex].position;
        parentTransform.localScale = new Vector3(dir ? 1 : -1, 1, 1);
        anime.SetTrigger("doSideStep");
        SheldToX();
    }

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
        EffectManager.Instance.SpawnEffect(new int[] { 35 }, transform.position + new Vector3(0, -0.5f, 0));
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
            parentRigid.AddForce(Vector2.down * 35f, ForceMode2D.Impulse);
        }

        SheldToX();
        anime.ResetTrigger("offSheld");
    }

    private IEnumerator SpecialMove()
    {
        SheldToX();
        isSpecial = true;

        float start = 0;
        float end = 0.25f;

        float percent = 0;

        specialAxis.SetActive(true);
        specialTrigger.enabled = true;

        SoundManager.Instance.SFXPlay(SoundManager.SFX.SpecialMove, 1);

        specialAfterEffect.SetActive(true);

        parentTransform.position = specialTargetEnemyCollider.transform.position + Vector3.down * 1.5f;
        gameObject.GetComponent<Collider2D>().enabled = false;

        while (percent <= 1)
        {
            start += Time.deltaTime;
            percent = start / end;

            if(percent % 0.1f >= 0)
            {
                
                specialTrigger.enabled = true;


                if(specialTargetEnemyCollider != null)
                {
                    parentTransform.position = specialTargetEnemyCollider.transform.position + Vector3.down * 1.5f;
                }

                yield return new WaitForSeconds(0.05f);

                specialTrigger.enabled = false;
            }

            

            yield return null;
        }
        gameObject.GetComponent<Collider2D>().enabled = true;
        parentRigid.velocity = Vector2.zero;
        parentTransform.position = playerPos[positionIndex].position;

        specialAfterEffect.SetActive(false);
        specialAxis.SetActive(false);

        isSpecial = false;
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
            EffectManager.Instance.SpawnEffect(new int[] { 35 }, transform.position + new Vector3(0, -0.5f, 0));
        }
    }
}