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

    [SerializeField]
    private float curdodgeMoveCooltime = 0f;
    private float dodgeMoveCooltime = 2f;

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
                case "MoonAlien1":
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
                case "MoonAlien1":
                    //특정 효과
                    break;
                default:
                    break;
            }
        }
        else if (collision.tag == "Special")
        {
            switch (enemyName)
            {
                case "MoonAlien1":
                    //특정 효과
                    if (!parentGameObject.activeSelf) return;
                    StartCoroutine(OnHit(1, collision.transform.position));
                    break;
                default:
                    break;
            }
        }
    }

    private void OnTriggerStay2D(Collider2D collision)
    {
        if (collision.tag == "Special")
        {
            switch (enemyName)
            {
                case "MoonAlien1":
                    //특정 효과
                    if (!parentGameObject.activeSelf) return;
                    StartCoroutine(OnHit(1, collision.transform.position));
                    break;
                default:
                    break;
            }
        }
    }

    private void OnTriggerExit2D(Collider2D collision)
    {
        if (collision.tag == "Special")
        {
            switch (enemyName)
            {
                case "MoonAlien1":
                    //특정 효과
                    if (!parentGameObject.activeSelf) return;
                    parentRigid.velocity = Vector3.zero;
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
            rigid.velocity = parentRigid.velocity;
            rigid.AddForce(dirVec.normalized * 20, ForceMode2D.Impulse);
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

    public void OnDead(bool isAttacked = false)
    {
        gameObject.SetActive(false);

        //Get Gold
        InGameTextViewer.Instance.PlusGetGold(gold);

        if (GameManager.Instance.curHitEnemy == gameObject)
        {
            InGameTextViewer.Instance.enemyGageShown = false;
        }

        switch (enemyName)
        {
            case "MoonAlien1":
                EffectManager.Instance.SpawnEffect(new int[] { 32 }, transform.position);
                break;
            default:
                break;
        }

        //Destroy
        if (ancestorGameObject.transform.childCount == 1)
        {
            ancestorGameObject.SetActive(false);
            Destroy(ancestorGameObject, 1);
        }
        else
        {
            parentGameObject.SetActive(false);
            Destroy(parentGameObject, 1);
        }
    }
}
