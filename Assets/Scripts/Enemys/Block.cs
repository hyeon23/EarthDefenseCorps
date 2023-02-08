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

        InGameTextViewer.Instance.enemyGageShown = true;
        InGameTextViewer.Instance.maxEnemyHp = maxHp;
        InGameTextViewer.Instance.curEnemyHp = curHp;

        InGameTextViewer.Instance.SpawnHUDText(damage.ToString()/*GameManager.Instance.combo + "Combo"*/, isCritical ? Color.red : Color.white, onHitPosition);

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
        Destroy(parentGameObject);
    }
}
