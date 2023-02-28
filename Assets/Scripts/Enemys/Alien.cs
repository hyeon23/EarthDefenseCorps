using System.Collections;
using System.Collections.Generic;
using System.Runtime.Serialization;
using UnityEngine;

public class Alien : Enemy
{
    [SerializeField]
    private GameObject enemyBulletObj_1;
    [SerializeField]
    private GameObject enemyBulletObj_2;
    [SerializeField]
    private GameObject enemyBulletObj_3;
    [SerializeField]
    private GameObject enemyBulletObj_4;
    [SerializeField]
    private float maxShotDelay;//진짜 딜레이
    [SerializeField]
    private float curShotDelay;//충전시간 = 공격속도

    [SerializeField]
    private int patternIndex;
    [SerializeField]
    private int curPatternCount;
    [SerializeField]
    private int[] maxPatternCount;

    private void OnEnable()
    {
        switch (enemyName)
        {
            case "B":
                Invoke("Stop", 2);
                break;
        }
    }
    private void Stop()
    {
        if (!gameObject.activeSelf)
            return;
        //Rigidbody2D rigid = GetComponent<Rigidbody2D>();
        //rigid.velocity = Vector2.zero;

        Invoke("Think", 2);
    }

    //Boss Patern Think
    private void Think()
    {
        patternIndex = patternIndex == 3 ? 0 : patternIndex + 1;
        curPatternCount = 0;

        switch (patternIndex)
        {
            case 0:
                FireFoward();
                break;
            case 1:
                FireShot();
                break;
            case 2:
                FireArc();
                break;
            case 3:
                FireAround();
                break;
        }
    }

    private void FireAround()
    {
        if (curHp <= 0)
            return;

        int roundNumA = 50;
        int roundNumB = 40;
        int roundNum = curPatternCount % 2 == 0 ? roundNumA : roundNumB;

        //#. Fire Arc Continue Fire
        for (int index = 0; index < roundNum; index++)
        {
            GameObject bullet = Instantiate(enemyBulletObj_1, transform.position, Quaternion.identity);
            Rigidbody2D rigid = bullet.GetComponent<Rigidbody2D>();
            Vector2 dirVec = new Vector2(Mathf.Cos(Mathf.PI * 2 * index / roundNum), Mathf.Sin(Mathf.PI * 2 * index / roundNum));//#원의 둘레, 더 많이 왕복을 원하면 2를 늘리면 됨
            rigid.AddForce(dirVec.normalized * 2, ForceMode2D.Impulse);

            Vector3 rotVec = Vector3.forward * 360 * index / roundNum + Vector3.forward * 90;
            bullet.transform.Rotate(rotVec);
        }

        curPatternCount++;
        if (curPatternCount < maxPatternCount[patternIndex])
            Invoke("FireAround", 0.15f);
        else
            Invoke("Think", 4f);
    }

    private void FireArc()
    {
        if (curHp <= 0)
            return;

        //#. Fire Arc Continue Fire
        GameObject bullet = Instantiate(enemyBulletObj_4, transform.position, Quaternion.identity);
        bullet.transform.position = transform.position;
        bullet.transform.rotation = Quaternion.identity;

        Rigidbody2D rigid = bullet.GetComponent<Rigidbody2D>();
        Vector2 dirVec = new Vector2(Mathf.Sin(Mathf.PI * 10 * curPatternCount / maxPatternCount[patternIndex]), -1f);//#원의 둘레, 더 많이 왕복을 원하면 2를 늘리면 됨
        rigid.AddForce(dirVec.normalized * 5, ForceMode2D.Impulse);

        curPatternCount++;
        if (curPatternCount < maxPatternCount[patternIndex])
            Invoke("FireArc", 0.15f);
        else
            Invoke("Think", 4f);
    }

    private void FireShot()
    {
        if (curHp <= 0)
            return;
        //#. Fire Random Shotgun Bullet to PlayerController.Instance
        for (int index = 0; index < 5; index++)
        {
            GameObject bullet = Instantiate(enemyBulletObj_3, transform.position, transform.rotation);

            Rigidbody2D rigid = bullet.GetComponent<Rigidbody2D>();
            Vector2 dirVec = PlayerController.Instance.transform.position - transform.position;
            Vector2 randVec = new Vector2(Random.Range(-0.5f, 0.5f), Random.Range(0f, 2f));
            dirVec += randVec;
            rigid.AddForce(dirVec.normalized * 5, ForceMode2D.Impulse);
        }

        curPatternCount++;
        if (curPatternCount < maxPatternCount[patternIndex])
            Invoke("FireShot", 0.15f);
        else
            Invoke("Think", 4f);
    }

