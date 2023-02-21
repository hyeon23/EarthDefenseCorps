using UnityEngine;
using System.Collections;

public class Block : Enemy
{
    [SerializeField]
    public int mass;

    [SerializeField]
    public int gravity;

    public IEnumerator OnHit(int damage, Vector2 onHitPosition)
    {
        bool isCritical = CriticalCheck(damage, 33f);

        if (isCritical) damage *= Mathf.RoundToInt(damage * 1.5f);

        curHp -= damage;

        InGameTextViewer.Instance.SetEnemyImage(true, curHp, maxHp, enemyType);
        InGameTextViewer.Instance.SpawnHUDText(damage.ToString(), isCritical ? Color.red : Color.white, onHitPosition);

        if (curHp <= 0)
        {
            OnDead();
        }
        else
        {
            gameObject.GetComponent<SpriteRenderer>().color = Color.red;
            yield return new WaitForSeconds(0.1f);
            gameObject.GetComponent<SpriteRenderer>().color = Color.white;
        }
    }

    public bool CriticalCheck(int damage, float percent)
    {
        float r = Random.Range(0f, 100f) % 100;
        //percent 조건을 충족하면 크리티컬 발동
        if (r < percent)
        {
            return true;
        }
        else
        {
            return false;
        }
    }

    public void OnDead()
    {
        InGameTextViewer.Instance.enemyGageShown = false;
        //이러면 번개 잡을때도 스폰될듯?

        //Name or Type에 따라 분류 가능
        switch (enemyType)
        {
            case EnemyType.Block1X1H:
                break;
            case EnemyType.Block1X1:
                EffectManager.Instance.SpawnEffect(new int[] { 7, 8, 9, 10, 11, 12, 13 }, transform.position);
                break;
            case EnemyType.Block1X3:
            case EnemyType.Block1X3M:
                EffectManager.Instance.SpawnEffect(new int[] { 0, 1, 2, 3, 4, 5, 6 }, transform.parent.position);
                break;
        }

        if(ancestorGameObject.transform.childCount == 1)
        {
            Destroy(ancestorGameObject);
        }
        else
        {
            Destroy(parentGameObject);
        }
    }
}
