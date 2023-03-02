using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class FloorDetector : MonoBehaviour
{
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

                switch (curBlock.enemyType)
                {
                    case EnemyType.Block1X1H:
                        break;
                    case EnemyType.Block1X1:
                        Debug.Log("Block1X1");
                        EffectManager.Instance.SpawnEffect(new int[] { 21 }, collision.transform.parent.position + new Vector3(0, -1f, 0));
                        StartCoroutine(GameManager.Instance.CameraShake(0.3f, 1, 2));
                        break;
                    case EnemyType.Block1X3:
                    case EnemyType.Block1X3M:
                        Debug.Log("Block1X3");
                        EffectManager.Instance.SpawnEffect(new int[] { 22 }, collision.transform.parent.position + new Vector3(0, -1f, 0));
                        StartCoroutine(GameManager.Instance.CameraShake(0.6f, 2, 3));
                        break;
                }
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
