using System.Collections;
using UnityEngine;

public class PlayerTrigger : MonoBehaviour
{
    private static PlayerTrigger instance = null;

    void Awake()
    {
        if (null == instance)
        {
            instance = this;
        }
        else
        {
            Destroy(gameObject);
        }
    }

    public static PlayerTrigger Instance
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

    private void OnTriggerEnter2D(Collider2D collision)
    {
        if (collision.tag == "BlockTrigger")
        {
        }
        else if (collision.transform.tag == "BlockBullet")
        {
            StartCoroutine(OnHit(collision.GetComponent<OneToOneBlock>().dmg));
        }
        else if (collision.transform.tag == "AlienBullet")
        {
            StartCoroutine(OnHit(collision.GetComponent<AlienBullet>().dmg));
        }
        else if (collision.tag == "AssembleTip")
        {
            PlayerController.Instance.parentRigid.gravityScale = 0;
        }
    }

    private void OnTriggerStay2D(Collider2D collision)
    {
        if (collision.tag == "BlockTrigger")
        {
            PlayerController.Instance.isOverlapped = true;
        }
    }

    private void OnTriggerExit2D(Collider2D collision)
    {
        if (collision.tag == "BlockTrigger")
        {
            PlayerController.Instance.isOverlapped = false;
        }

        if (collision.tag == "AssembleTip")
        {
            PlayerController.Instance.parentRigid.gravityScale = 1;
        }
    }

    public IEnumerator OnHit(float damage)
    {
        GameManager.Instance.combo = 0;

        if(DataManager.Instance.playerData.curHp > 0)
        {
            DataManager.Instance.playerData.curHp -= damage;
        }
        
        PlayerController.Instance.GetComponent<SpriteRenderer>().color = Color.red;
        yield return new WaitForSeconds(0.1f);
        PlayerController.Instance.GetComponent<SpriteRenderer>().color = Color.white;
    }
}
