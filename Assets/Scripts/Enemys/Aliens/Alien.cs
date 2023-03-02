using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public enum AlienState { Idle, HitMove }

public class Alien : Enemy
{
    protected AlienState alienState = AlienState.Idle;

    [SerializeField]
    protected float maxShotDelay;//공격속도
    [SerializeField]

    protected float curShotDelay;//충전시간

    protected int curPosIndex = 0;

    [SerializeField]
    protected int patternIndex;
    [SerializeField]
    protected int curPatternCount;
    [SerializeField]
    protected int[] maxPatternCount;

    protected Quaternion GetRotFromVectors(Vector2 posStart, Vector2 posEnd)
    {
        return Quaternion.Euler(0, 0, -Mathf.Atan2(posEnd.x - posStart.x, posEnd.y - posStart.y) * Mathf.Rad2Deg);
    }

    private void Dodge()
    {
        //적 회피 기동 시작
        int dodgePosIndex = Random.Range(-1, 2);

        if(curPosIndex == dodgePosIndex)
        {
            curShotDelay = 0;
            Dodge();
        }
        else
        {
            curPosIndex = dodgePosIndex;
            StartCoroutine(DodgeMove(dodgePosIndex));
        }
        Debug.Log("Dodge");
        return;
    }

    private IEnumerator DodgeMove(int dodgePosIndex)
    {
        float start = 0;
        float end = 1;
        float percent = 0;

        Vector3 startPos = transform.position;
        Vector3 targetPos = new Vector3(transform.position.x + curPosIndex * 3f, transform.position.y, transform.position.z);

        while (percent <= 1)
        {
            start += Time.deltaTime;
            percent = start / end;
            parentGameObject.transform.position = Vector3.Lerp(startPos, targetPos, percent);
            yield return null;
        }
        yield return null;
    }

    public IEnumerator OnHit(int damage, Vector2 onHitPosition)
    {
        alienState = AlienState.HitMove;
        GameManager.Instance.curHitEnemy = gameObject;

        bool isCritical = CriticalCheck(damage, 33f);

        if (isCritical) damage *= Mathf.RoundToInt(damage * 1.5f);

        curHp -= damage;

        InGameTextViewer.Instance.SetEnemyImage(true, curHp, maxHp, enemyType);
        InGameTextViewer.Instance.SpawnHUDText(damage.ToString(), isCritical ? Color.red : Color.white, onHitPosition);

        if (curHp <= 0)
        {
            OnDead(true);
        }
        else
        {
            Dodge();
            gameObject.GetComponent<SpriteRenderer>().color = Color.red;
            yield return new WaitForSeconds(0.1f);
            gameObject.GetComponent<SpriteRenderer>().color = Color.white;
            alienState = AlienState.Idle;
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

    public void OnDead(bool isAttacked = false)
    {
        gameObject.SetActive(false);

        if (GameManager.Instance.curHitEnemy == gameObject)
        {
            InGameTextViewer.Instance.enemyGageShown = false;
        }

        switch (enemyName)
        {
            case "MoaiBlue":
                EffectManager.Instance.SpawnEffect(new int[] { 0, 1, 2, 3, 10, 11, 12 }, transform.position);
                break;
            default:
                break;
        }

        //Destroy
        if (ancestorGameObject.transform.childCount == 1)
        {
            Destroy(ancestorGameObject);
        }
        else
        {
            Destroy(parentGameObject);
        }
    }
}
