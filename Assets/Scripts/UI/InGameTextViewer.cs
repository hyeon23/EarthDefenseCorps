using System.Collections;
using UnityEngine.UI;
using UnityEngine;
using TMPro;

public class InGameTextViewer : MonoBehaviour
{
    private static InGameTextViewer instance = null;

    public bool[] backGageHit = new bool[3] { false, false, false };

    [Header("PlayerGageText")]
    [SerializeField]
    private Slider hpBar;
    [SerializeField]
    private Slider hpBarShadow;
    [SerializeField]
    private Slider sheldBar;
    [SerializeField]
    private Slider sheldBarShadow;
    [SerializeField]
    private Slider specialMoveBar;
    [SerializeField]
    private Slider specialMoveBarShadow;

    [Header("EnemyGageText")]
    [SerializeField]
    private GameObject enemyHpGroup;
    [SerializeField]
    private Slider enemyHpBar;
    [SerializeField]
    private Slider enemyHpBarShadow;
    [SerializeField]
    private Image enemyTypeImage;
    [SerializeField]
    private TextMeshProUGUI curAndMaxEnemyHpText;

    [SerializeField]
    private Image enemyImage;
    [SerializeField]
    private Sprite monsterBossImage;
    [SerializeField]
    private Sprite monsterEliteImage;
    [SerializeField]
    private Sprite monsterImage;
    [SerializeField]
    private Sprite block1X1Image;
    [SerializeField]
    private Sprite block1X2Image;
    [SerializeField]
    private Sprite block1X3Image;

    public float curEnemyHp;
    public float maxEnemyHp;

    public bool enemyGageShown = false;

    [Header("ComboText")]
    [SerializeField]
    private TextMeshProUGUI comboCountText;
    [SerializeField]
    private TextMeshProUGUI comboText;
    [SerializeField]
    private Transform parentTransform;
    [SerializeField]
    private GameObject comboTextPrefab;
    [SerializeField]
    private Animator comboTextAnimator;

    [Header("TopPanelGroup")]
    [SerializeField]
    private TextMeshProUGUI curDeadEnemyCountText;
    [SerializeField]
    public TextMeshProUGUI curGetGoldText;

    [Header("PhaseGuideGroup")]
    [SerializeField]
    private Animator PhaseGuideGroupAnime;
    [SerializeField]
    private TextMeshProUGUI PhaseGuideText;

    [Header("PhaseProgressBarGroup")]
    [SerializeField]
    private Image leftPhaseImage;
    [SerializeField]
    private Image middlePhaseImage;
    [SerializeField]
    private Image rightPhaseImage;

    [SerializeField]
    private Image leftPhaseChaineseImage;
    [SerializeField]
    private Image middlePhaseChaineseImage;
    [SerializeField]
    private Image rightPhaseChaineseImage;

    [SerializeField]
    private Slider phase1ProgressBar;
    [SerializeField]
    private Slider phase2ProgressBar;

    private bool leftPhaseImageTrigger;
    private bool middlePhaseImageTrigger;
    private bool rightPhaseImageTrigger;

    void Awake()
    {
        if (null == instance)
        {
            instance = this;
        }
        else
        {
            Destroy(this.gameObject);
        }

        curEnemyHp = 1;
        maxEnemyHp = 1;

        leftPhaseImageTrigger = false;
        middlePhaseImageTrigger = false;
        rightPhaseImageTrigger = false;
    }

    private void Start()
    {
        curGetGoldText.text = GameManager.Instance.gold.ToString();
    }

    public static InGameTextViewer Instance
    {
        get
        {
            if (null == instance)
            {
                return null;
            }
            return instance;
        }
    }

