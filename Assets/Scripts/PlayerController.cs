using TMPro;
using UnityEngine;

public class PlayerController : MonoBehaviour
{

    [SerializeField]
    private Transform[] playerPos;

    [SerializeField]
    private TextMeshProUGUI textText;

    [SerializeField]
    private float swipeSensitivity = 12;

    private int positionIndex = 1;

    private Vector2 touchDif;
    private Vector2 touchBeganPos;
    private Vector2 touchEndedPos;


    //Player Variables
    private bool isJump = false;

    private Animator anime;
    private Rigidbody2D rigid;

    private SpriteRenderer spriteRenderer;

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
                    if (touchDif.x > 0 && Mathf.Abs(touchDif.y) < Mathf.Abs(touchDif.x))
                    {
                        //Right Move
                        if (positionIndex >= 2 || isJump) return;

                        textText.text = "Right Move";
                        positionIndex += 1;
                        Moving(true);
                        //Moving(playerPos[positionIndex].position, 3f);
                        //StartCoroutine(Moving(playerPos[positionIndex].position, 0.5f));
                    }
                    else if (touchDif.x < 0 && Mathf.Abs(touchDif.y) < Mathf.Abs(touchDif.x))
                    {
                        //Left Move
                        if (positionIndex <= 0 || isJump) return;

                        textText.text = "Left Move";
                        positionIndex -= 1;
                        Moving(false);
                        //Moving(playerPos[positionIndex].position, 3f);
                        //StartCoroutine(Moving(playerPos[positionIndex].position, 0.5f));
                    }
                    else if (touchDif.y > 0 && Mathf.Abs(touchDif.y) > Mathf.Abs(touchDif.x))
                    {

                        if (isJump)//Spetial Move
                        {
                            textText.text = "Spetial Move";
                        }
                        else//Jump
                        {
                            isJump = true;
                            anime.SetBool("isJump", isJump);
                            textText.text = "JUMP";
                            rigid.AddForce(new Vector2(0, 1000f));
                        }
                    }
                    else if (touchDif.y < 0 && Mathf.Abs(touchDif.y) > Mathf.Abs(touchDif.x))
                    {
                        //Sheld
                        textText.text = "Sheld";
                        anime.SetTrigger("doSheld");
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
        spriteRenderer.flipX = !dir;
        transform.position = playerPos[positionIndex].position;
        anime.SetTrigger("doSideStep");
    }

    private void OnCollisionEnter2D(Collision2D collision)
    {
        if(collision.collider.tag == "Background")
        {
            isJump = false;
            textText.text = "Land";
            anime.SetBool("isJump", isJump);
        }
    }

    private void OnTriggerEnter2D(Collider2D collision)
    {
        if(collision.gameObject.tag == "LandMark")
        {
            anime.SetTrigger("doLand");
        }
    }
}
