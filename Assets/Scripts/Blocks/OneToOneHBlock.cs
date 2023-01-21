using UnityEngine;
using System.Collections;
public class OneToOneHBlock : Block
{
    private void Awake()
    {
        spriteRenderer = gameObject.GetComponent<SpriteRenderer>();
    }

    private void FixedUpdate()
    {
        if (hp <= 0)
            Destroy(gameObject);
    }

    private void OnTriggerEnter2D(Collider2D collision)
    {
        if(collision.tag == "PlayerTrigger")
        {
            //플레이어 데미지 주는 함수로 교체
            Debug.Log("OnPlayer");
            Destroy(gameObject);
        }
        else if(collision.tag == "Sheld")
        {
            Debug.Log("OnSheld");
            Destroy(gameObject);
            PlayerController.Instance.parryingSheld = true;
        }
        else if(collision.tag == "Floor")
        {
            Debug.Log("OnFloor");
            Destroy(gameObject);
        }
        else if(collision.tag == "Weapon")
        {
            //StartCoroutine(OnHit());       
            //Hit
            Debug.Log("Smashed");
            OnHit();
        }
    }
    public void OnHit()
    {
        hp -= 1;
        spriteRenderer.color = Color.red;
        spriteRenderer.color = Color.white;
    }
}
