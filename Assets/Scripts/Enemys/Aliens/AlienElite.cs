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

    [SerializeField]
    private float curdodgeMoveCooltime = 0f;
    private float dodgeMoveCooltime = 1f;

    void Update()
    {
        //Cool Time Set
        curdodgeMoveCooltime += Time.deltaTime;

        switch (alienState)
        {
            case AlienState.Idle:
                Fire();
                Reload();
                FollowPlayer();
                break;
            case AlienState.HitMove:
                //Dodge Move 수행
                if (curdodgeMoveCooltime < dodgeMoveCooltime) return;
                Dodge();
                curShotDelay = 0;
                curdodgeMoveCooltime = 0;
                break;
        }
    }

    private void OnTriggerEnter2D(Collider2D collision)
    {
        if (collision.tag == "Weapon")
        {
            switch (enemyName)
            {
                case "MoonAlienElite1":
                    StartCoroutine(OnHit(1, collision.transform.position));
                    break;
                default:
                    break;
            }
        }

        else if (collision.tag == "Sheld")
        {
            switch (enemyName)
            {
                case "MoonAlienElite1":
                    //특정 효과
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

        if (enemyName == "MoonAlienElite1")
        {
            Vector3 dirVec = PlayerController.Instance.transform.position - transform.position;
            GameObject bulletL = Instantiate(moonAlienElite1_Bullet1, moonAlienElite1_BulletPos1_Anime.transform.position + Vector3.left * 0.3f, GetRotFromVectors(transform.position, PlayerController.Instance.transform.position));
            GameObject bulletC = Instantiate(moonAlienElite1_Bullet1, moonAlienElite1_BulletPos1_Anime.transform.position + Vector3.down * 0.3f, GetRotFromVectors(transform.position, PlayerController.Instance.transform.position));
            GameObject bulletR = Instantiate(moonAlienElite1_Bullet1, moonAlienElite1_BulletPos1_Anime.transform.position + Vector3.right * 0.3f, GetRotFromVectors(transform.position, PlayerController.Instance.transform.position));

            Rigidbody2D rigidL = bulletL.GetComponent<Rigidbody2D>();
            Rigidbody2D rigidC = bulletC.GetComponent<Rigidbody2D>();
            Rigidbody2D rigidR = bulletR.GetComponent<Rigidbody2D>();

            //플레이어의 위치를 유도해 발사
            moonAlienElite1_BulletPos1_Anime.SetTrigger("doShoot");
            rigidL.velocity = parentRigid.velocity;
            rigidL.AddForce(dirVec.normalized * 10, ForceMode2D.Impulse);
            rigidC.velocity = parentRigid.velocity;
            rigidC.AddForce(dirVec.normalized * 10, ForceMode2D.Impulse);
            rigidR.velocity = parentRigid.velocity;
            rigidR.AddForce(dirVec.normalized * 10, ForceMode2D.Impulse);
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
            rigidR.velocity = parentRigid.velocity;
            rigidL.velocity = parentRigid.velocity;
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
        Vector3 targetPosition = new Vector3(transform.position.x, PlayerController.Instance.transform.position.y + 7, transform.position.z);
        // target 위치로 카메라 속도에 맞게 이동
        parentGameObject.transform.position = Vector3.Lerp(transform.position, targetPosition, Time.deltaTime * 4);
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
            gameObject.GetComponent<SpriteRenderer>().color = Color.red;
            yield return new WaitForSeconds(0.1f);
            gameObject.GetComponent<SpriteRenderer>().color = Color.white;
        }
        alienState = AlienState.Idle;
    }
}