    private void FixedUpdate()
    {
        //Combo Text
        comboCountText.text = GameManager.Instance.combo.ToString();
        curDeadEnemyCountText.text = GameManager.Instance.curDeadEnemyCount.ToString();

        //Player Gage bar
        StartCoroutine(SliderInit(hpBar, hpBarShadow, PlayerData.Instance.curHp, PlayerData.Instance.maxHp, 0));
        StartCoroutine(SliderInit(sheldBar, sheldBarShadow, PlayerData.Instance.curSheldGage, PlayerData.Instance.maxSheldGage, 1));
        StartCoroutine(SliderInit(specialMoveBar, specialMoveBarShadow, PlayerData.Instance.curSpecialMoveGage, PlayerData.Instance.maxSpecialMoveGage, 2));

        StartCoroutine(PhaseSliderInit(phase1ProgressBar, GameManager.Instance.curDeadEnemyCount, SpawnManager.Instance.phase1Num));
        StartCoroutine(PhaseSliderInit(phase2ProgressBar, GameManager.Instance.curDeadEnemyCount - SpawnManager.Instance.phase1Num - 1, SpawnManager.Instance.phase2Num));

        if (enemyGageShown)
        {
            //enemyHpGroup 가시화
            enemyHpGroup.SetActive(true);

            //enemyHPGroup 몬스터 HP에 따라 움직임
            StartCoroutine(SliderInit(enemyHpBar, enemyHpBarShadow, curEnemyHp, maxEnemyHp, 3));
            curAndMaxEnemyHpText.text = curEnemyHp.ToString() + "/" + maxEnemyHp.ToString();
        }
        else
        {
            if(enemyHpBarShadow.value >= 0.05)
            {
                //enemyHpGroup 비가시화
                EnemySliderInitReady(false);
            }
        }
    }

    //Combo Text FadeInOut
    public IEnumerator FadeInOutText()
    {
        float curPos = 0f;
        float maxPos = 1f;
        float percent = curPos / maxPos;

        comboCountText.color = new Color(comboCountText.color.r, comboCountText.color.g, comboCountText.color.b, 1);
        comboText.color = new Color(comboCountText.color.r, comboCountText.color.g, comboCountText.color.b, 1);
        comboTextAnimator.SetTrigger("ComboHit");

        yield return new WaitForSeconds(1f);

        while (percent <= 2f)
        {
            comboCountText.color = new Color(comboCountText.color.r, comboCountText.color.g, comboCountText.color.b, Mathf.Lerp(1, 0, percent));
            comboText.color = new Color(comboCountText.color.r, comboCountText.color.g, comboCountText.color.b, Mathf.Lerp(1, 0, percent));
            curPos += Time.deltaTime;
            percent = curPos / maxPos;

            yield return null;
        }
    }

    //Combo Text Print
    public void SpawnHUDText(string damageText, Color color, Vector2 onHitPosition)
    {
        GameObject clone = Instantiate(comboTextPrefab);
        clone.transform.SetParent(parentTransform);
        clone.GetComponent<DamageText>().Play(damageText, color, onHitPosition);
    }

    public IEnumerator SliderInit(Slider slider, Slider sliderShadow, float curValue, float maxValue, int index)
    {
        slider.value = Mathf.Lerp(slider.value, curValue / maxValue, Time.deltaTime * 5f);

        if(sliderShadow != null)
        {
            if (backGageHit[index])
            {
                sliderShadow.value = Mathf.Lerp(sliderShadow.value, slider.value, Time.deltaTime * 10f);
                if (slider.value >= sliderShadow.value - 0.01f)
                {
                    backGageHit[index] = false;
                    sliderShadow.value = slider.value;
                }
            }
        }

        yield return null;
    }

