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
                FollowPlayer(new Vector3(transform.position.x, PlayerController.Instance.transform.position.y + 9, transform.position.z));
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
                    StartCoroutine(OnHit(DataManager.Instance.playerData.playerATK, collision.transform.position));
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
        else if (collision.tag == "Special")
        {
            switch (enemyName)
            {
                case "MoonAlienElite1":
                    //특정 효과
                    if (!parentGameObject.activeSelf) return;

                    if (PlayerController.Instance.specialTargetEnemyCollider != gameObject.GetComponent<Collider2D>()) return;

                    StartCoroutine(OnHit(DataManager.Instance.playerData.playerATK, collision.transform.position));
                    break;
                default:
                    break;
            }
        }
    }

    //private void OnTriggerStay2D(Collider2D collision)
    //{
    //    if (collision.tag == "Special")
    //    {
    //        switch (enemyName)
    //        {
    //            case "MoonAlienElite1":
    //                //특정 효과
    //                if (!parentGameObject.activeSelf) return;
    //                StartCoroutine(OnHit(DataManager.Instance.playerData.playerATK, collision.transform.position));
    //                break;
    //            default:
    //                break;
    //        }
    //    }
    //}

    private void OnTriggerExit2D(Collider2D collision)
    {
        if (collision.tag == "Special")
        {
            switch (enemyName)
            {
                case "MoonAlienElite1":
                    //특정 효과
                    if (!parentGameObject.activeSelf) return;
                    parentRigid.velocity = Vector3.zero;
                    break;
                default:
                    break;
            }
        }
    }

    IEnumerator Shoot(float order)
    {
        for (int i = 0; i < 3; i++)
        {
            Vector3 dirVec = PlayerController.Instance.transform.position - transform.position;

            GameObject bulletC = Instantiate(moonAlienElite1_Bullet1, moonAlienElite1_BulletPos1_Anime.transform.position, GetRotFromVectors(transform.position, PlayerController.Instance.transform.position));

            Rigidbody2D rigidC = bulletC.GetComponent<Rigidbody2D>();
            //플레이어의 위치를 유도해 발사
            moonAlienElite1_BulletPos1_Anime.SetTrigger("doShoot");
            SoundManager.Instance.SFXPlay(SoundManager.SFX.AlienEliteShoot);
            rigidC.velocity = parentRigid.velocity;
            rigidC.AddForce(dirVec.normalized * 10, ForceMode2D.Impulse);

            yield return new WaitForSeconds(order);
        }
    }

    //총알 발사
    protected void Fire()
    {
        if (curShotDelay < maxShotDelay)    
            return;

        if (enemyName == "MoonAlienElite1")
        {
            StartCoroutine(Shoot(0.25f));
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

    

    public IEnumerator OnHit(int damage, Vector2 onHitPosition)
    {
        alienState = AlienState.HitMove;
        GameManager.Instance.curHitEnemy = gameObject;

        bool isCritical = CriticalCheck(DataManager.Instance.playerData.PlayerCriticalRate);

        if (isCritical) damage = Mathf.RoundToInt(damage * DataManager.Instance.playerData.PlayerCriticalDamage / 100);

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

        SoundManager.Instance.SFXPlay(SoundManager.SFX.AlienDead);

        if (GameManager.Instance.curHitEnemy == gameObject)
        {
            InGameTextViewer.Instance.enemyGageShown = false;
        }

        switch (enemyName)
        {
            case "MoonAlienElite1":
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
