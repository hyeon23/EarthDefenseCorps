using System.Collections;
using UnityEngine;

public class PlayerTrigger : MonoBehaviour
{
    private void OnTriggerEnter2D(Collider2D collision)
    {
        if (collision.tag == "Block")
        {
            Debug.Log("OnPlayer");
            PlayerController.Instance.isOverlapped = true;
        }
        else if (collision.transform.tag == "BlockBullet")
        {
            StartCoroutine(OnHit(collision.GetComponent<OneToOneHBlock>().dmg));
        }
    }

    private void OnTriggerExit2D(Collider2D collision)
    {
        if (collision.transform.tag == "Block")
        {
            PlayerController.Instance.isOverlapped = false;
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
