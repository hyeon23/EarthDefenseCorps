using System.Collections;
using UnityEngine.UI;
using UnityEngine;
using TMPro;

public class InGameTextViewer : MonoBehaviour
{
    private static InGameTextViewer instance = null;

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

    public bool[] backGageHit = new bool[3] { false, false, false };

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
        StartCoroutine(Count(comboCountText, GameManager.Instance.combo, GameManager.Instance.combo + 1));

        //Player Gage bar
        StartCoroutine(SliderInit(hpBar, hpBarShadow, PlayerData.Instance.curHp, PlayerData.Instance.maxHp, 0));
        StartCoroutine(SliderInit(sheldBar, sheldBarShadow, PlayerData.Instance.curSheldGage, PlayerData.Instance.maxSheldGage, 1));
        StartCoroutine(SliderInit(specialMoveBar, specialMoveBarShadow, PlayerData.Instance.curSpecialMoveGage, PlayerData.Instance.maxSpecialMoveGage, 2));

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

    //Text Counting
    public IEnumerator Count(TextMeshProUGUI _Text, float _Target, float _Current)
    {
        float duration = 0.5f; // 카운팅에 걸리는 시간 설정. 
        float offset = (_Target - _Current) / duration;

        while (_Current < _Target)
        {
            _Current += offset * Time.deltaTime;
            _Text.text = ((int)_Current).ToString();
            yield return null;
        }

        _Current = _Target;

        _Text.text = ((int)_Current).ToString();
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

        if (backGageHit[index])
        {
            sliderShadow.value = Mathf.Lerp(sliderShadow.value, slider.value, Time.deltaTime * 10f);
            if(slider.value >= sliderShadow.value - 0.01f)
            {
                backGageHit[index] = false;
                sliderShadow.value = slider.value;
            }
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
            case EnemyType.Monster:
                enemyImage.sprite = monsterImage;
                break;
            case EnemyType.MonsterElite:
            case EnemyType.MonsterBoss:
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
}
