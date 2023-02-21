using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class FloorDetector : MonoBehaviour
{
    [SerializeField]
    private BoxCollider2D leftBoxCollider;
    [SerializeField]
    private BoxCollider2D centerBoxCollider;
    [SerializeField]
    private BoxCollider2D rightBoxCollider;
    [SerializeField]
    private OneToOneBlock curBlock = null;

    private void OnTriggerEnter2D(Collider2D collision)
    {
        if(collision.tag == "BlockTrigger")
        {
            if (collision.GetComponent<OneToOneBlock>().isOverlappedPlayer)
            {
                curBlock = collision.GetComponent<OneToOneBlock>();
                StartCoroutine(PlayerTrigger.Instance.OnHit(curBlock.dmg * 100));
            }
        }
    }

    private void FixedUpdate()
    {
        if (curBlock != null)
        {
            if (curBlock.isCrushedPlayer)
            {
                StartCoroutine(PlayerTrigger.Instance.OnHit(curBlock.dmg));
            }
        }
    }
}
