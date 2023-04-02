using System.Collections;
using UnityEngine;

public class AlienBoss : Alien
{
    [SerializeField]
    protected int patternIndex;
    [SerializeField]
    protected int curPatternCount;
    [SerializeField]
    protected int[] maxPatternCount;

    public GameObject floor;

    [SerializeField]
    protected GameObject moonAlienBoss1_Bullet1;
    [SerializeField]
    protected GameObject moonAlienBoss1_Bullet2;

    [SerializeField]
    protected Animator moonAlienBoss1_BulletPos1_Anime;
    [SerializeField]
    protected Animator moonAlienBoss1_BulletPos2_Anime;

    [SerializeField]
    private float curThinkCooltime = 0f;
    private float thinkCooltime = 7;
    [SerializeField]

    private float turnDegree = 0f;
    private bool isDead = false;
    private bool isTurning = false;
    private bool isTakingDown = false;
    private bool sheldTriggered = false;

    public bool isCrushedPlayer = false;
    public bool isOverlappedPlayer = false;

    [SerializeField]
    private GameObject[] unActiveFeatures;

    [SerializeField]
    private GameObject[] activeFeatures;

    private void Start()
    {
        parentRigid.velocity = Vector2.zero;
    }

    void Update()
    {
        //Cool Time Set
        if(!isTurning || !isTakingDown || isDead)
            curThinkCooltime += Time.deltaTime;

        switch (alienState)
        {
            //랜덤 패턴 수행
            //패턴 뽑기
            //뽑힌 패턴에 대한 tern 수행
            //뽑힌 패턴 수행
            case AlienState.Idle:

                //주의 후에 추가
                if (!isTakingDown)
                    FollowPlayerBoss();

                if (curThinkCooltime < thinkCooltime) return;

                Think();
                break;
            case AlienState.Turn:
                Turn(turnDegree);
                break;
            case AlienState.Pattern:
                if (isTurning || isTakingDown || isDead) return;
                PatternTrigger(patternIndex);
                break;
            case AlienState.Dead:

                break;
        }
    }

    //Boss Patern Think
    private void Think()
    {
        patternIndex = Random.Range(0, maxPatternCount.Length);
        curPatternCount = 0;

        switch (patternIndex)
        {
            case 0:
            case 1:
            case 2:
                turnDegree = 0;
                break;
            case 3:
            case 4:
                turnDegree = -120;
                break;
            case 5:
            case 6:
            case 7:
                turnDegree = 120;
                break;
        }
        curThinkCooltime = 0;
        alienState = AlienState.Turn;
    }

    private void Turn(float degree)
    {
        StartCoroutine(Turning(degree));
        alienState = AlienState.Pattern;
        SoundManager.Instance.SFXPlay(SoundManager.SFX.AlienBossTurn, 0.3f);
    }

    private IEnumerator Turning(float degree)
    {
        isTurning = true;

        float start = 0;
        float end = 2.5f;
        
        float percent = 0;

        Quaternion startRot = transform.rotation;
        Quaternion targetRot = Quaternion.Euler(new Vector3(0, 0, degree));
        
        while (percent <= 1)
        {
            start += Time.deltaTime;
            percent = start / end;
            transform.rotation = Quaternion.Lerp(startRot, targetRot, percent);
            yield return null;
        }
        curThinkCooltime = 0;

        yield return new WaitForSeconds(1f);

        isTurning = false;
    }

    private void PatternTrigger(int patternIndex)
    {
        curPatternCount = 0;
        switch (patternIndex)
        {
            case 0:
                curThinkCooltime = 4;
                FireFoward();
                break;
            case 1:
                curThinkCooltime = 4;
                FireFoward2();
                break;
            case 2:
                curThinkCooltime = 3;
                FireShot();
                break;
            case 3:
                FireArc();
                break;
            case 4:
                curThinkCooltime = 2;
                FireAround();
                break;
            case 5:
                curThinkCooltime = 3;
                TakeDown1();
                break;
            case 6:
                curThinkCooltime = 2;
                TakeDown2();
                break;
            case 7:
                curThinkCooltime = 0;
                TakeDown3();
                break;
        }
        alienState = AlienState.Idle;
    }

