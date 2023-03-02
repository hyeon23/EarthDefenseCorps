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
                //Dodge Move ����
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
                    //ȸ��(��ġ �缳��)
                    //-������(curLoad = 0)
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
                    //Ư�� ȿ��
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

    //�Ѿ� �߻�
    protected void Fire()
    {
        if (curShotDelay < maxShotDelay)
            return;

        if (enemyName == "MoonAlien1")
        {
            Vector3 dirVec = PlayerController.Instance.transform.position - transform.position;
            
            GameObject bullet = Instantiate(moonAlien1_Bullet1, moonAlien1_BulletPos1_Anime.transform.position, GetRotFromVectors(transform.position, PlayerController.Instance.transform.position));
            Rigidbody2D rigid = bullet.GetComponent<Rigidbody2D>();
            //�÷��̾��� ��ġ�� ������ �߻�
            moonAlien1_BulletPos1_Anime.SetTrigger("doShoot");

            rigid.AddForce(dirVec.normalized * 6, ForceMode2D.Impulse);
        }
        else if (enemyName == "MoonAlien2")
        {
            GameObject bulletR = Instantiate(moonAlien2_Bullet1, transform.position + Vector3.right * 0.3f, transform.rotation);
            GameObject bulletL = Instantiate(moonAlien2_Bullet1, transform.position + Vector3.left * 0.3f, transform.rotation);

            Rigidbody2D rigidR = bulletR.GetComponent<Rigidbody2D>();
            Rigidbody2D rigidL = bulletL.GetComponent<Rigidbody2D>();

            //�÷��̾��� ��ġ�� ������ �߻�
            Vector3 dirVecR = PlayerController.Instance.transform.position - (transform.position + Vector3.right * 0.3f);
            Vector3 dirVecL = PlayerController.Instance.transform.position - (transform.position + Vector3.left * 0.3f);

            rigidR.AddForce(dirVecR.normalized * 4, ForceMode2D.Impulse);
            rigidL.AddForce(dirVecL.normalized * 4, ForceMode2D.Impulse);
        }

        curShotDelay = 0;//����
    }

    protected void Reload()
    {
        curShotDelay += Time.deltaTime;
    }


    //�÷��̾ ���� ��,
    //�ǰݴ��� �̵��� ��,
    //Idle ���� --> ���� ����
    private void FollowPlayer()
    {
        // target ��ġ ã��
        Vector3 targetPosition = new Vector3(transform.position.x, PlayerController.Instance.transform.position.y + 8, transform.position.z);
        // target ��ġ�� ī�޶� �ӵ��� �°� �̵�
        parentGameObject.transform.position = Vector3.Lerp(transform.position, targetPosition, Time.deltaTime * 3);
    }
}
