using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using TMPro;

using UnityEngine.EventSystems;


public class PlayerController : MonoBehaviour
{
    [SerializeField]
    private float swipeSensitivity = 12;
    [SerializeField]
    private TextMeshProUGUI textText;
    [SerializeField]
    private Transform[] playerPos;

    private Animator anime;
    private Rigidbody2D rigid;
    private SpriteRenderer spriteRenderer;

    private Vector2 touchBeganPos;
    private Vector2 touchEndedPos;
    private Vector2 touchDif;

    private int positionIndex = 1;

    private void Awake()
    {
        anime = gameObject.GetComponent<Animator>();
        rigid = gameObject.GetComponent<Rigidbody2D>();
        spriteRenderer = gameObject.GetComponent<SpriteRenderer>();
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

                //스와이프. 터치의 x이동거리나 y이동거리가 민감도보다 크면
                if (Mathf.Abs(touchDif.y) > swipeSensitivity || Mathf.Abs(touchDif.x) > swipeSensitivity)
                {
                    if (touchDif.y > 0 && Mathf.Abs(touchDif.y) > Mathf.Abs(touchDif.x))
                    {
                        //Jump
                        anime.SetTrigger("doJump");
                        anime.SetBool("isJump", true);
                        textText.text = "JUMP";
                        rigid.AddForce(new Vector2(0, 1000f));
                        
                    }
                    else if (touchDif.y < 0 && Mathf.Abs(touchDif.y) > Mathf.Abs(touchDif.x))
                    {
                        //Sheld
                        anime.SetTrigger("doSheld");
                        textText.text = "Sheld";
                    }
                    else if (touchDif.x > 0 && Mathf.Abs(touchDif.y) < Mathf.Abs(touchDif.x))
                    {
                        //Right Move
                        if (positionIndex >= 2) return;
                        textText.text = "Right Move";
                        positionIndex += 1;
                        Moving(true);
                        //Moving(playerPos[positionIndex].position, 3f);
                        //StartCoroutine(Moving(playerPos[positionIndex].position, 0.5f));
                        Debug.Log(positionIndex);
                    }
                    else if (touchDif.x < 0 && Mathf.Abs(touchDif.y) < Mathf.Abs(touchDif.x))
                    {
                        //Left Move
                        if (positionIndex <= 0) return;
                        textText.text = "Left Move";
                        positionIndex -= 1;
                        Moving(false);
                        //Moving(playerPos[positionIndex].position, 3f);
                        //StartCoroutine(Moving(playerPos[positionIndex].position, 0.5f));
                        
                        Debug.Log(positionIndex);
                    }
                }
                //터치.
                else
                {
                    //Attack
                    anime.SetTrigger("doAttack");
                    textText.text = "Attack";
                }
            }
        }
    }

    public void Moving(bool dir)
    {
        anime.SetTrigger("doSideWalk");
        spriteRenderer.flipX = !dir;
        transform.position = new Vector2(playerPos[positionIndex].position.x, transform.position.y);
    }

    private void OnCollisionEnter2D(Collision2D collision)
    {
        if(collision.collider.tag == "Background")
        {
            anime.SetTrigger("doLand");
            anime.SetBool("isJump", false);
        }
    }

    //public IEnumerator Moving(Vector3 targetPos, float targetTime)
    //{
    //    float curTime = 0f;

    //    Vector2 curPos = transform.position;

    //    while (curTime < targetTime)
    //    {
    //        yield return null;
    //        float percent = curTime / targetTime;
    //        transform.position = Vector2.Lerp(curPos, targetPos, percent);
    //        curTime += Time.deltaTime;
    //    }
    //}

    //public void Moving(Vector3 targetPos, float targetTime)
    //{
    //    float curTime = 0f;

    //    Vector2 curPos = transform.position;

    //    while (curTime < targetTime)
    //    {
    //        float percent = curTime / targetTime;
    //        transform.position = Vector2.Lerp(curPos, targetPos, percent);    
    //        curTime += Time.deltaTime;
    //    }
    //}
}