    public IEnumerator PhaseSliderInit(Slider slider, float curValue, float maxValue)
    {
        float percent = curValue / maxValue;
        
        slider.value = Mathf.Lerp(slider.value, percent, Time.deltaTime * 5f);

        if(slider == phase1ProgressBar)
        {
            if (percent >= 0)
            {
                //Planet1 Trigger
                if (!leftPhaseImageTrigger)
                {
                    StartCoroutine(FadeInImage(leftPhaseImage));
                    StartCoroutine(FadeInImage2(leftPhaseChaineseImage));
                    leftPhaseImageTrigger = true;
                    //Phase1 Clear
                }
            }
            if (percent >= 1)
            {
                //Planet2 Trigger
                if (!middlePhaseImageTrigger)
                {
                    StartCoroutine(FadeInImage(middlePhaseImage));
                    StartCoroutine(FadeInImage2(middlePhaseChaineseImage));
                    middlePhaseImageTrigger = true;
                    //Phase2 Clear
                }
            }
        }
        else if(slider == phase2ProgressBar)
        {
            if (percent >= 1)
            {
                //Planet3 Trigger
                if (!rightPhaseImageTrigger)
                {
                    StartCoroutine(FadeInImage(rightPhaseImage));
                    StartCoroutine(FadeInImage2(rightPhaseChaineseImage));
                    rightPhaseImageTrigger = true;
                    //Phase3 Clear
                }
            }
        }
        yield return null;
    }

    public IEnumerator FadeInImage(Image image)
    {
        float curPos = 0.4f;
        float maxPos = 1f;
        float percent = curPos / maxPos;
        
        //Effect 소환
        image.GetComponent<ParticleSystem>().Play();

        while (percent <= 2f)
        {
            curPos += Time.deltaTime;
            percent = curPos / maxPos;
            image.color = new Color(image.color.r, image.color.g, image.color.b, Mathf.Lerp(0, 1, percent));

            yield return null;
        }
            yield return null;
    }

    public IEnumerator FadeInImage2(Image image)
    {
        float curPos = 0f;
        float maxPos = 1f;
        float percent = curPos / maxPos;

        while (percent <= 2f)
        {
            curPos += Time.deltaTime;
            percent = curPos / maxPos;
            image.color = new Color(image.color.r, image.color.g, image.color.b, Mathf.Lerp(0, 1, percent));

            yield return null;
        }
        yield return null;
    }

    public void EnemySliderInitReady(bool boolean)
    {
        enemyHpBar.value = 1;
        enemyHpBarShadow.value = 1;
        enemyHpGroup.SetActive(boolean);
    }

    public void DmgHit(int index)
    {
        StartCoroutine(BackHpMove(index));
    }

    private IEnumerator BackHpMove(int index)
    {
        yield return new WaitForSeconds(0.5f);

        backGageHit[index] = true;
    }

    public void SetEnemyImage(bool Shown, float curHP, float maxHP, EnemyType enemeyType)
    {
        enemyGageShown = Shown;
        maxEnemyHp = maxHP;
        curEnemyHp = curHP;

        switch (enemeyType)
        {
            case EnemyType.AlienNormal:
                enemyImage.sprite = monsterImage;
                break;
            case EnemyType.AlienElite:
            case EnemyType.AlienBoss:
                enemyImage.sprite = monsterBossImage;
                break;
            case EnemyType.Block1X1:
                enemyImage.sprite = block1X1Image;
                break;
            case EnemyType.Block1X3:
                enemyImage.sprite = block1X2Image;
                break;
            case EnemyType.Block1X3M:
                enemyImage.sprite = block1X3Image;
                break;
            default:
                break;
        }
    }

    public void PhaseStart(string text)
    {
        PhaseGuideText.text = text;
        PhaseGuideGroupAnime.SetTrigger("doPhaseStart");
    }

    public IEnumerator Count(TextMeshProUGUI _text, int _current, int _target)
    {
        float start = 0;
        float end = 0.75f;
        float percent = 0;

        while (percent <= 1)
        {
            start += Time.deltaTime;
            percent = start / end;

            _text.text = MoneyUnitString.GetThousandCommaText((int)Mathf.Lerp(_current, _target, percent));

            yield return null;
        }

        _text.text = MoneyUnitString.GetThousandCommaText(_target);
    }

    public void PlusGetGold(int goldNumber)
    {
        StartCoroutine(Count(curGetGoldText, GameManager.Instance.gold, GameManager.Instance.gold + goldNumber));
        GameManager.Instance.gold += goldNumber;
    }
}