    //BossPaternFireForward
    private void FireFoward()
    {
        SoundManager.Instance.SFXPlay(SoundManager.SFX.AlienNormalShoot, 0.3f);

        //#Pattern 1
        GameObject bulletLL = Instantiate(moonAlienBoss1_Bullet1, transform.position + Vector3.left * 0.3f, parentGameObject.transform.rotation);
        GameObject bulletLR = Instantiate(moonAlienBoss1_Bullet1, transform.position + Vector3.left * 0.45f, parentGameObject.transform.rotation);
        GameObject bulletRL = Instantiate(moonAlienBoss1_Bullet1, transform.position + Vector3.right * 0.3f, parentGameObject.transform.rotation);
        GameObject bulletRR = Instantiate(moonAlienBoss1_Bullet1, transform.position + Vector3.right * 0.45f, parentGameObject.transform.rotation);

        Rigidbody2D rigidLL = bulletLL.GetComponent<Rigidbody2D>();
        Rigidbody2D rigidLR = bulletLR.GetComponent<Rigidbody2D>();
        Rigidbody2D rigidRL = bulletRL.GetComponent<Rigidbody2D>();
        Rigidbody2D rigidRR = bulletRR.GetComponent<Rigidbody2D>();

        rigidLL.AddForce(Vector2.down * 17, ForceMode2D.Impulse);
        rigidLR.AddForce(Vector2.down * 17, ForceMode2D.Impulse);
        rigidRL.AddForce(Vector2.down * 17, ForceMode2D.Impulse);
        rigidRR.AddForce(Vector2.down * 17, ForceMode2D.Impulse);

        //#Pattern Counting
        curPatternCount++;
        

        if (curPatternCount < maxPatternCount[patternIndex])
            Invoke("FireFoward", 0.15f);
        else return;
    }

    private void FireFoward2()
    {
        SoundManager.Instance.SFXPlay(SoundManager.SFX.AlienNormalShoot, 0.3f);

        //#Pattern 1
        GameObject bulletLL = Instantiate(moonAlienBoss1_Bullet1, transform.position + Vector3.left * 2.5f, parentGameObject.transform.rotation);
        GameObject bulletLR = Instantiate(moonAlienBoss1_Bullet1, transform.position + Vector3.left * 2.25f, parentGameObject.transform.rotation);
        GameObject bulletRL = Instantiate(moonAlienBoss1_Bullet1, transform.position + Vector3.right * 2.25f, parentGameObject.transform.rotation);
        GameObject bulletRR = Instantiate(moonAlienBoss1_Bullet1, transform.position + Vector3.right * 2.5f, parentGameObject.transform.rotation);

        Rigidbody2D rigidLL = bulletLL.GetComponent<Rigidbody2D>();
        Rigidbody2D rigidLR = bulletLR.GetComponent<Rigidbody2D>();
        Rigidbody2D rigidRL = bulletRL.GetComponent<Rigidbody2D>();
        Rigidbody2D rigidRR = bulletRR.GetComponent<Rigidbody2D>();

        rigidLL.AddForce(Vector2.down * 17, ForceMode2D.Impulse);
        rigidLR.AddForce(Vector2.down * 17, ForceMode2D.Impulse);
        rigidRL.AddForce(Vector2.down * 17, ForceMode2D.Impulse);
        rigidRR.AddForce(Vector2.down * 17, ForceMode2D.Impulse);

        //#Pattern Counting
        curPatternCount++;

        if (curPatternCount < maxPatternCount[patternIndex])
            Invoke("FireFoward2", 0.15f);
        else return;
    }


    //BossPaternFireShot
    private void FireShot()
    {
        //#. Fire Random Shotgun Bullet to PlayerController.Instance
        for (int index = 0; index < 5; index++)
        {
            SoundManager.Instance.SFXPlay(SoundManager.SFX.AlienNormalShoot, 0.1f);

            GameObject bullet = Instantiate(moonAlienBoss1_Bullet1, transform.position, parentGameObject.transform.rotation);

            Rigidbody2D rigid = bullet.GetComponent<Rigidbody2D>();
            Vector2 dirVec = PlayerController.Instance.transform.position - transform.position;
            Vector2 randVec = new Vector2(Random.Range(-0.5f, 0.5f), Random.Range(0f, 2f));
            dirVec += randVec;
            rigid.AddForce(dirVec.normalized * 8, ForceMode2D.Impulse);
        }

        curPatternCount++;
        if (curPatternCount < maxPatternCount[patternIndex])
            Invoke("FireShot", 0.15f);
        else return;
    }

    //BossPaternFireArc
    private void FireArc()
    {
        curThinkCooltime = 0;
        //#. Fire Arc Continue Fire
        SoundManager.Instance.SFXPlay(SoundManager.SFX.AlienEliteShoot, 0.3f);

        GameObject bullet = Instantiate(moonAlienBoss1_Bullet2, transform.position, Quaternion.identity);
        bullet.transform.position = transform.position;
        bullet.transform.rotation = Quaternion.identity;

        Rigidbody2D rigid = bullet.GetComponent<Rigidbody2D>();
        Vector2 dirVec = new Vector2(Mathf.Sin(Mathf.PI * 15 * curPatternCount / maxPatternCount[patternIndex]), -1f);//#원의 둘레, 더 많이 왕복을 원하면 2를 늘리면 됨
        rigid.AddForce(dirVec.normalized * 12, ForceMode2D.Impulse);

        curPatternCount++;
        if (curPatternCount < maxPatternCount[patternIndex])
            Invoke("FireArc", 0.1f);
            
        else
            return;
    }

