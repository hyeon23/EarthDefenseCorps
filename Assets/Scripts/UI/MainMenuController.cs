using TMPro;
using UnityEngine;
using UnityEngine.UI;
using System.Collections;
using System.Collections.Generic;
using System;

public class MainMenuController : MonoBehaviour
{
    
    public TextMeshProUGUI playerHPText;
    public TextMeshProUGUI playerZenText;
    public TextMeshProUGUI ZenTimerTMP;
    public TextMeshProUGUI playerZamText;
    public TextMeshProUGUI playerATKText;
    public TextMeshProUGUI playerGoldText;

    [Header("Bottom Panel")]
    public Sprite[] BtnTargetImage;
    public Sprite[] SelectedBtnTargetImage;
    public RectTransform[] BtnImageRect;
    const int SIZE = 3;

    int targetIndex;

    [Header("Middle Battle Panel")]
    public GameObject[] MiddlePanels;
    public GameObject StagePlanetPanel;
    public GameObject StageSelectionPanel;

    public string[] stageNames;
    public Color[] stageSymbolicColors;
    public Sprite[] stagePlanetSprites;
    public Sprite[] stagePlanetPressedSprites;

    public Button StagePlanetButton;//행성버튼
    public Button StageSelectButton;//행성선택버튼
    public Button StageSelectedButton;//행성선택됨버튼
    public Button StageLockedButton;//행성잠김버튼
    public Button StageGoBackButton;//스테이지 선택 창에서 뒤로가기 버튼
    public TextMeshProUGUI stageNameTMP;//행성 이름 TMP
    public TextMeshProUGUI stageNumberTMP;//행성 번호 TMP
    public Image gameStartButtonImage;//행성 이름 TMP
    public Image stageSelectButtonImage;//행성 이름 TMP
    public Image stageSelectedButtonImage;//행성 이름 TMP
    public Image stageLockedButtonImage;//행성 이름 TMP

    public GameObject Planet;//행성 이미지 및 버튼 설정을 위한 GameObject

    public GameObject PlanetAxis;//행성 회전축
    public Animator PlanetAxisAnime;

    public Button StageSelectLeftButton;
    public Button StageSelectRightButton;

    public int curSelectStage;//현재 선택한 Stage 번호
    public int maxStageNum;//최대 Stage 수
    public int minStageNum;//최소 Stage 수

    public bool isStageChanging = false;

    [Header("Middle EquipmentInfo Panel")]
    public GameObject equipmentInfoPanel;
    public Image equipTopNameImage;
    public TextMeshProUGUI equipNameTMP;
    public Image equipTopGradeImage;
    public TextMeshProUGUI equipTopGradeTMP;
    public Image equipGradeImage;
    public Image equipImage;
    public TextMeshProUGUI equipLevelTMP;
    public TextMeshProUGUI statTMP;
    public TextMeshProUGUI equipStatTMP;
    public TextMeshProUGUI equipPartTMP;
    public TextMeshProUGUI equipDescTMP;
    public TextMeshProUGUI equipUpgradeCostTMP;
    public Image equipButtonImage;
    public TextMeshProUGUI equipButtonTMP;

    public Button equipButton;
    public Button unEquipButton;

    public Item curSelectedItem = null;

    [Header("Middle PopUp Panel")]
    public Animator popUpAnime;
    public TextMeshProUGUI PopUpTMP;//팝업 TMP

    private static MainMenuController instance = null;

    [Header("Inventory")]
    public Inventory inventory;

    [Header("Shop Gold/Zam Attracter")]
    public ParticleSystem[] GoldAttracters;
    public ParticleSystem[] ZamAttracters;
    public ParticleSystem ZenAttracter;

    [Header("Drawing Result Panel")]
    public GameObject drawing1ResultPanel;
    public GameObject drawing10ResultPanel;
    public GameObject drawing1SetActiveGroup;
    public GameObject drawing10SetActiveGroup;
    public TextMeshProUGUI DRItemGradeText;
    public TextMeshProUGUI DRItemNameText;

    public GameObject ProducingSlotPrefab;
    public Transform drawing1SlotParent;
    public Transform drawing10SlotParent;

    [Header("settingsPanel")]
    public GameObject settingsPanel;
    public TextMeshProUGUI BGMOnToggleTMP;
    public TextMeshProUGUI BGMOffToggleTMP;
    public Toggle BGMToggle;
    public TextMeshProUGUI SFXOnToggleTMP;
    public TextMeshProUGUI SFXOffToggleTMP;
    public Toggle SFXToggle;
    public TextMeshProUGUI FPSTMP;
    public Button FrameSelectLeftButton;
    public Button FrameSelectRightButton;

    [Header("Ads")]
    public GameObject adsManager;

    public Button supplyItem1Button;
    public GameObject supplyItem1AdsGroup;
    public GameObject supplyItem1TimerGroup;
    public TextMeshProUGUI supplyItem1TimerTMP;

    public Button supplyZamButton;
    public GameObject supplyZamAdsGroup;
    public GameObject supplyZamTimerGroup;
    public TextMeshProUGUI supplyZamTimerTMP;

    public Button supplyItem2Button;
    public GameObject supplyItem2AdsGroup;
    public GameObject supplyItem2TimerGroup;
    public TextMeshProUGUI supplyItem2TimerTMP;

    public Button supplyZenButton;
    public GameObject supplyZenAdsGroup;
    public GameObject supplyZenTimerGroup;
    public TextMeshProUGUI supplyZenTimerTMP;

    public static MainMenuController Instance
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

    private void Awake()
    {
        if (null == instance)
        {
            instance = this;
        }
        else
        {
            Destroy(this.gameObject);
        }
        
        stageNames = new string[3] { "MOON", "Mercury", "Mars" };
        stageSymbolicColors = new Color[3] { Color.yellow, new Color(0, 150, 255, 255), Color.red };
    }

    private void Start()
    {
        BGMSFXInit();

        targetIndex = 1;
        minStageNum = 1;
        maxStageNum = DataManager.Instance.playerData.isStageClear.Length;
        curSelectStage = DataManager.Instance.playerData.curStage;

        FPSTMP.text = $"{Application.targetFrameRate}Hz";

        playerZamText.text = NotateNumber.Transform(DataManager.Instance.playerData.PlayerZam);
        playerGoldText.text = NotateNumber.Transform(DataManager.Instance.playerData.PlayerGold);

        StartCoroutine(StageChange());

        for (int i = 0; i < DataManager.Instance.playerData.playerItems.Count; i++)
        {
            inventory.InitItem(DataManager.Instance.playerData.playerItems[i]);
        }
    }

