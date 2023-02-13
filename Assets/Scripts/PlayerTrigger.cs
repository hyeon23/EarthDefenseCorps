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
            Destroy(this.gameObject);
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
    }

    private void OnTriggerExit2D(Collider2D collision)
    {
        if (collision.transform.tag == "BlockTrigger")
        {
        }
    }

    public IEnumerator OnHit(float damage)
    {
        GameManager.Instance.combo = 0;
        PlayerData.Instance.curHp -= damage;
        PlayerController.Instance.GetComponent<SpriteRenderer>().color = Color.red;
        yield return new WaitForSeconds(0.1f);
        PlayerController.Instance.GetComponent<SpriteRenderer>().color = Color.white;
    }
}
