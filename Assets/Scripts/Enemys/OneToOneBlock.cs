using Unity.VisualScripting;
using UnityEngine;
public class OneToOneBlock : Block
{
    public bool isOverlappedPlayer = false;
    public bool isCrushedPlayer = false;

    private void OnTriggerEnter2D(Collider2D collision)
    {
        if (collision.tag == "PlayerTrigger")
        {
            switch (enemyType)
            {
                case EnemyType.Block1X1H:
                    Destroy(gameObject);
                    break;
                case EnemyType.Block1X1:
                case EnemyType.Block1X3:
                case EnemyType.Block1X3M:
                    isOverlappedPlayer = true;
                    PlayerController.Instance.isOverlapped = true;
                    break;
            }
        }
        else if(collision.tag == "Floor")
        {
            switch (enemyType)
            {
                case EnemyType.Block1X1H:
                    Destroy(gameObject);
                    break;
                case EnemyType.Block1X1:
                    if (!isOverlappedPlayer)
                    {
                        EffectManager.Instance.SpawnEffect(new int[] { 11, 12, 13 }, transform.position);
                        Destroy(parentGameObject);
                    }
                    else if (isOverlappedPlayer)
                    {
                        //ÇÃ·¹ÀÌ¾î°¡ ±ò¾Æ¹¶°³Áü
                        isCrushedPlayer = true;
                    }
                    break;
                case EnemyType.Block1X3:
                case EnemyType.Block1X3M:
                    if (isOverlappedPlayer)
                    {
                        //ÇÃ·¹ÀÌ¾î°¡ ±ò¾Æ¹¶°³Áü
                        isCrushedPlayer = true;
                    }
                    break;
            }
        }
        else if (collision.tag == "Sheld")
        {
            switch (enemyType)
            {
                case EnemyType.Block1X1H:
                    Destroy(gameObject);
                    break;
                case EnemyType.Block1X1:
                case EnemyType.Block1X3:
                case EnemyType.Block1X3M:
                    parentRigid.velocity = Vector2.zero;
                    parentRigid.AddForce(new Vector2(0, isCrushedPlayer ? 10 : 5), ForceMode2D.Impulse);
                    break;
            }
        }
        else if (collision.tag == "Weapon")
        {
            switch (enemyType)
            {
                case EnemyType.Block1X1H:
                    StartCoroutine(OnHit(1, collision.transform.position));
                    break;
                case EnemyType.Block1X1:
                case EnemyType.Block1X3:
                case EnemyType.Block1X3M:
                    parentRigid.AddForce(new Vector2(0, isCrushedPlayer ? 10 : 1), ForceMode2D.Impulse);
                    StartCoroutine(OnHit(1, collision.transform.position));
                    break;
            }
        }
    }

    private void OnTriggerExit2D(Collider2D collision)
    {
        if (collision.tag == "PlayerTrigger")
        {
            switch (enemyType)
            {
                case EnemyType.Block1X1H:

                    break;
                case EnemyType.Block1X1:
                case EnemyType.Block1X3:
                case EnemyType.Block1X3M:
                    isOverlappedPlayer = false;
                    PlayerController.Instance.isOverlapped = false;
                    break;
            }
        }
        else if (collision.tag == "Floor")
        {
            switch (enemyType)
            {
                case EnemyType.Block1X1H:

                    break;
                case EnemyType.Block1X1:
                case EnemyType.Block1X3:
                case EnemyType.Block1X3M:
                    isCrushedPlayer = false;
                    break;
            }
        }
    }
}
