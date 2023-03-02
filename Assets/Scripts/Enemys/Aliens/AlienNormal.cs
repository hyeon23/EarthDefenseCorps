using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class AlienNormal : Alien
{
    [SerializeField]
    protected GameObject moonAlien1_Bullet1;
    [SerializeField]
    protected GameObject moonAlien2_Bullet1;

    [SerializeField]
    protected Animator moonAlien1_BulletPos1_Anime;
    [SerializeField]
    protected Animator moonAlien2_BulletPos1_Anime;

    void Update()
    {
        switch (alienState)
        {
            case AlienState.Idle:
                Fire();
                Reload();
                FollowPlayer();
                break;
            case AlienState.HitMove:
                //Dodge Move 수행
                break;
        }
    }

    private void OnTriggerEnter2D(Collider2D collision)
    {
        if (collision.tag == "PlayerTrigger")
        {
            switch (enemyName)
            {
                case "MoonAlien1":
                    //회피(위치 재설정)
                    //-재장전(curLoad = 0)
                    break;
                default:
                    break;
            }
        }
        else if (collision.tag == "Sheld")
        {
            switch (enemyName)
            {
                case "MoonAlien1":
                    //특정 효과
                    break;
                default:
                    break;
            }
        }
        else if (collision.tag == "Weapon")
        {
            switch (enemyName)
            {
                case "MoonAlien1":
                    StartCoroutine(OnHit(1, collision.transform.position));
                    break;
                default:
                    break;
            }
        }
    }

    //총알 발사
    protected void Fire()
    {
        if (curShotDelay < maxShotDelay)
            return;

        if (enemyName == "MoonAlien1")
        {
            Vector3 dirVec = PlayerController.Instance.transform.position - transform.position;
            
            GameObject bullet = Instantiate(moonAlien1_Bullet1, moonAlien1_BulletPos1_Anime.transform.position, GetRotFromVectors(transform.position, PlayerController.Instance.transform.position));
            Rigidbody2D rigid = bullet.GetComponent<Rigidbody2D>();
            //플레이어의 위치를 유도해 발사
            moonAlien1_BulletPos1_Anime.SetTrigger("doShoot");

            rigid.AddForce(dirVec.normalized * 6, ForceMode2D.Impulse);
        }
        else if (enemyName == "MoonAlien2")
        {
            GameObject bulletR = Instantiate(moonAlien2_Bullet1, transform.position + Vector3.right * 0.3f, transform.rotation);
            GameObject bulletL = Instantiate(moonAlien2_Bullet1, transform.position + Vector3.left * 0.3f, transform.rotation);

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


    //플레이어를 따라갈 때,
    //피격당해 이동할 때,
    //Idle 상태 --> 공격 가능
    private void FollowPlayer()
    {
        // target 위치 찾기
        Vector3 targetPosition = new Vector3(transform.position.x, PlayerController.Instance.transform.position.y + 8, transform.position.z);
        // target 위치로 카메라 속도에 맞게 이동
        parentGameObject.transform.position = Vector3.Lerp(transform.position, targetPosition, Time.deltaTime * 3);
    }
}