    //BossPaternFireAround
    private void FireAround()
    {
        int roundNumA = 51;
        int roundNumB = 30;
        int roundNum = curPatternCount % 2 == 0 ? roundNumA : roundNumB;

        //#. Fire Arc Continue Fire
        for (int index = 0; index < roundNum; index++)
        {
            GameObject bullet = Instantiate(moonAlienBoss1_Bullet2, transform.position, Quaternion.identity);
            SoundManager.Instance.SFXPlay(SoundManager.SFX.AlienEliteShoot, 0.3f);
            Rigidbody2D rigid = bullet.GetComponent<Rigidbody2D>();
            Vector2 dirVec = new Vector2(Mathf.Cos(Mathf.PI * 2 * index / roundNum), Mathf.Sin(Mathf.PI * 2 * index / roundNum));//#원의 둘레, 더 많이 왕복을 원하면 2를 늘리면 됨
            rigid.AddForce(dirVec.normalized * 12, ForceMode2D.Impulse);

            Vector3 rotVec = Vector3.forward * 120 * index / roundNum + Vector3.forward * 90;
            bullet.transform.Rotate(rotVec);
        }

        curPatternCount++;
        if (curPatternCount < maxPatternCount[patternIndex])
            Invoke("FireAround", 0.15f);
        else return;
    }

    //누르기 X1, 누르기 X2, 누르기 X3
    private void TakeDown1()
    {
        StartCoroutine(TakingUpTrigger(1));
    }

    private void TakeDown2()
    {
        StartCoroutine(TakingUpTrigger(2));
    }

    private void TakeDown3()
    {
        StartCoroutine(TakingUpTrigger(3));
    }

    IEnumerator TakingUpTrigger(int takingCount)
    {
        for(int i = 0; i < takingCount; i++)
        {
            StartCoroutine(TakingUp());
            yield return new WaitForSeconds(2.5f);
        }
    }

    IEnumerator TakingUp()
    {
        isTakingDown = true;

        float start = 0;
        float end = 0.25f;

        float percent = 0;

        Vector3 startPos = transform.parent.position;
        Vector3 targetPos = new Vector3(0, 8, 0);



        while (percent <= 1)
        {
            start += Time.deltaTime;
            percent = start / end;
            transform.parent.position = Vector3.Lerp(startPos, targetPos, percent);
            yield return null;
        }

        StartCoroutine(Taking());
    }

    IEnumerator Taking()
    {
        float start = 0;
        float end = 1f;

        float percent = 0;

        Vector3 startPos = new Vector3(0, 8, 0);
        Vector3 targetPos = new Vector3(0, 10, 0);

        SoundManager.Instance.SFXPlay(SoundManager.SFX.AlienBossTakingUp);

        while (percent <= 1)
        {
            start += Time.deltaTime;
            percent = start / end;
            transform.parent.position = Vector3.Lerp(startPos, targetPos, percent);
            yield return null;
        }

        StartCoroutine(TakingDown());
    }

    IEnumerator TakingDown()
    {
        float start = 0;
        float end = 0.25f;

        float percent = 0;

        SoundManager.Instance.SFXPlay(SoundManager.SFX.AlienBossTakingDown);

        Vector3 startPos = new Vector3(0, 10, 0);
        Vector3 targetPos = GameObject.Find("Floor").transform.position + new Vector3(0, 7f, 0);

        while (percent <= 1)
        {
            if (sheldTriggered)
            {
                sheldTriggered = false;
                isTakingDown = false;
                alienState = AlienState.Idle;
                yield break;
            }

            start += Time.deltaTime;
            percent = start / end;
            transform.parent.position = Vector3.Lerp(startPos, targetPos, percent);
            yield return null;
        }

        isTakingDown = false;
    }


