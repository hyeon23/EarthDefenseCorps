using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class FloorDetector : MonoBehaviour
{
    [SerializeField]
    private OneToOneBlock curBlock = null;
    [SerializeField]
    private AlienBoss curAlien = null;

    private void OnTriggerEnter2D(Collider2D collision)
    {
        if(collision.tag == "BlockTrigger")
        {
            if (collision.GetComponent<OneToOneBlock>().isOverlappedPlayer)
            {
                curBlock = collision.GetComponent<OneToOneBlock>();
                SoundManager.Instance.SFXPlay(SoundManager.SFX.Collapse, 1);
                StartCoroutine(PlayerTrigger.Instance.OnHit(curBlock.dmg * 100));

                switch (curBlock.enemyType)
                {
                    case EnemyType.Block1X1H:
                        break;
                    case EnemyType.Block1X1:
                        EffectManager.Instance.SpawnEffect(new int[] { 21 }, collision.transform.parent.position + new Vector3(0, -1f, 0));
                        StartCoroutine(GameManager.Instance.CameraShake(0.1f, 1, 1));
                        break;
                    case EnemyType.Block1X3:
                    case EnemyType.Block1X3M:
                        EffectManager.Instance.SpawnEffect(new int[] { 22 }, transform.position + new Vector3(0, 1f, 0));
                        StartCoroutine(GameManager.Instance.CameraShake(0.3f, 2, 2));
                        break;
                }
            }
        }
        else if(collision.tag == "AlienTrigger")
        {
            if (collision.GetComponent<AlienBoss>().isOverlappedPlayer)
            {
                curAlien = collision.GetComponent<AlienBoss>();
                StartCoroutine(PlayerTrigger.Instance.OnHit(curAlien.dmg * 15));

                switch (curAlien.enemyType)
                {
                    case EnemyType.AlienBoss:
                        SoundManager.Instance.SFXPlay(SoundManager.SFX.Collapse, 1);
                        EffectManager.Instance.SpawnEffect(new int[] { 22 }, transform.position + new Vector3(0, 1f, 0));
                        StartCoroutine(GameManager.Instance.CameraShake(0.5f, 3, 3));
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

        if (curAlien != null)
        {
            if (curAlien.isCrushedPlayer)
            {
                StartCoroutine(PlayerTrigger.Instance.OnHit(curAlien.dmg));
            }
        }
    }
}
