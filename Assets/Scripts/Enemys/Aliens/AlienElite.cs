using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class AlienElite : Alien
{
    [SerializeField]
    protected GameObject moonAlienElite1_Bullet1;
    [SerializeField]
    protected GameObject moonAlienElite2_Bullet1;

    [SerializeField]
    protected Animator moonAlienElite1_BulletPos1_Anime;
    [SerializeField]
    protected Animator moonAlienElite2_BulletPos1_Anime;

    void Update()
    {
        Fire();
        Reload();
    }

    //총알 발사
    protected void Fire()
    {
        if (curShotDelay < maxShotDelay)
            return;

        if (enemyName == "MoonAlienElite1")
        {
            Vector3 dirVec = PlayerController.Instance.transform.position - transform.position;

            GameObject bullet = Instantiate(moonAlienElite1_Bullet1, moonAlienElite1_BulletPos1_Anime.transform.position, GetRotFromVectors(transform.position, PlayerController.Instance.transform.position));
            Rigidbody2D rigid = bullet.GetComponent<Rigidbody2D>();
            //플레이어의 위치를 유도해 발사
            moonAlienElite1_BulletPos1_Anime.SetTrigger("doShoot");

            rigid.AddForce(dirVec.normalized * 6, ForceMode2D.Impulse);
        }
        else if (enemyName == "MoonAlienElite2")
        {
            GameObject bulletR = Instantiate(moonAlienElite2_Bullet1, transform.position + Vector3.right * 0.3f, transform.rotation);
            GameObject bulletL = Instantiate(moonAlienElite2_Bullet1, transform.position + Vector3.left * 0.3f, transform.rotation);

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

    protected void Reload()
    {
        curShotDelay += Time.deltaTime;
    }
}