    private void OnTriggerEnter2D(Collider2D collision)
    {
        if (isDead) return;

        if (collision.tag == "PlayerTrigger")
        {
            switch (enemyName)
            {
                case "Moon":
                    isOverlappedPlayer = true;
                    PlayerController.Instance.isOverlapped = true;
                    break;
                default:
                    break;
            }
        }
        else if (collision.tag == "Floor")
        {
            switch (enemyName)
            {
                case "Moon":
                    isCrushedPlayer = true;
                    PlayerController.Instance.isCrushed = true;
                    break;
                default:
                    break;
            }
        }
        else if (collision.tag == "Sheld")
        {
            switch (enemyName)
            {
                case "Moon":
                    if (isTakingDown)
                    {
                        sheldTriggered = true;
                    }
                    break;
                default:
                    break;
            }
        }
        else if (collision.tag == "Weapon")
        {
            switch (enemyName)
            {
                case "Moon":
                    StartCoroutine(OnHit(DataManager.Instance.PlayerATK, collision.transform.position));
                    break;
                default:
                    break;
            }
        }
        else if (collision.tag == "Special")
        {
            switch (enemyName)
            {
                case "Moon":
                    //특정 효과
                    if (!parentGameObject.activeSelf) return;
                    StartCoroutine(OnHit(DataManager.Instance.PlayerATK, collision.transform.position));

                    StopAllCoroutines();
                    alienState = AlienState.Idle;
                    break;
                default:
                    break;
            }
        }
    }

    private void OnTriggerStay2D(Collider2D collision)
    {
        if (isDead) return;

        if (collision.tag == "Special")
        {
            switch (enemyName)
            {
                case "Moon":
                    //특정 효과
                    if (!parentGameObject.activeSelf) return;
                    StartCoroutine(OnHit(DataManager.Instance.PlayerATK, collision.transform.position));
                    break;
                default:
                    break;
            }
        }
    }

    private void OnTriggerExit2D(Collider2D collision)
    {
        if (isDead) return;

        if (collision.tag == "PlayerTrigger")
        {
            switch (enemyName)
            {
                case "Moon":
                    isOverlappedPlayer = false;
                    PlayerController.Instance.isOverlapped = false;
                    break;
                default:
                    break;
            }
        }
        else if (collision.tag == "Floor")
        {
            switch (enemyName)
            {
                case "Moon":
                    isCrushedPlayer = false;
                    PlayerController.Instance.isCrushed = false;
                    break;
                default:
                    break;
            }
        }
        else if (collision.tag == "Special")
        {
            switch (enemyName)
            {
                case "Moon":
                    if (!parentGameObject.activeSelf) return;
                    break;
                default:
                    break;
            }
        }
    }

    public IEnumerator OnHit(int damage, Vector2 onHitPosition)
    {
        GameManager.Instance.curHitEnemy = gameObject;

        bool isCritical = CriticalCheck(DataManager.Instance.PlayerCriticalRate);

        if (isCritical) damage *= Mathf.RoundToInt(damage * DataManager.Instance.PlayerCriticalDamage / 100);

        curHp -= damage;

        InGameTextViewer.Instance.SetEnemyImage(true, curHp, maxHp, enemyType);
        InGameTextViewer.Instance.SpawnHUDText(damage.ToString(), isCritical ? Color.red : Color.white, onHitPosition);

        if (curHp <= 0)
        {
            isDead = true;
            alienState = AlienState.Dead;
            gameObject.layer = LayerMask.NameToLayer("AlienBossDead");
            OnDead(true);
        }
        else
        {
            gameObject.GetComponent<SpriteRenderer>().color = Color.red;
            yield return new WaitForSeconds(0.1f);
            gameObject.GetComponent<SpriteRenderer>().color = Color.white;
        }
    }

    public void OnDead(bool isAttacked = false)
    {
        //Get Gold
        InGameTextViewer.Instance.PlusGetGold(gold);

        if (GameManager.Instance.curHitEnemy == gameObject)
        {
            InGameTextViewer.Instance.enemyGageShown = false;
        }

        switch (enemyName)
        {
            case "Moon":
                EffectManager.Instance.SpawnMoonBossEffect(new int[] { 31 }, transform);
                break;
            default:
                break;
        }

        StartCoroutine(DeadTaking());

        //눈 변경
        for (int i = 0; i < unActiveFeatures.Length; i++)
        {
            unActiveFeatures[i].SetActive(false);
        }

        for (int i = 0; i < activeFeatures.Length; i++)
        {
            activeFeatures[i].SetActive(true);
        }

        //GameClear

    }

    IEnumerator DeadTaking()
    {
        float start = 0;
        float end = 5f;

        float percent = 0;

        Vector3 startPos = transform.parent.position;
        Vector3 targetPos = new Vector3(0, 3, 0);

        while (percent <= 1)
        {
            start += Time.deltaTime;
            percent = start / end;
            transform.parent.position = Vector3.Lerp(startPos, targetPos, percent);
            yield return null;
        }
    }
}
