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

    public void OnDead(bool isAttacked = false)
    {
        gameObject.SetActive(false);

        if (GameManager.Instance.curHitEnemy == gameObject)
        {
            InGameTextViewer.Instance.enemyGageShown = false;
        }

        if (isAttacked)
        {
            switch (enemyName)
            {
                //0: B_Bronze, 1: B_Silver, 2: B_Gold, 3: B_Zam
                //4: MoaiGrayOne, 5: MoaiGrayTwo, 6: MoaiGrayThree
                //7: MoaiRedOne, 8: MoaiRedTwo, 9: MoaiRedThree
                //10: MoaiBlueOne, 11: MoaiBlueTwo, 12: MoaiBlueThree
                //13; Cube
                //14: S_Bronze, 15: S_Silver, 16: S_Gold, 17: S_Zam
                //18: S_TotemOne, 19: S_TotemTwo, 20: S_TotemThree

                //Block 1X3 -> transform.position
                //Block 1X3M -> transform.parent.position

                case "MoaiBlue":
                    EffectManager.Instance.SpawnEffect(new int[] { 0, 1, 2, 3, 10, 11, 12 }, transform.position);
                    break;
                case "MoaiRed":
                    EffectManager.Instance.SpawnEffect(new int[] { 0, 1, 2, 3, 7, 8, 9 }, transform.position);
                    break;
                case "MoaiGray":
                case "StoneTower":
                    EffectManager.Instance.SpawnEffect(new int[] { 0, 1, 2, 3, 4, 5, 6 }, transform.position);
                    break;
                case "Totem1":
                case "Totem2":
                case "Totem3":
                case "Totem4":
                case "Totem5":
                case "Totem6":
                    EffectManager.Instance.SpawnEffect(new int[] { 14, 15, 16, 17, 18, 19, 20 }, transform.position);
                    break;
                case "Cube":
                    EffectManager.Instance.SpawnEffect(new int[] { 0, 1, 2, 3, 13 }, transform.parent.position);
                    break;
                default:
                    break;
            }
        }
        else
        {
            switch (enemyName)
            {
                //0: B_Bronze, 1: B_Silver, 2: B_Gold, 3: B_Zam
                //4: MoaiGrayOne, 5: MoaiGrayTwo, 6: MoaiGrayThree
                //7: MoaiRedOne, 8: MoaiRedTwo, 9: MoaiRedThree
                //10: MoaiBlueOne, 11: MoaiBlueTwo, 12: MoaiBlueThree
                //13; Cube
                //14: S_Bronze, 15: S_Silver, 16: S_Gold, 17: S_Zam
                //18: S_TotemOne, 19: S_TotemTwo, 20: S_TotemThree

                //Block 1X3 -> transform.position
                //Block 1X3M -> transform.parent.position

                case "MoaiBlue":
                    EffectManager.Instance.SpawnEffect(new int[] { 10, 11, 12 }, transform.position);
                    break;
                case "MoaiRed":
                    EffectManager.Instance.SpawnEffect(new int[] { 7, 8, 9 }, transform.position);
                    break;
                case "MoaiGray":
                case "StoneTower":
                    EffectManager.Instance.SpawnEffect(new int[] { 4, 5, 6 }, transform.position);
                    break;
                case "Totem1":
                case "Totem2":
                case "Totem3":
                case "Totem4":
                case "Totem5":
                case "Totem6":
                    EffectManager.Instance.SpawnEffect(new int[] { 18, 19, 20 }, transform.position);
                    break;
                case "Cube":
                    EffectManager.Instance.SpawnEffect(new int[] { 13 }, transform.parent.position);
                    break;
                default:
                    break;
            }
        }

        //Name or Type에 따라 분류 가능
        
        

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
