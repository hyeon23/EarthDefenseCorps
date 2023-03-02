using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class AlienBullet : MonoBehaviour
{
    [SerializeField]
    private GameObject enemyBulletObj_1;
    [SerializeField]
    private GameObject enemyBulletObj_2;

    public int dmg;
    public bool isRotate;

    private void Update()//Auto Rotation Bullet
    {
        if (isRotate)
            transform.Rotate(Vector3.forward * 10);
    }

    private void OnTriggerEnter2D(Collider2D collision)
    {
        //Bullet 없애는법
        if (collision.gameObject.tag == "PlayerTrigger")
        {
            //Type1
            Destroy(gameObject);
        }
        else if(collision.gameObject.tag == "BlockTrigger")
        {
            Destroy(gameObject);
        }
        else if (collision.gameObject.tag == "Weapon")
        {

        }
        else if (collision.gameObject.tag == "Sheld")
        {

        }
    }

    //public IEnumerator OnHit(int damage, Vector2 onHitPosition)
    //{
    //    bool isCritical = CriticalCheck(damage, 33f);

    //    if (isCritical) damage *= Mathf.RoundToInt(damage * 1.5f);
    //    curHp -= damage;

    //    InGameTextViewer.Instance.SetEnemyImage(true, curHp, maxHp, enemyType);
    //    InGameTextViewer.Instance.SpawnHUDText(damage.ToString(), isCritical ? Color.red : Color.white, onHitPosition);

    //    if (curHp <= 0)
    //    {
    //        OnDead();
    //    }
    //    else
    //    {
    //        gameObject.GetComponent<SpriteRenderer>().color = Color.red;
    //        yield return new WaitForSeconds(0.1f);
    //        gameObject.GetComponent<SpriteRenderer>().color = Color.white;
    //    }
    //}

    //public bool CriticalCheck(int damage, float percent)
    //{
    //    float r = Random.Range(0f, 100f) % 100;
    //    //percent 조건을 충족하면 크리티컬 발동
    //    //percent에 현재 플레이어의 크리티컬 확률 대입
    //    if (r < percent)
    //    {
    //        return true;
    //    }
    //    else
    //    {
    //        return false;
    //    }
    //}

    //public void OnDead()
    //{
    //    //이러면 번개 잡을때도 스폰될듯?
    //    InGameTextViewer.Instance.enemyGageShown = false;

    //    //Name or Type에 따라 분류 가능
    //    switch (enemyName)
    //    {
    //        //0: B_Bronze, 1: B_Silver, 2: B_Gold, 3: B_Zam
    //        //4: MoaiGrayOne, 5: MoaiGrayTwo, 6: MoaiGrayThree
    //        //7: MoaiRedOne, 8: MoaiRedTwo, 9: MoaiRedThree
    //        //10: MoaiBlueOne, 11: MoaiBlueTwo, 12: MoaiBlueThree
    //        //13; Cube
    //        //14: S_Bronze, 15: S_Silver, 16: S_Gold, 17: S_Zam
    //        //18: S_TotemOne, 19: S_TotemTwo, 20: S_TotemThree

    //        case "MoaiBlue":
    //            EffectManager.Instance.SpawnEffect(new int[] { 0, 1, 2, 3, 10, 11, 12 }, transform.position);
    //            break;
    //        case "MoaiRed":
    //            EffectManager.Instance.SpawnEffect(new int[] { 0, 1, 2, 3, 7, 8, 9 }, transform.position);
    //            break;
    //        case "MoaiGray":
    //            EffectManager.Instance.SpawnEffect(new int[] { 0, 1, 2, 3, 4, 5, 6 }, transform.position);
    //            break;
    //        default:
    //            break;
    //    }

    //    if (ancestorGameObject.transform.childCount == 1)
    //    {
    //        Destroy(ancestorGameObject);
    //    }
    //    else
    //    {
    //        Destroy(parentGameObject);
    //    }
    //}
}