    void Update()
    {
        if (Input.GetKey(KeyCode.Escape))
        {
            Application.Quit();
        }

        playerHPText.text = NotateNumber.Transform((int)DataManager.Instance.playerData.PlayerHP);
        playerATKText.text = NotateNumber.Transform(DataManager.Instance.playerData.PlayerATK);
        playerZenText.text = DataManager.Instance.playerData.PlayerZen.ToString() + "/30";

        if (isStageChanging)
        {
            StageSelectRightButton.interactable = false;
            StageSelectLeftButton.interactable = false;
            StageGoBackButton.interactable = false;
            StageSelectButton.interactable = false;
        }
        else
        {
            StageGoBackButton.interactable = true;
            StageSelectButton.interactable = true;

            if (curSelectStage == maxStageNum)
                StageSelectRightButton.interactable = false;
            else
                StageSelectRightButton.interactable = true;
            
            if (curSelectStage == minStageNum)
                StageSelectLeftButton.interactable = false;
            else
                StageSelectLeftButton.interactable = true;
        }

        for (int i = 0; i < SIZE; i++)
        {
            Vector3 BtnTargetPos = BtnImageRect[i].anchoredPosition3D;
            Vector3 BtnTargetScale = Vector3.one;
            bool textActive = false;

            if (targetIndex == i)
            {
                BtnTargetPos.y = 80f;
                MiddlePanels[i].SetActive(true);
                BtnImageRect[i].GetComponent<Image>().sprite = SelectedBtnTargetImage[i];
                BtnTargetScale = new Vector3(1.3f, 1.3f, 1);
                textActive = true;
            }
            else
            {
                BtnTargetPos.y = 0f;
                MiddlePanels[i].SetActive(false);
                BtnImageRect[i].GetComponent<Image>().sprite = BtnTargetImage[i];
            }

            BtnImageRect[i].anchoredPosition3D = Vector3.Lerp(BtnImageRect[i].anchoredPosition3D, BtnTargetPos, 0.25f);
            BtnImageRect[i].localScale = Vector3.Lerp(BtnImageRect[i].localScale, BtnTargetScale, 0.25f);
            BtnImageRect[i].transform.GetChild(0).gameObject.SetActive(textActive);
        }

        if (DataManager.Instance.playerData.curFrameIndex == 2)
        {
            FrameSelectRightButton.interactable = false;
        }
        else
        {
            FrameSelectRightButton.interactable = true;
        }

        if (DataManager.Instance.playerData.curFrameIndex == 0)
        {
            FrameSelectLeftButton.interactable = false;
        }
        else
        {
            FrameSelectLeftButton.interactable = true;
        }

        FPSTMP.text = $"{Application.targetFrameRate}Hz";

        if ((DateTime.Now - DataManager.Instance.playerData.supplyItem1CoolTime).TotalMinutes >= 30)
        {
            supplyItem1Button.interactable = true;
            supplyItem1AdsGroup.SetActive(true);
            supplyItem1TimerGroup.SetActive(false);
        }
        else
        {
            supplyItem1Button.interactable = false;
            supplyItem1AdsGroup.SetActive(false);
            supplyItem1TimerGroup.SetActive(true);

            DateTime dt = DataManager.Instance.playerData.supplyItem1CoolTime.Add(new TimeSpan(0, 30, 0));

            supplyItem1TimerTMP.text = (dt - DateTime.Now).ToString(@"hh\:mm\:ss");
        }

        if ((DateTime.Now - DataManager.Instance.playerData.supplyZamCoolTime).TotalMinutes >= 90)
        {
            supplyZamButton.interactable = true;
            supplyZamAdsGroup.SetActive(true);
            supplyZamTimerGroup.SetActive(false);
        }
        else
        {
            supplyZamButton.interactable = false;
            supplyZamAdsGroup.SetActive(false);
            supplyZamTimerGroup.SetActive(true);

            DateTime dt = DataManager.Instance.playerData.supplyZamCoolTime.Add(new TimeSpan(1, 30, 0));

            supplyZamTimerTMP.text = (dt - DateTime.Now).ToString(@"hh\:mm\:ss");
        }

        if ((DateTime.Now - DataManager.Instance.playerData.supplyItem2CoolTime).TotalHours >= 3)
        {
            supplyItem2Button.interactable = true;
            supplyItem2AdsGroup.SetActive(true);
            supplyItem2TimerGroup.SetActive(false);
        }
        else
        {
            supplyItem2Button.interactable = false;
            supplyItem2AdsGroup.SetActive(false);
            supplyItem2TimerGroup.SetActive(true);

            DateTime dt = DataManager.Instance.playerData.supplyItem2CoolTime.Add(new TimeSpan(3, 0, 0));

            supplyItem2TimerTMP.text = (dt - DateTime.Now).ToString(@"hh\:mm\:ss");
        }

        if ((DateTime.Now - DataManager.Instance.playerData.supplyZenCoolTime).TotalMinutes >= 5)
        {
            supplyZenButton.interactable = true;
            supplyZenAdsGroup.SetActive(true);
            supplyZenTimerGroup.SetActive(false);
        }
        else
        {
            supplyZenButton.interactable = false;
            supplyZenAdsGroup.SetActive(false);
            supplyZenTimerGroup.SetActive(true);

            DateTime dt = DataManager.Instance.playerData.supplyZenCoolTime.Add(new TimeSpan(0, 5, 0));

            supplyZenTimerTMP.text = (dt - DateTime.Now).ToString(@"hh\:mm\:ss");
        }

        if (DataManager.Instance.playerData.PlayerZen >= 30)
        {
            ZenTimerTMP.text = "- : -";
        }
        else
        {
            if (DateTime.Compare(DataManager.Instance.playerData.zenCoolTime, DateTime.Now) <= 0)
            {
                DataManager.Instance.playerData.PlayerZen++;
                DataManager.Instance.playerData.zenCoolTime = DateTime.Now.Add(new TimeSpan(0, 0, DataManager.Instance.spawnZenTime));
            }

            ZenTimerTMP.text = (DataManager.Instance.playerData.zenCoolTime - DateTime.Now).ToString(@"mm\:ss");
        }
    }