    private void FireFoward()
    {
        if (curHp <= 0)
            return;
        //#Pattern 1
        GameObject bulletLL = Instantiate(enemyBulletObj_4, transform.position + Vector3.left * 0.3f, transform.rotation);
        GameObject bulletLR = Instantiate(enemyBulletObj_4, transform.position + Vector3.left * 0.45f, transform.rotation);
        GameObject bulletRL = Instantiate(enemyBulletObj_4, transform.position + Vector3.right * 0.3f, transform.rotation);
        GameObject bulletRR = Instantiate(enemyBulletObj_4, transform.position + Vector3.right * 0.45f, transform.rotation);

        Rigidbody2D rigidLL = bulletLL.GetComponent<Rigidbody2D>();
        Rigidbody2D rigidLR = bulletLR.GetComponent<Rigidbody2D>();
        Rigidbody2D rigidRL = bulletRL.GetComponent<Rigidbody2D>();
        Rigidbody2D rigidRR = bulletRR.GetComponent<Rigidbody2D>();

        rigidLL.AddForce(Vector2.down * 8, ForceMode2D.Impulse);
        rigidLR.AddForce(Vector2.down * 8, ForceMode2D.Impulse);
        rigidRL.AddForce(Vector2.down * 8, ForceMode2D.Impulse);
        rigidRR.AddForce(Vector2.down * 8, ForceMode2D.Impulse);

        //#Pattern Counting
        curPatternCount++;

        if (curPatternCount < maxPatternCount[patternIndex])
            Invoke("FireFoward", 0.15f);
        else
            Invoke("Think", 4f);
    }

    void Update()
    {
        if (enemyName == "B")
            return;
        Fire();
        Reload();
    }

    //총알 발사
    void Fire()
    {
        if (curShotDelay < maxShotDelay)
            return;
        if (enemyName == "S")
        {
            GameObject bullet = Instantiate(enemyBulletObj_1, transform.position, transform.rotation);
            Rigidbody2D rigid = bullet.GetComponent<Rigidbody2D>();
            //플레이어의 위치를 유도해 발사
            Vector3 dirVec = PlayerController.Instance.transform.position - transform.position;

            rigid.AddForce(dirVec.normalized * 6, ForceMode2D.Impulse);
        }
        else if (enemyName == "L")
        {
            GameObject bulletR = Instantiate(enemyBulletObj_1, transform.position + Vector3.right * 0.3f, transform.rotation);
            GameObject bulletL = Instantiate(enemyBulletObj_2, transform.position + Vector3.left * 0.3f, transform.rotation);

            Rigidbody2D rigidR = bulletR.GetComponent<Rigidbody2D>();
            Rigidbody2D rigidL = bulletL.GetComponent<Rigidbody2D>();

            //플레이어의 위치를 유도해 발사
            Vector3 dirVecR = PlayerController.Instance.transform.position - (transform.position + Vector3.right * 0.3f);
            Vector3 dirVecL = PlayerController.Instance.transform.position - (transform.position + Vector3.left * 0.3f);

            rigidR.AddForce(dirVecR.normalized * 4, ForceMode2D.Impulse);
            rigidL.AddForce(dirVecL.normalized * 4, ForceMode2D.Impulse);
        }


        curShotDelay = 0;//장전
    }

    void Reload()
    {
        curShotDelay += Time.deltaTime;
    }

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
        //percent에 현재 플레이어의 크리티컬 확률 대입
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
        //이러면 번개 잡을때도 스폰될듯?
        InGameTextViewer.Instance.enemyGageShown = false;

        //Name or Type에 따라 분류 가능
        switch (enemyName)
        {
            //0: B_Bronze, 1: B_Silver, 2: B_Gold, 3: B_Zam
            //4: MoaiGrayOne, 5: MoaiGrayTwo, 6: MoaiGrayThree
            //7: MoaiRedOne, 8: MoaiRedTwo, 9: MoaiRedThree
            //10: MoaiBlueOne, 11: MoaiBlueTwo, 12: MoaiBlueThree
            //13; Cube
            //14: S_Bronze, 15: S_Silver, 16: S_Gold, 17: S_Zam
            //18: S_TotemOne, 19: S_TotemTwo, 20: S_TotemThree
            
            case "MoaiBlue":
                EffectManager.Instance.SpawnEffect(new int[] { 0, 1, 2, 3, 10, 11, 12 }, transform.position);
                break;
            case "MoaiRed":
                EffectManager.Instance.SpawnEffect(new int[] { 0, 1, 2, 3, 7, 8, 9 }, transform.position);
                break;
            case "MoaiGray":
                EffectManager.Instance.SpawnEffect(new int[] { 0, 1, 2, 3, 4, 5, 6 }, transform.position);
                break;
            default:
                break;
        }

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
