using TMPro;
using UnityEngine;
using UnityEngine.UI;
using System.Collections;
using UnityEngine.SceneManagement;
using System.Text;
using System.Collections.Generic;

public class MainMenuController : MonoBehaviour
{
    
    public TextMeshProUGUI playerHPText;
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

        TabClick(1);
        minStageNum = 1;
        maxStageNum = DataManager.Instance.playerData.isStageClear.Length;
        curSelectStage = DataManager.Instance.playerData.curStage;

        FPSTMP.text = $"{Application.targetFrameRate}Hz";

        playerZamText.text = MoneyUnitString.GetThousandCommaText(DataManager.Instance.playerData.PlayerZam);
        playerGoldText.text = MoneyUnitString.GetThousandCommaText(DataManager.Instance.playerData.PlayerGold);

        StartCoroutine(StageChange());

        for (int j = 0; j < DataManager.Instance.playerData.playerItems.Count; j++)
        {
            inventory.InitItem(DataManager.Instance.playerData.playerItems[j]);
        }
    }

    void Update()
    {
        playerHPText.text = MoneyUnitString.GetThousandCommaText(DataManager.Instance.playerData.PlayerHP);
        playerATKText.text = MoneyUnitString.GetThousandCommaText(DataManager.Instance.playerData.PlayerATK);

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
    }


    public void TabClick(int n)
    {
        SoundManager.Instance.SFXPlay(SoundManager.SFX.Button);

        targetIndex = n;
    }

    //게임 씬으로 이동 버튼
    public void OnClickGoGameStartButton()
    {
        SoundManager.Instance.SFXPlay(SoundManager.SFX.Button);

        DataManager.Instance.GameStartDataUpdate();

        switch (DataManager.Instance.playerData.curStage)
        {
            case 1:
                //씬이동
                SceneManager.LoadScene("GameSceneStage" + DataManager.Instance.playerData.curStage);
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

            _text.text = MoneyUnitString.GetThousandCommaText((int)Mathf.Lerp(_current, _target, percent));

            yield return null;
        }

        _text.text = MoneyUnitString.GetThousandCommaText(_target);
    }


    public void EquipButton()
    {
        //가존 장착된 장비를 찾아 정보를 받아 반환하는 과정이 필요
        //인벤토리 내 모든 items 중에서 

        equipButton.gameObject.SetActive(false);
        unEquipButton.gameObject.SetActive(true);

        SoundManager.Instance.SFXPlay(SoundManager.SFX.Equip);

        switch (curSelectedItem.itemPart)
        {
            case ItemPart.Weapon:
                if (DataManager.Instance.playerData.CurEquippedWeapon != null)
                    DataManager.Instance.playerData.CurEquippedWeapon.isEquipped = false;
                curSelectedItem.isEquipped = true;

                DataManager.Instance.playerData.CurEquippedWeapon = curSelectedItem;
                break;
            case ItemPart.Gloves:
                if (DataManager.Instance.playerData.CurEquippedGloves != null)
                    DataManager.Instance.playerData.CurEquippedGloves.isEquipped = false;
                curSelectedItem.isEquipped = true;

                DataManager.Instance.playerData.CurEquippedGloves = curSelectedItem;
                break;
            case ItemPart.Shoes:
                if (DataManager.Instance.playerData.CurEquippedShoes != null)
                    DataManager.Instance.playerData.CurEquippedShoes.isEquipped = false;
                curSelectedItem.isEquipped = true;

                DataManager.Instance.playerData.CurEquippedShoes = curSelectedItem;
                break;
            case ItemPart.Sheld:
                if (DataManager.Instance.playerData.CurEquippedSheld != null)
                    DataManager.Instance.playerData.CurEquippedSheld.isEquipped = false;
                curSelectedItem.isEquipped = true;

                DataManager.Instance.playerData.CurEquippedSheld = curSelectedItem;
                break;
            case ItemPart.Helmat:
                if (DataManager.Instance.playerData.CurEquippedHelmat != null)
                    DataManager.Instance.playerData.CurEquippedHelmat.isEquipped = false;
                curSelectedItem.isEquipped = true;

                DataManager.Instance.playerData.CurEquippedHelmat = curSelectedItem;
                break;
            case ItemPart.Armor:
                if (DataManager.Instance.playerData.CurEquippedArmor != null)
                    DataManager.Instance.playerData.CurEquippedArmor.isEquipped = false;
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

        equipButton.gameObject.SetActive(true);
        unEquipButton.gameObject.SetActive(false);

        SoundManager.Instance.SFXPlay(SoundManager.SFX.UnEquip);

        switch (curSelectedItem.itemPart)
        {
            case ItemPart.Weapon:
                DataManager.Instance.playerData.CurEquippedWeapon = null;
                break;
            case ItemPart.Gloves:
                DataManager.Instance.playerData.CurEquippedGloves = null;
                break;
            case ItemPart.Shoes:
                DataManager.Instance.playerData.CurEquippedShoes = null;
                break;
            case ItemPart.Sheld:
                DataManager.Instance.playerData.CurEquippedSheld = null;
                break;
            case ItemPart.Helmat:
                DataManager.Instance.playerData.CurEquippedHelmat = null;
                break;
            case ItemPart.Armor:
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

        StartCoroutine(Count(playerGoldText, DataManager.Instance.playerData.PlayerGold, DataManager.Instance.playerData.PlayerGold - curSelectedItem.itemCurLevel * curSelectedItem.itemUpgradeCost));

        DataManager.Instance.playerData.PlayerGold -= curSelectedItem.itemCurLevel * curSelectedItem.itemUpgradeCost;

        curSelectedItem.itemCurLevel++;

        DataManager.Instance.DataUpdate();

        EquipInfoUpdate(curSelectedItem);
    }

    public void SellButton()
    {
        SoundManager.Instance.SFXPlay(SoundManager.SFX.SellButton);
        inventory.deleteItem(curSelectedItem);

        PlusGold(Mathf.RoundToInt((curSelectedItem.itemPrice + (curSelectedItem.itemCurLevel - 1) * curSelectedItem.itemUpgradeCost) * 0.5f));

        //해당 아이템 삭제
        if (curSelectedItem.isEquipped)
        {
            UnequipButton();
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
            case ItemPart.Weapon:
            case ItemPart.Gloves:
            case ItemPart.Shoes:
                statTMP.text = "ATK";
                equipStatTMP.text = MoneyUnitString.GetThousandCommaText(_item.itemATK + (int)_item.itemGrade * _item.itemCurLevel);
                break;
            case ItemPart.Sheld:
            case ItemPart.Armor:
            case ItemPart.Helmat:
                statTMP.text = "HP";
                equipStatTMP.text = MoneyUnitString.GetThousandCommaText(_item.itemHP + (int)_item.itemGrade * _item.itemCurLevel);
                break;
            case ItemPart.Count:
                break;
            default:
                break;
        }

        equipPartTMP.text = _item.itemPart.ToString();
        equipDescTMP.text = _item.itemDesc.ToString();


        if (_item.itemCurLevel == _item.itemMaxLevel)
        {
            equipUpgradeCostTMP.text = $"{MoneyUnitString.GetThousandCommaText(DataManager.Instance.playerData.PlayerGold)} / -";
        }
        else
        {
            equipUpgradeCostTMP.text = $"{MoneyUnitString.GetThousandCommaText(DataManager.Instance.playerData.PlayerGold)} / {MoneyUnitString.GetThousandCommaText(curSelectedItem.itemCurLevel * curSelectedItem.itemUpgradeCost)}";
        }



        equipmentInfoPanel.SetActive(true);
    }

    public Color SetGradeColorBackground(Item _item)
    {
        Color retColor;

        switch (_item.itemGrade)
        {
            case ItemGrade.Normal:
                retColor = new Color(0.75f, 0.75f, 0.75f, 1f);
                break;
            case ItemGrade.Rare:
                retColor = new Color(0, 0.5f, 1f, 1f);
                break;
            case ItemGrade.Epic:
                retColor = new Color(0.65f, 0f, 1f, 1f);
                break;
            case ItemGrade.Unique:
                retColor = Color.yellow;
                break;
            case ItemGrade.Legendary:
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

        PlusGold(goldNumber);
    }

    public void BuyZam(int ZamNumber)
    {

        switch (ZamNumber)
        {
            case 300:
                if (!GoldAttracters[0].isStopped)
                    return;
                ZamAttracters[0].Play();
                break;
            case 1000:
                if (!GoldAttracters[1].isStopped)
                    return;
                ZamAttracters[1].Play();
                break;
            case 3000:
                if (!GoldAttracters[2].isStopped)
                    return;
                ZamAttracters[2].Play();
                break;
            case 10000:
                if (!GoldAttracters[3].isStopped)
                    return;
                ZamAttracters[3].Play();
                break;
        }

        SoundManager.Instance.SFXPlay(SoundManager.SFX.SellButton);

        PlusZam(ZamNumber);
    }

    public void PlusGold(int goldNumber)
    {
        StartCoroutine(Count(playerGoldText, DataManager.Instance.playerData.PlayerGold, DataManager.Instance.playerData.PlayerGold + goldNumber));
        DataManager.Instance.playerData.PlayerGold += goldNumber;
    }

    public void MinusGold(int goldNumber)
    {
        StartCoroutine(Count(playerZamText, DataManager.Instance.playerData.PlayerZam, DataManager.Instance.playerData.PlayerZam - goldNumber));
        DataManager.Instance.playerData.playerZam -= goldNumber;
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

    //가중치 랜덤 가챠
    public void NormalDrawing1RandItem(int zamPrice)
    {
        SoundManager.Instance.SFXPlay(SoundManager.SFX.Button);

        int total = 0;
        int weight = 0;
        int selectNum = 0;
        List<Item> gachaList = new List<Item>();
        if (zamPrice > DataManager.Instance.playerData.PlayerZam)
        {
            TriggerPopUp("젬이 부족합니다.");
            return;
        }

        //가차리스트 생성 및 초기화
        for (int i = 0; i < DataManager.Instance.items.Count; i++)
        {
            ItemGrade curItemGrade = DataManager.Instance.items[i].itemGrade;

            if (curItemGrade == ItemGrade.Normal || curItemGrade == ItemGrade.Rare || curItemGrade == ItemGrade.Epic)
            {
                gachaList.Add(DataManager.Instance.items[i]);
                total += DataManager.Instance.items[i].itemDrawingWeight;
            }
        }

        selectNum = Mathf.RoundToInt(total * Random.Range(0.0f, 1.0f));

        for (int i = 0; i < gachaList.Count; i++)
        {
            weight += gachaList[i].itemDrawingWeight;

            if (selectNum <= weight)
            {
                //아이템 선언
                Item newItem = new Item(gachaList[i]);

                //아이템 추가
                inventory.AddItem(newItem);

                //연출
                StartCoroutine(Producing1Item(newItem));
                break;
            }
        }

        SubtractZam(zamPrice);
    }

    public void NormalDrawing10RandItem(int zamPrice)
    {
        SoundManager.Instance.SFXPlay(SoundManager.SFX.Button);

        int total = 0;
        int weight = 0;
        int selectNum = 0;
        List<Item> gachaList = new List<Item>();
        List<Item> SelectedItemList = new List<Item>();

        if (zamPrice > DataManager.Instance.playerData.PlayerZam)
        {
            TriggerPopUp("젬이 부족합니다.");
            return;
        }

        //가차리스트 생성 및 초기화
        for (int i = 0; i < DataManager.Instance.items.Count; i++)
        {
            ItemGrade curItemGrade = DataManager.Instance.items[i].itemGrade;

            if (curItemGrade == ItemGrade.Normal || curItemGrade == ItemGrade.Rare || curItemGrade == ItemGrade.Epic)
            {
                gachaList.Add(DataManager.Instance.items[i]);
                total += DataManager.Instance.items[i].itemDrawingWeight;
            }
        }

        for (int j = 0; j < 10; j++)
        {
            weight = 0;
            selectNum = Mathf.RoundToInt(total * Random.Range(0.0f, 1.0f));

            for (int i = 0; i < gachaList.Count; i++)
            {
                weight += gachaList[i].itemDrawingWeight;

                if (selectNum <= weight)
                {
                    Item newItem = new Item(gachaList[i]);
                    inventory.AddItem(newItem);
                    SelectedItemList.Add(newItem);
                    break;
                }
            }
        }

        StartCoroutine(Producing10Items(SelectedItemList));

        SubtractZam(zamPrice);
    }

    public void PremiumDrawing1RandItem(int zamPrice)
    {
        SoundManager.Instance.SFXPlay(SoundManager.SFX.Button);

        int total = 0;
        int weight = 0;
        int selectNum = 0;

        if (zamPrice > DataManager.Instance.playerData.PlayerZam)
        {
            TriggerPopUp("젬이 부족합니다.");
            return;
        }

        //가차리스트 생성 및 초기화
        for (int i = 0; i < DataManager.Instance.items.Count; i++)
        {
            total += DataManager.Instance.items[i].itemDrawingWeight;
        }

        selectNum = Mathf.RoundToInt(total * Random.Range(0.0f, 1.0f));

        for (int i = 0; i < DataManager.Instance.items.Count; i++)
        {
            weight += DataManager.Instance.items[i].itemDrawingWeight;

            if (selectNum <= weight)
            {
                Item newItem = new Item(DataManager.Instance.items[i]);
                inventory.AddItem(newItem);

                //연출
                StartCoroutine(Producing1Item(newItem));
                break;
            }
        }
        SubtractZam(zamPrice);
    }

    public void PremiumDrawing10RandItem(int zamPrice)
    {
        SoundManager.Instance.SFXPlay(SoundManager.SFX.Button);

        int total = 0;
        int weight = 0;
        int selectNum = 0;
        List<Item> SelectedItemList = new List<Item>();

        if (zamPrice > DataManager.Instance.playerData.PlayerZam)
        {
            TriggerPopUp("젬이 부족합니다.");
            return;
        }

        //가차리스트 생성 및 초기화
        for (int i = 0; i < DataManager.Instance.items.Count; i++)
        {
            total += DataManager.Instance.items[i].itemDrawingWeight;
        }

        for (int j = 0; j < 10; j++)
        {
            weight = 0;
            selectNum = Mathf.RoundToInt(total * Random.Range(0.0f, 1.0f));

            for (int i = 0; i < DataManager.Instance.items.Count; i++)
            {
                weight += DataManager.Instance.items[i].itemDrawingWeight;

                if (selectNum <= weight)
                {
                    Item newItem = new Item(DataManager.Instance.items[i]);
                    inventory.AddItem(newItem);
                    SelectedItemList.Add(newItem);
                    break;
                }
            }
        }

        StartCoroutine(Producing10Items(SelectedItemList));

        SubtractZam(zamPrice);
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
            case ItemGrade.Normal:
                SoundManager.Instance.SFXPlay(SoundManager.SFX.GetItemNormal);
                break;
            case ItemGrade.Rare:
                SoundManager.Instance.SFXPlay(SoundManager.SFX.GetItemRare);
                break;
            case ItemGrade.Epic:
                SoundManager.Instance.SFXPlay(SoundManager.SFX.GetItemEpic);
                break;
            case ItemGrade.Unique:
                SoundManager.Instance.SFXPlay(SoundManager.SFX.GetItemUnique);
                break;
            case ItemGrade.Legendary:
                SoundManager.Instance.SFXPlay(SoundManager.SFX.GetItemLegendary);
                break;
        }
    }

    public float ItemGradeSeconds(Item _item)
    {
        switch (_item.itemGrade)
        {
            case ItemGrade.Normal:
                return 0.3f;
            case ItemGrade.Rare:
                return 0.3f;
            case ItemGrade.Epic:
                return 0.5f;
            case ItemGrade.Unique:
                return 0.75f;
            case ItemGrade.Legendary:
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
}