    public void TabClick(int n)
    {
        SoundManager.Instance.SFXPlay(SoundManager.SFX.Button);

        targetIndex = n;

        if ((DataManager.Instance.playerData.watchAdsCoolTime - DateTime.Now).TotalSeconds <= 0)
        {
            if (targetIndex == n)
            {
                adsManager.GetComponent<InterstitialAds>().ShowAd();

                DataManager.Instance.playerData.watchAdsCoolTime = DateTime.Now.AddSeconds(1201);
            }
        }
    }

    //게임 씬으로 이동 버튼
    public void OnClickGoGameStartButton()
    {
        SoundManager.Instance.SFXPlay(SoundManager.SFX.Button);

        if(DataManager.Instance.playerData.playerZen < 5)
        {
            TriggerPopUp("Not Enough Zens");
            return;
        }

        switch (DataManager.Instance.playerData.curStage)
        {
            case 1:
                //씬이동
                //SceneManager.LoadScene("GameSceneStage" + DataManager.Instance.playerData.curStage);
                LoadingSceneController.LoadScene("GameSceneStage" + DataManager.Instance.playerData.curStage);

                DataManager.Instance.playerData.PlayerZen -= 5;
                DataManager.Instance.GameStartDataUpdate();
                break;
            case 2:
                TriggerPopUp("Comming Soon...");
                break;
            case 3:
                TriggerPopUp("Comming Soon...");
                break;
        }
    }

    //메인 화면으로 이동 버튼
    public void OnClickGoBackMainMenuButton() 
    {
        SoundManager.Instance.SFXPlay(SoundManager.SFX.Button);

        int curStage = DataManager.Instance.playerData.curStage;
        stageNameTMP.text = stageNames[curStage - 1];
        stageNumberTMP.text = "S T A G E " + curStage;
        stageNameTMP.color = stageSymbolicColors[curStage - 1];

        gameStartButtonImage.color = stageSymbolicColors[curStage - 1] * 0.97f;
        stageSelectButtonImage.color = stageSymbolicColors[curStage - 1];
        stageSelectedButtonImage.color = stageSymbolicColors[curStage - 1];
        stageLockedButtonImage.color = stageSymbolicColors[curStage - 1];
        Planet.GetComponent<Image>().sprite = stagePlanetSprites[curStage - 1];
        Planet.GetComponent<Image>().color = Color.white;

        SpriteState newSpriteState = new SpriteState();
        newSpriteState.highlightedSprite = stagePlanetPressedSprites[curStage - 1];
        newSpriteState.pressedSprite = stagePlanetPressedSprites[curStage - 1];
        Planet.GetComponent<Button>().spriteState = newSpriteState;

        StageSelectionPanel.SetActive(false);
        StagePlanetButton.enabled = true;
        StagePlanetPanel.SetActive(true);
    }

    public void OnClickGoStageSelectionMenuButton()
    {
        SoundManager.Instance.SFXPlay(SoundManager.SFX.Button);

        curSelectStage = DataManager.Instance.playerData.curStage;
        StagePlanetPanel.SetActive(false);
        StagePlanetButton.enabled = false;
        StageSelectionPanel.SetActive(true);
        ClearStageSelected(curSelectStage);
    }

    public void OnClickStageSelectButton()
    {
        SoundManager.Instance.SFXPlay(SoundManager.SFX.Button);

        DataManager.Instance.playerData.curStage = curSelectStage;
        ClearStageSelected(curSelectStage);
    }

    public void OnClickNextStageButton()
    {
        SoundManager.Instance.SFXPlay(SoundManager.SFX.Button);

        if (isStageChanging) return;

        curSelectStage = curSelectStage + 1;
        PlanetAxisAnime.SetTrigger("doRotateNext");
        SoundManager.Instance.SFXPlay(SoundManager.SFX.RollPlanet);
        StartCoroutine(StageChange());
    }

    public void OnClickPriorStageButton()
    {
        SoundManager.Instance.SFXPlay(SoundManager.SFX.Button);

        if (isStageChanging) return;

        curSelectStage = curSelectStage - 1;
        PlanetAxisAnime.SetTrigger("doRotatePrior");
        SoundManager.Instance.SFXPlay(SoundManager.SFX.RollPlanet);
        StartCoroutine(StageChange());
    }

    public IEnumerator StageChange()
    {
        
        isStageChanging = true;

        yield return new WaitForSeconds(0.5f);

        stageNumberTMP.text = "S T A G E " + curSelectStage;
        stageNameTMP.color = stageSymbolicColors[curSelectStage - 1];
        gameStartButtonImage.color = stageSymbolicColors[curSelectStage - 1] * 0.97f;
        stageSelectButtonImage.color = stageSymbolicColors[curSelectStage - 1];
        stageSelectedButtonImage.color = stageSymbolicColors[curSelectStage - 1];
        stageLockedButtonImage.color = stageSymbolicColors[curSelectStage - 1];
        Planet.GetComponent<Image>().sprite = stagePlanetSprites[curSelectStage - 1];

        SpriteState newSpriteState = new SpriteState();
        newSpriteState.highlightedSprite = stagePlanetPressedSprites[curSelectStage - 1];
        newSpriteState.pressedSprite = stagePlanetPressedSprites[curSelectStage - 1];
        Planet.GetComponent<Button>().spriteState = newSpriteState;

        //1, 2, 3
        //Stage 정보
        switch (curSelectStage)
        {
            case 0:
                break;
            case 1:
                ClearStageSelected(curSelectStage);
                stageNameTMP.text = stageNames[curSelectStage - 1];
                Planet.GetComponent<Image>().color = Color.white;
                break; 
            case 2:
            case 3:
                if (DataManager.Instance.playerData.isStageClear[curSelectStage - 2])
                {
                    ClearStageSelected(curSelectStage);

                    stageNameTMP.text = stageNames[curSelectStage - 1];
                    Planet.GetComponent<Image>().color = Color.white;
                }
                else
                {
                    stageNameTMP.text = "???";

                    Color tempColor = stageSymbolicColors[curSelectStage - 1];
                    tempColor.a = 0.5f;
                    Planet.GetComponent<Image>().color = tempColor;
                    ShowNonClearStageSelected(curSelectStage);
                }
                break;
            default:
                
                break;
        }

        yield return new WaitForSeconds(0.5f);

        isStageChanging = false;
    }

