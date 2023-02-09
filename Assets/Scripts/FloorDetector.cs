using UnityEngine;

public class FloorDetector : PlayerTrigger
{
    public Collider2D collisionBlock;

    private void OnTriggerEnter2D(Collider2D collision)
    {
        if (collision.tag == "BlockTrigger")
        {
            PlayerController.Instance.isCrushed = true;
            collisionBlock = collision;

            StartCoroutine(OnHit(collisionBlock.GetComponent<OneToOneBlock>().dmg * 100));
        }
    }

    private void OnTriggerExit2D(Collider2D collision)
    {
        if (collision.tag == "BlockTrigger")
        {
            PlayerController.Instance.isCrushed = false; 
            collisionBlock = null;
        }
    }

    private void FixedUpdate()
    {
        if (collisionBlock == null)
            return;

        if (PlayerController.Instance.isCrushed)
        {
            StartCoroutine(OnHit(collisionBlock.GetComponent<OneToOneBlock>().dmg));
        }
    }
}
