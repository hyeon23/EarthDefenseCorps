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
                //Dodge Move ����
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
                    //Ư�� ȿ��
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
                    //Ư�� ȿ��
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
                case "MoonAlienElite1":
                    //Ư�� ȿ��
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
                case "MoonAlienElite1":
                    //Ư�� ȿ��
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
            //�÷��̾��� ��ġ�� ������ �߻�
            moonAlienElite1_BulletPos1_Anime.SetTrigger("doShoot");

            rigidC.velocity = parentRigid.velocity;
            rigidC.AddForce(dirVec.normalized * 10, ForceMode2D.Impulse);

            yield return new WaitForSeconds(order);
        }
    }

    //�Ѿ� �߻�
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

            //�÷��̾��� ��ġ�� ������ �߻�
            Vector3 dirVecR = PlayerController.Instance.transform.position - (transform.position + Vector3.right * 0.3f);
            Vector3 dirVecL = PlayerController.Instance.transform.position - (transform.position + Vector3.left * 0.3f);
            rigidR.velocity = parentRigid.velocity;
            rigidL.velocity = parentRigid.velocity;
            rigidR.AddForce(dirVecR.normalized * 4, ForceMode2D.Impulse);
            rigidL.AddForce(dirVecL.normalized * 4, ForceMode2D.Impulse);
        }

        curShotDelay = 0;//����
    }

    protected void Reload()
    {
        curShotDelay += Time.deltaTime;
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