    public void ClearStageSelected(int curSelectStage)
    {
        StageLockedButton.gameObject.SetActive(false);

        if (curSelectStage == DataManager.Instance.playerData.curStage)
        {
            StageSelectedButton.gameObject.SetActive(true);
            StageSelectButton.gameObject.SetActive(false);
        }
        else
        {
            StageSelectButton.gameObject.SetActive(true);
            StageSelectedButton.gameObject.SetActive(false);
        }
    }

    public void ShowNonClearStageSelected(int curSelectStage)
    {
        StageSelectButton.gameObject.SetActive(false);
        StageSelectedButton.gameObject.SetActive(false);
        StageLockedButton.gameObject.SetActive(true);
    }

    public void TriggerPopUp(string msg)
    {
        PopUpTMP.text = msg;
        popUpAnime.SetTrigger("doPopUp");
        SoundManager.Instance.SFXPlay(SoundManager.SFX.PopUP);
    }

    //EquipmentInfoPanel
    public void backButton()
    {
        curSelectedItem = null;
        equipmentInfoPanel.SetActive(false);
        SoundManager.Instance.SFXPlay(SoundManager.SFX.Button);
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

            _text.text = NotateNumber.Transform((int)Mathf.Lerp(_current, _target, percent));

            yield return null;
        }

