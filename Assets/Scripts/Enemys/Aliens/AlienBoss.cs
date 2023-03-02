using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class AlienBoss : Alien
{
    [SerializeField]
    protected GameObject moonAlienBoss1_Bullet1;
    [SerializeField]
    protected GameObject moonAlienBoss1_Bullet2;

    [SerializeField]
    protected Animator moonAlienBoss1_BulletPos1_Anime;
    [SerializeField]
    protected Animator moonAlienBoss1_BulletPos2_Anime;

    void Start()
    {
        Invoke("Stop", 2);
    }

    //Boss Patern Think
    private void Stop()
    {
        if (!gameObject.activeSelf)
            return;
        Rigidbody2D rigid = GetComponent<Rigidbody2D>();
        rigid.velocity = Vector2.zero;

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

    //BossPaternFireAround
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
            GameObject bullet = Instantiate(moonAlienBoss1_Bullet1, transform.position, Quaternion.identity);
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

    //BossPaternFireArc

    private void FireArc()
    {
        if (curHp <= 0)
            return;

        //#. Fire Arc Continue Fire
        GameObject bullet = Instantiate(moonAlienBoss1_Bullet2, transform.position, Quaternion.identity);
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

    //BossPaternFireShot
    private void FireShot()
    {
        if (curHp <= 0)
            return;
        //#. Fire Random Shotgun Bullet to PlayerController.Instance
        for (int index = 0; index < 5; index++)
        {
            GameObject bullet = Instantiate(moonAlienBoss1_Bullet1, transform.position, transform.rotation);

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

    //BossPaternFireForward
    private void FireFoward()
    {
        if (curHp <= 0)
            return;
        //#Pattern 1
        GameObject bulletLL = Instantiate(moonAlienBoss1_Bullet1, transform.position + Vector3.left * 0.3f, transform.rotation);
        GameObject bulletLR = Instantiate(moonAlienBoss1_Bullet1, transform.position + Vector3.left * 0.45f, transform.rotation);
        GameObject bulletRL = Instantiate(moonAlienBoss1_Bullet1, transform.position + Vector3.right * 0.3f, transform.rotation);
        GameObject bulletRR = Instantiate(moonAlienBoss1_Bullet1, transform.position + Vector3.right * 0.45f, transform.rotation);

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
}