        _text.text = NotateNumber.Transform(_target);
    }


    public void EquipButton()
    {
        //[★] 아이템 장착 request
        StartCoroutine(DataManager.Instance.PutItemEquipUnequipRequest(DataManager.Instance.putItemEquipUnequipPath + $"{curSelectedItem.ID}"));

        equipButton.gameObject.SetActive(false);
        unEquipButton.gameObject.SetActive(true);

        SoundManager.Instance.SFXPlay(SoundManager.SFX.Equip);

        switch (curSelectedItem.itemPart)
        {
            case ItemPart.WEAPON:
                if (DataManager.Instance.playerData.CurEquippedWeapon != null)
                {
                    //[★]무기 아이템 장착 해제 request
                    DataManager.Instance.playerData.CurEquippedWeapon.isEquipped = false;
                    StartCoroutine(DataManager.Instance.PutItemEquipUnequipRequest(DataManager.Instance.putItemEquipUnequipPath + $"{DataManager.Instance.playerData.CurEquippedWeapon.ID}"));
                }

                curSelectedItem.isEquipped = true;

                DataManager.Instance.playerData.CurEquippedWeapon = curSelectedItem;
                break;
            case ItemPart.GLOVES:
                if (DataManager.Instance.playerData.CurEquippedGloves != null)
                {
                    //[★]장갑 아이템 장착 해제 request
                    DataManager.Instance.playerData.CurEquippedGloves.isEquipped = false;
                    StartCoroutine(DataManager.Instance.PutItemEquipUnequipRequest(DataManager.Instance.putItemEquipUnequipPath + $"{DataManager.Instance.playerData.CurEquippedGloves.ID}"));
                }
                    
                curSelectedItem.isEquipped = true;

                DataManager.Instance.playerData.CurEquippedGloves = curSelectedItem;
                break;
            case ItemPart.SHOES:
                if (DataManager.Instance.playerData.CurEquippedShoes != null)
                {
                    //[★]신발 아이템 장착 해제 request
                    DataManager.Instance.playerData.CurEquippedShoes.isEquipped = false;
                    StartCoroutine(DataManager.Instance.PutItemEquipUnequipRequest(DataManager.Instance.putItemEquipUnequipPath + $"{DataManager.Instance.playerData.CurEquippedShoes.ID}"));
                }
                    
                curSelectedItem.isEquipped = true;

                DataManager.Instance.playerData.CurEquippedShoes = curSelectedItem;
                break;
            case ItemPart.SHIELD:
                if (DataManager.Instance.playerData.CurEquippedSheld != null)
                {
                    //[★]방패 아이템 장착 해제 request
                    DataManager.Instance.playerData.CurEquippedSheld.isEquipped = false;
                    StartCoroutine(DataManager.Instance.PutItemEquipUnequipRequest(DataManager.Instance.putItemEquipUnequipPath + $"{DataManager.Instance.playerData.CurEquippedSheld.ID}"));
                }
                    
                curSelectedItem.isEquipped = true;

                DataManager.Instance.playerData.CurEquippedSheld = curSelectedItem;
                break;
            case ItemPart.HELMET:
                if (DataManager.Instance.playerData.CurEquippedHelmat != null)
                {
                    //[★]모자 아이템 장착 해제 request
                    DataManager.Instance.playerData.CurEquippedHelmat.isEquipped = false;
                    StartCoroutine(DataManager.Instance.PutItemEquipUnequipRequest(DataManager.Instance.putItemEquipUnequipPath + $"{DataManager.Instance.playerData.CurEquippedHelmat.ID}"));
                }
                    
                curSelectedItem.isEquipped = true;

                DataManager.Instance.playerData.CurEquippedHelmat = curSelectedItem;
                break;
            case ItemPart.ARMOR:
                if (DataManager.Instance.playerData.CurEquippedArmor != null)
                {
                    //[★]갑옷 아이템 장착 해제 request
                    DataManager.Instance.playerData.CurEquippedArmor.isEquipped = false;
                    StartCoroutine(DataManager.Instance.PutItemEquipUnequipRequest(DataManager.Instance.putItemEquipUnequipPath + $"{DataManager.Instance.playerData.CurEquippedArmor.ID}"));
                }
                    
                curSelectedItem.isEquipped = true;

                DataManager.Instance.playerData.CurEquippedArmor = curSelectedItem;
                break;
        }

        DataManager.Instance.DataUpdate();

        curSelectedItem = null;
        equipmentInfoPanel.SetActive(false);
    }

    public void UnequipButton()
    {
        //아이템 장착 해제
        curSelectedItem.isEquipped = false;

        //[★]아이템 장착 해제 request[방법에 따라 요청하는 코드를 분기별로 둘지, 아니면 여기에서 하나만 둬도 되는지 물어봐야함]
        StartCoroutine(DataManager.Instance.PutItemEquipUnequipRequest(DataManager.Instance.putItemEquipUnequipPath + $"{curSelectedItem.ID}"));

        equipButton.gameObject.SetActive(true);
        unEquipButton.gameObject.SetActive(false);

        SoundManager.Instance.SFXPlay(SoundManager.SFX.UnEquip);

        switch (curSelectedItem.itemPart)
        {
            case ItemPart.WEAPON:
                DataManager.Instance.playerData.CurEquippedWeapon = null;
                break;
            case ItemPart.GLOVES:
                DataManager.Instance.playerData.CurEquippedGloves = null;
                break;
            case ItemPart.SHOES:
                DataManager.Instance.playerData.CurEquippedShoes = null;
                break;
            case ItemPart.SHIELD:
                DataManager.Instance.playerData.CurEquippedSheld = null;
                break;
            case ItemPart.HELMET:
                DataManager.Instance.playerData.CurEquippedHelmat = null;
                break;
            case ItemPart.ARMOR:
                DataManager.Instance.playerData.CurEquippedArmor = null;
                break;
        }

        DataManager.Instance.DataUpdate();

        curSelectedItem = null;
        equipmentInfoPanel.SetActive(false);
    }

    public void UpgradeButton()
    {
        if (curSelectedItem.itemCurLevel == curSelectedItem.itemMaxLevel)
        {
            TriggerPopUp("장비 레벨이 MAX입니다.");
            return;
        }

        if (DataManager.Instance.playerData.PlayerGold < curSelectedItem.itemCurLevel * curSelectedItem.itemUpgradeCost)
        {
            TriggerPopUp("골드가 부족합니다.");
            return;
        }


        SoundManager.Instance.SFXPlay(SoundManager.SFX.Upgrade);

        MinusGold(curSelectedItem.itemCurLevel * curSelectedItem.itemUpgradeCost);

        curSelectedItem.itemCurLevel++;
        
        //[★]아이템 업그레이드 request[골드 수정은 알아서 DB에서 계산]
        StartCoroutine(DataManager.Instance.PutItemUpgradeRequest(DataManager.Instance.putItemUpgradePath + $"{curSelectedItem.ID}", new PUTReqItemUpgrade(curSelectedItem)));

        DataManager.Instance.DataUpdate();

        EquipInfoUpdate(curSelectedItem);
    }

    public void SellButton()
    {
        SoundManager.Instance.SFXPlay(SoundManager.SFX.SellButton);

        inventory.deleteItem(curSelectedItem);

        //[★]아이템 판매 request[골드 수정은 알아서 DB에서 계산]
        StartCoroutine(DataManager.Instance.DelItemDeleteRequest(DataManager.Instance.delItemDeletePath + $"{curSelectedItem.ID}"));

        PlusGold(Mathf.RoundToInt((curSelectedItem.itemPrice + (curSelectedItem.itemCurLevel - 1) * curSelectedItem.itemUpgradeCost) * 0.5f));

        //해당 아이템 삭제
        if (curSelectedItem.isEquipped)
        {
            //아이템 장착 해제
            curSelectedItem.isEquipped = false;

            equipButton.gameObject.SetActive(true);
            unEquipButton.gameObject.SetActive(false);

            SoundManager.Instance.SFXPlay(SoundManager.SFX.UnEquip);

            switch (curSelectedItem.itemPart)
            {
                case ItemPart.WEAPON:
                    DataManager.Instance.playerData.CurEquippedWeapon = null;
                    break;
                case ItemPart.GLOVES:
                    DataManager.Instance.playerData.CurEquippedGloves = null;
                    break;
                case ItemPart.SHOES:
                    DataManager.Instance.playerData.CurEquippedShoes = null;
                    break;
                case ItemPart.SHIELD:
                    DataManager.Instance.playerData.CurEquippedSheld = null;
                    break;
                case ItemPart.HELMET:
                    DataManager.Instance.playerData.CurEquippedHelmat = null;
                    break;
                case ItemPart.ARMOR:
                    DataManager.Instance.playerData.CurEquippedArmor = null;
                    break;
            }

            DataManager.Instance.DataUpdate();

            curSelectedItem = null;
            equipmentInfoPanel.SetActive(false);
        }
        else
        {
            curSelectedItem = null;
            equipmentInfoPanel.SetActive(false);
        }
    }

    public void EquipInfoUpdate(Item _item)
    {
        curSelectedItem = _item;
        equipNameTMP.text = _item.itemName;
        equipTopNameImage.color = SetGradeColorBackground(_item);
        equipTopGradeImage.color = SetGradeColorBackground(_item);
        equipTopGradeTMP.text = _item.itemGrade.ToString();
        equipGradeImage.color = SetGradeColorBackground(_item);
        equipImage.sprite = _item.itemImage;

        if (curSelectedItem.isEquipped)
        {
            equipButton.gameObject.SetActive(false);
            unEquipButton.gameObject.SetActive(true);
        }
        else
        {
            equipButton.gameObject.SetActive(true);
            unEquipButton.gameObject.SetActive(false);
        }

        equipLevelTMP.text = $"레벨: {_item.itemCurLevel.ToString()} / {_item.itemMaxLevel.ToString()}";

        switch (_item.itemPart)
        {
            case ItemPart.WEAPON:
            case ItemPart.GLOVES:
            case ItemPart.SHOES:
                statTMP.text = "ATK";
                equipStatTMP.text = NotateNumber.Transform(_item.itemATK + (int)_item.itemGrade * (_item.itemCurLevel - 1));
                break;
            case ItemPart.SHIELD:
            case ItemPart.ARMOR:
            case ItemPart.HELMET:
                statTMP.text = "HP";
                equipStatTMP.text = NotateNumber.Transform((int)_item.itemHP + (int)_item.itemGrade * (_item.itemCurLevel - 1));
                break;
            case ItemPart.COUNT:
                break;
            default:
                break;
        }

        equipPartTMP.text = _item.itemPart.ToString();
        equipDescTMP.text = _item.itemDesc;


        if (_item.itemCurLevel == _item.itemMaxLevel)
        {
            equipUpgradeCostTMP.text = $"{NotateNumber.Transform(DataManager.Instance.playerData.PlayerGold)} / -";
        }
        else
        {
            equipUpgradeCostTMP.text = $"{NotateNumber.Transform(DataManager.Instance.playerData.PlayerGold)} / {NotateNumber.Transform(curSelectedItem.itemCurLevel * curSelectedItem.itemUpgradeCost)}";
        }

        equipmentInfoPanel.SetActive(true);
    }

    public Color SetGradeColorBackground(Item _item)
    {
        Color retColor;

        switch (_item.itemGrade)
        {
            case ItemGrade.NORMAL:
                retColor = new Color(0.75f, 0.75f, 0.75f, 1f);
                break;
            case ItemGrade.RARE:
                retColor = new Color(0, 0.5f, 1f, 1f);
                break;
            case ItemGrade.EPIC:
                retColor = new Color(0.65f, 0f, 1f, 1f);
                break;
            case ItemGrade.UNIQUE:
                retColor = Color.yellow;
                break;
            case ItemGrade.LEGENDARY:
                retColor = Color.red;
                break;
            default:
                retColor = Color.white;
                break;
        }

        return retColor;
    }

    public void BuyGold(int zamPrice)
    {
        int goldNumber = 0;
        
        if (zamPrice > DataManager.Instance.playerData.PlayerZam)
        {
            TriggerPopUp("젬이 부족합니다.");
            return;
        }

        switch (zamPrice)
        {
            case 50:
                if (!GoldAttracters[0].isStopped)
                    return;
                goldNumber = 20000;
                GoldAttracters[0].Play();
                break;
            case 100:
                if (!GoldAttracters[1].isStopped)
                    return;
                goldNumber = 50000;
                GoldAttracters[1].Play();
                break;
            case 300:
                if (!GoldAttracters[2].isStopped)
                    return;
                goldNumber = 200000;
                GoldAttracters[2].Play();
                break;
            case 1000:
                if (!GoldAttracters[3].isStopped)
                    return;
                goldNumber = 1000000;
                GoldAttracters[3].Play();
                break;
        }

        SoundManager.Instance.SFXPlay(SoundManager.SFX.SellButton);

        SubtractZam(zamPrice);

        //[★]젬 변동 request
        StartCoroutine(DataManager.Instance.PutZamUpdateRequest(DataManager.Instance.putZamUpdatePath, new PUTReqZam(DataManager.Instance.playerData.playerZam)));

        PlusGold(goldNumber);

        //[★]골드 변동 request
        StartCoroutine(DataManager.Instance.PutGoldUpdateRequest(DataManager.Instance.putGoldUpdatePath, new PUTReqGold(DataManager.Instance.playerData.PlayerGold)));
    }

    public void BuyZam(int ZamNumber)
    {
        switch (ZamNumber)
        {
            case 300:
                if (!ZamAttracters[0].isStopped)
                    return;
                ZamAttracters[0].Play();
                break;
            case 1000:
                if (!ZamAttracters[1].isStopped)
                    return;
                ZamAttracters[1].Play();
                break;
            case 3000:
                if (!ZamAttracters[2].isStopped)
                    return;
                ZamAttracters[2].Play();
                break;
            case 10000:
                if (!ZamAttracters[3].isStopped)
                    return;
                ZamAttracters[3].Play();
                break;
            case 200:
                if (!ZamAttracters[4].isStopped)
                    return;
                ZamAttracters[4].Play();
                break;
        }

        SoundManager.Instance.SFXPlay(SoundManager.SFX.SellButton);

        PlusZam(ZamNumber);

        //[★]젬 변동 request
        StartCoroutine(DataManager.Instance.PutZamUpdateRequest(DataManager.Instance.putZamUpdatePath, new PUTReqZam(DataManager.Instance.playerData.playerZam)));
    }

    public void PlusGold(int goldNumber)
    {
        StartCoroutine(Count(playerGoldText, DataManager.Instance.playerData.PlayerGold, DataManager.Instance.playerData.PlayerGold + goldNumber));
        DataManager.Instance.playerData.PlayerGold += goldNumber;
    }

    public void MinusGold(int goldNumber)
    {
        StartCoroutine(Count(playerGoldText, DataManager.Instance.playerData.PlayerGold, DataManager.Instance.playerData.PlayerGold - goldNumber));
        DataManager.Instance.playerData.PlayerGold -= goldNumber;
    }

    public void PlusZam(int zamNumber)
    {
        StartCoroutine(Count(playerZamText, DataManager.Instance.playerData.PlayerZam, DataManager.Instance.playerData.PlayerZam + zamNumber));
        DataManager.Instance.playerData.playerZam += zamNumber;

    }

    public void SubtractZam(int zamPrice)
    {
        StartCoroutine(Count(playerZamText, DataManager.Instance.playerData.PlayerZam, DataManager.Instance.playerData.PlayerZam - zamPrice));
        DataManager.Instance.playerData.playerZam -= zamPrice;
    }

    public void PlusZen(int zenNumber)
    {
        ZenAttracter.Play();

        DataManager.Instance.playerData.PlayerZen += zenNumber;
    }

    //가중치 랜덤 가챠
    public void NormalDrawing1RandItem(int zamPrice)
    {
        SoundManager.Instance.SFXPlay(SoundManager.SFX.Button);

        if (zamPrice > DataManager.Instance.playerData.PlayerZam)
        {
            TriggerPopUp("젬이 부족합니다.");
            return;
        }

        int total = 0;
        int weight = 0;
        int selectNum = 0;
        List<Item> gachaList = new List<Item>();

        //가차리스트 생성 및 초기화
        for (int i = 0; i < DataManager.Instance.items.Count; i++)
        {
            ItemGrade curItemGrade = DataManager.Instance.items[i].itemGrade;

            if (curItemGrade == ItemGrade.NORMAL || curItemGrade == ItemGrade.RARE || curItemGrade == ItemGrade.EPIC)
            {
                gachaList.Add(DataManager.Instance.items[i]);
                total += DataManager.Instance.items[i].itemDrawingWeight;
            }
        }

        selectNum = Mathf.RoundToInt(total * UnityEngine.Random.Range(0.0f, 1.0f));

        if(zamPrice != 0)
        {
            //젬 차감
            SubtractZam(zamPrice);

            //[★]젬 변동 request
            StartCoroutine(DataManager.Instance.PutZamUpdateRequest(DataManager.Instance.putZamUpdatePath, new PUTReqZam(DataManager.Instance.playerData.playerZam)));
        }

        for (int i = 0; i < gachaList.Count; i++)
        {
            weight += gachaList[i].itemDrawingWeight;

            if (selectNum <= weight)
            {
                //아이템 선언
                Item newItem = new Item(gachaList[i]);

                //[★]아이템 저장 request
                StartCoroutine(DataManager.Instance.PostItemSaveRequest(DataManager.Instance.postItemSavePath, newItem));

                //아이템 추가
                inventory.AddItem(newItem);

                //연출
                StartCoroutine(Producing1Item(newItem));
                break;
            }
        }
    }

    public void NormalDrawing10RandItem(int zamPrice)
    {
        SoundManager.Instance.SFXPlay(SoundManager.SFX.Button);

        if (zamPrice > DataManager.Instance.playerData.PlayerZam)
        {
            TriggerPopUp("젬이 부족합니다.");
            return;
        }

        int total = 0;
        int weight = 0;
        int selectNum = 0;
        List<Item> gachaList = new List<Item>();
        List<Item> SelectedItemList = new List<Item>();

        //가차리스트 생성 및 초기화
        for (int i = 0; i < DataManager.Instance.items.Count; i++)
        {
            ItemGrade curItemGrade = DataManager.Instance.items[i].itemGrade;

            if (curItemGrade == ItemGrade.NORMAL || curItemGrade == ItemGrade.RARE || curItemGrade == ItemGrade.EPIC)
            {
                gachaList.Add(DataManager.Instance.items[i]);
                total += DataManager.Instance.items[i].itemDrawingWeight;
            }
        }

        //젬 차감
        SubtractZam(zamPrice);

        //[★]젬 변동 request
        StartCoroutine(DataManager.Instance.PutZamUpdateRequest(DataManager.Instance.putZamUpdatePath, new PUTReqZam(DataManager.Instance.playerData.playerZam)));

        for (int j = 0; j < 10; j++)
        {
            weight = 0;
            selectNum = Mathf.RoundToInt(total * UnityEngine.Random.Range(0.0f, 1.0f));

            for (int i = 0; i < gachaList.Count; i++)
            {
                weight += gachaList[i].itemDrawingWeight;

                if (selectNum <= weight)
                {
                    //아이템 선언
                    Item newItem = new Item(gachaList[i]);

                    //[★]아이템 저장 request
                    StartCoroutine(DataManager.Instance.PostItemSaveRequest(DataManager.Instance.postItemSavePath, newItem));

                    //아이템 추가
                    inventory.AddItem(newItem);
                    SelectedItemList.Add(newItem);
                    break;
                }
            }
        }

        //연출
        StartCoroutine(Producing10Items(SelectedItemList));
    }

    public void PremiumDrawing1RandItem(int zamPrice)
    {
        SoundManager.Instance.SFXPlay(SoundManager.SFX.Button);

        if (zamPrice > DataManager.Instance.playerData.PlayerZam)
        {
            TriggerPopUp("젬이 부족합니다.");
            return;
        }

        int total = 0;
        int weight = 0;
        int selectNum = 0;

        //가차리스트 생성 및 초기화
        for (int i = 0; i < DataManager.Instance.items.Count; i++)
        {
            total += DataManager.Instance.items[i].itemDrawingWeight;
        }

        selectNum = Mathf.RoundToInt(total * UnityEngine.Random.Range(0.0f, 1.0f));

        if(zamPrice != 0)
        {
            //젬 차감
            SubtractZam(zamPrice);

            //[★]젬 변동 request
            StartCoroutine(DataManager.Instance.PutZamUpdateRequest(DataManager.Instance.putZamUpdatePath, new PUTReqZam(DataManager.Instance.playerData.playerZam)));
        }

        for (int i = 0; i < DataManager.Instance.items.Count; i++)
        {
            weight += DataManager.Instance.items[i].itemDrawingWeight;

            if (selectNum <= weight)
            {
                //아이템 선언
                Item newItem = new Item(DataManager.Instance.items[i]);

                //[★]아이템 저장 request
                StartCoroutine(DataManager.Instance.PostItemSaveRequest(DataManager.Instance.postItemSavePath, newItem));
                
                //아이템 추가
                inventory.AddItem(newItem);

                //연출
                StartCoroutine(Producing1Item(newItem));
                break;
            }
        }
    }

    public void PremiumDrawing10RandItem(int zamPrice)
    {
        SoundManager.Instance.SFXPlay(SoundManager.SFX.Button);

        if (zamPrice > DataManager.Instance.playerData.PlayerZam)
        {
            TriggerPopUp("젬이 부족합니다.");
            return;
        }

        int total = 0;
        int weight = 0;
        int selectNum = 0;
        List<Item> SelectedItemList = new List<Item>();

        //가차리스트 생성 및 초기화
        for (int i = 0; i < DataManager.Instance.items.Count; i++)
        {
            total += DataManager.Instance.items[i].itemDrawingWeight;
        }

        //젬 차감
        SubtractZam(zamPrice);

        //[★]젬 변동 request
        StartCoroutine(DataManager.Instance.PutZamUpdateRequest(DataManager.Instance.putZamUpdatePath, new PUTReqZam(DataManager.Instance.playerData.playerZam)));

        for (int j = 0; j < 10; j++)
        {
            weight = 0;
            selectNum = Mathf.RoundToInt(total * UnityEngine.Random.Range(0.0f, 1.0f));

            for (int i = 0; i < DataManager.Instance.items.Count; i++)
            {
                weight += DataManager.Instance.items[i].itemDrawingWeight;

                if (selectNum <= weight)
                {
                    //아이템 선언
                    Item newItem = new Item(DataManager.Instance.items[i]);

                    //[★]아이템 저장 request
                    StartCoroutine(DataManager.Instance.PostItemSaveRequest(DataManager.Instance.postItemSavePath, newItem));

                    //아이템 추가
                    inventory.AddItem(newItem);
                    SelectedItemList.Add(newItem);
                    break;
                }
            }
        }

        //연출
        StartCoroutine(Producing10Items(SelectedItemList));
    }

    public IEnumerator Producing1Item(Item item)
    {   

        DRItemGradeText.text = item.itemGrade.ToString();
        DRItemGradeText.color = SetGradeColorBackground(item);
        DRItemNameText.text = item.itemName.ToString();

        GameObject cloneSlot = Instantiate(ProducingSlotPrefab, drawing1SlotParent);
        ItemGradeSound(item);
        cloneSlot.GetComponent<ItemSlot>().item = item;
        cloneSlot.GetComponent<ItemSlot>().ItemIcon.sprite = item.itemImage;
        cloneSlot.GetComponent<ItemSlot>().gradeBackground.color = SetGradeColorBackground(item);

        drawing1ResultPanel.SetActive(true);

        yield return new WaitForSeconds(1f);

        drawing1SetActiveGroup.SetActive(true);
    }

    public IEnumerator Producing10Items(List<Item> items)
    {
        drawing10ResultPanel.SetActive(true);

        for (int i = 0; i < 10; i++)
        {
            GameObject cloneSlot = Instantiate(ProducingSlotPrefab, drawing10SlotParent);
            ItemGradeSound(items[i]);
            cloneSlot.GetComponent<ItemSlot>().item = items[i];
            cloneSlot.GetComponent<ItemSlot>().ItemIcon.sprite = items[i].itemImage;
            cloneSlot.GetComponent<ItemSlot>().gradeBackground.color = SetGradeColorBackground(items[i]);
            yield return new WaitForSeconds(ItemGradeSeconds(items[i]));
        }

        drawing10SetActiveGroup.SetActive(true);
    }

    public void Drawing1PanelButtonClicked()
    {
        drawing1SetActiveGroup.SetActive(false);
        drawing1ResultPanel.SetActive(false);

        Destroy(drawing1SlotParent.GetChild(0).gameObject);
    }

    public void Drawing10PanelButtonClicked()
    {
        drawing10SetActiveGroup.SetActive(false);
        drawing10ResultPanel.SetActive(false);

        for(int i = 0; i < 10; i++)
        {
            Destroy(drawing10SlotParent.GetChild(i).gameObject);
        }
    }

    public void ItemGradeSound(Item _item)
    {
        switch (_item.itemGrade)
        {
            case ItemGrade.NORMAL:
                SoundManager.Instance.SFXPlay(SoundManager.SFX.GetItemNormal);
                break;
            case ItemGrade.RARE:
                SoundManager.Instance.SFXPlay(SoundManager.SFX.GetItemRare);
                break;
            case ItemGrade.EPIC:
                SoundManager.Instance.SFXPlay(SoundManager.SFX.GetItemEpic);
                break;
            case ItemGrade.UNIQUE:
                SoundManager.Instance.SFXPlay(SoundManager.SFX.GetItemUnique);
                break;
            case ItemGrade.LEGENDARY:
                SoundManager.Instance.SFXPlay(SoundManager.SFX.GetItemLegendary);
                break;
        }
    }

    public float ItemGradeSeconds(Item _item)
    {
        switch (_item.itemGrade)
        {
            case ItemGrade.NORMAL:
                return 0.3f;
            case ItemGrade.RARE:
                return 0.3f;
            case ItemGrade.EPIC:
                return 0.5f;
            case ItemGrade.UNIQUE:
                return 0.75f;
            case ItemGrade.LEGENDARY:
                return 1f;
            default:
                return 1f;
        }
    }

    public void OnAttachedGold()
    {
        SoundManager.Instance.SFXPlay(SoundManager.SFX.BuyGold);
    }

    public void OnAttachedZam()
    {
        SoundManager.Instance.SFXPlay(SoundManager.SFX.BuyZam);
    }

    public void Setting()
    {
        Time.timeScale = 0f;
        settingsPanel.SetActive(true);
        SoundManager.Instance.SFXPlay(SoundManager.SFX.Button);
    }

    public void Back()
    {
        Time.timeScale = 1f;

        settingsPanel.SetActive(false);
        SoundManager.Instance.SFXPlay(SoundManager.SFX.Button);
    }

    public void OnClickFPSPriorButton()
    {
        DataManager.Instance.playerData.curFrameIndex = DataManager.Instance.playerData.curFrameIndex - 1;

        SoundManager.Instance.SFXPlay(SoundManager.SFX.Button);

        Application.targetFrameRate = DataManager.Instance.playerData.Frames[DataManager.Instance.playerData.curFrameIndex];
    }

    public void OnClickFPSNextButton()
    {
        DataManager.Instance.playerData.curFrameIndex = DataManager.Instance.playerData.curFrameIndex + 1;

        SoundManager.Instance.SFXPlay(SoundManager.SFX.Button);

        Application.targetFrameRate = DataManager.Instance.playerData.Frames[DataManager.Instance.playerData.curFrameIndex];
    }

    public void BGMOnOff()
    {
        if (BGMToggle.isOn)
        {
            DataManager.Instance.playerData.isBGMOn = true;
        }
        else
        {
            DataManager.Instance.playerData.isBGMOn = false;
        }

        BGMTMPOnOff();

        SoundManager.Instance.BGMMuteOnOff();
    }
    public void SFXOnOff()
    {
        if (SFXToggle.isOn)
        {
            DataManager.Instance.playerData.isSFXOn = true;
        }
        else
        {
            DataManager.Instance.playerData.isSFXOn = false;
        }
        
        SFXTMPOnOff();

        SoundManager.Instance.SFXMuteOnOff();
    }

    public void BGMSFXInit()
    {
        if (DataManager.Instance.playerData.isBGMOn)
        {
            BGMToggle.isOn = true;
        }
        else
        {
            BGMToggle.isOn = false;
        }

        if (DataManager.Instance.playerData.isSFXOn)
        {
            SFXToggle.isOn = true;
        }
        else
        {
            SFXToggle.isOn = false;
        }

        BGMTMPOnOff();
        SFXTMPOnOff();
    }

    public void BGMTMPOnOff()
    {
        if (BGMToggle.isOn)
        {
            BGMOffToggleTMP.enabled = false;
            BGMOnToggleTMP.enabled = true;
        }
        else
        {
            BGMOnToggleTMP.enabled = false;
            BGMOffToggleTMP.enabled = true;
        }
    }

    public void SFXTMPOnOff()
    {
        if (SFXToggle.isOn)
        {
            SFXOffToggleTMP.enabled = false;
            SFXOnToggleTMP.enabled = true;
        }
        else
        {
            SFXOnToggleTMP.enabled = false;
            SFXOffToggleTMP.enabled = true;
        }
    }

    public void SupplyItem1Button()
    {
        NormalDrawing1RandItem(0);
    }

    public void SupplyItem2Button()
    {
        PremiumDrawing1RandItem(0);
    }

    public void SupplyZamButton()
    {
        BuyZam(200);
    }

    public void SupplyZenButton()
    {
        PlusZen(5);
    }
}
