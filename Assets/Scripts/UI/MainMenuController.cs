using TMPro;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.Events;
using System.Collections;
using UnityEngine.SceneManagement;
using static UnityEditor.Progress;
using System.Security.Policy;

public class MainMenuController : MonoBehaviour
{
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
    public TextMeshProUGUI gameStartButtonTMP;//행성 이름 TMP
    public TextMeshProUGUI stageSelectButtonTMP;//행성 이름 TMP

    public GameObject Planet;//행성 이미지 및 버튼 설정을 위한 GameObject

    public GameObject PlanetAxis;//행성 회전축
    public Animator PlanetAxisAnime;

    public Button StageSelectLeftButton;
    public Button StageSelectRightButton;

    public int curSelectStage;//현재 선택한 Stage 번호
    public int maxStageNum;//최대 Stage 수
    public int minStageNum;//최소 Stage 수

    public bool isStageChanging = false;

    public bool[] isStageClear;

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

        TabClick(1);
        isStageClear = new bool[3] { true, false, false };
        stageNames = new string[3] { "MOON", "Mercury", "Mars" };
        stageSymbolicColors = new Color[3] { Color.yellow, new Color(0, 150, 255, 255), Color.red };
    }

    public void EquipButton()
    {
        //가존 장착된 장비를 찾아 정보를 받아 반환하는 과정이 필요
        //인벤토리 내 모든 items 중에서 

        curSelectedItem.isEquipped = true;

        equipButton.gameObject.SetActive(false);
        unEquipButton.gameObject.SetActive(true);

        switch (curSelectedItem.itemPart)
        {
            case Item.ItemPart.Weapon:
                DataManager.Instance.curEquippedWeapon = curSelectedItem;
                break;
            case Item.ItemPart.Gloves:
                DataManager.Instance.curEquippedGloves = curSelectedItem;
                break;
            case Item.ItemPart.Shoes:
                DataManager.Instance.curEquippedShoes = curSelectedItem;
                break;
            case Item.ItemPart.Sheld:
                DataManager.Instance.curEquippedSheld = curSelectedItem;
                break;
            case Item.ItemPart.Helmat:
                DataManager.Instance.curEquippedHelmat = curSelectedItem;
                break;
            case Item.ItemPart.Armor:
                DataManager.Instance.curEquippedArmor = curSelectedItem;
                break;
        }
    }

    public void UnequipButton()
    {
        //아이템 장착 해제
        curSelectedItem.isEquipped = false;

        equipButton.gameObject.SetActive(true);
        unEquipButton.gameObject.SetActive(false);

        switch (curSelectedItem.itemPart)
        {
            case Item.ItemPart.Weapon:
                DataManager.Instance.curEquippedWeapon = null;
                break;
            case Item.ItemPart.Gloves:
                DataManager.Instance.curEquippedGloves = null;
                break;
            case Item.ItemPart.Shoes:
                DataManager.Instance.curEquippedShoes = null;
                break;
            case Item.ItemPart.Sheld:
                DataManager.Instance.curEquippedSheld = null;
                break;
            case Item.ItemPart.Helmat:
                DataManager.Instance.curEquippedHelmat = null;
                break;
            case Item.ItemPart.Armor:
                DataManager.Instance.curEquippedArmor = null;
                break;
        }
    }

    public void UpgradeButton()
    {
        //if PlayerGold >= curUpgradeCost
        // PlayerGold - curUpgradeCost
        // 
        curSelectedItem.itemLevel++;
        equipLevelTMP.text = curSelectedItem.itemLevel.ToString();
        equipUpgradeCostTMP.text = curSelectedItem.itemUpgradeCost.ToString();
    }

    public void SellButton()
    {
        //해당 아이템 삭제
    }

    public void EquipInfoUpdate(Item _item)
    {
        curSelectedItem = _item;

        Debug.Log(curSelectedItem.itemLevel);

        equipNameTMP.text = _item.itemName;
        equipTopNameImage.color = SetGradeColorBackground(_item);
        equipTopGradeImage.color = SetGradeColorBackground(_item);
        equipTopGradeTMP.text = _item.itemGrade.ToString();
        equipGradeImage.color = SetGradeColorBackground(_item);
        equipImage.sprite = _item.itemImage;

        if(curSelectedItem.isEquipped) 
        {
            equipButton.gameObject.SetActive(false);
            unEquipButton.gameObject.SetActive(true);
        }
        else
        {
            equipButton.gameObject.SetActive(true);
            unEquipButton.gameObject.SetActive(false);
        }

        equipLevelTMP.text = _item.itemLevel.ToString();
        statTMP.text = "ATK";
        equipStatTMP.text = _item.itemATK.ToString();
        equipPartTMP.text = _item.itemPart.ToString();
        equipDescTMP.text = _item.itemDesc.ToString();
        equipUpgradeCostTMP.text = _item.itemUpgradeCost.ToString();

        equipmentInfoPanel.SetActive(true);
}

public Color SetGradeColorBackground(Item _item)
    {
        Color retColor;

        switch (_item.itemGrade)
        {
            case Item.ItemGrade.Normal:
                retColor = new Color(0.75f, 0.75f, 0.75f, 1f);
                break;
            case Item.ItemGrade.Rare:
                retColor = new Color(0, 0.5f, 1f, 1f);
                break;
            case Item.ItemGrade.Epic:
                retColor = new Color(0.6f, 0f, 1f, 1f);
                break;
            case Item.ItemGrade.Unique:
                retColor = Color.yellow;
                break;
            case Item.ItemGrade.Legendary:
                retColor = Color.red;
                break;
            default:
                retColor = Color.white;
                break;
        }

        return retColor;
    }

    private void Start()
    {
        minStageNum = 1;
        maxStageNum = isStageClear.Length;
        curSelectStage = GameManager.Instance.curStage;

        StartCoroutine(StageChange());
    }

    void Update()
    {
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
    }


    public void TabClick(int n)
    {
        targetIndex = n;
    }

    //게임 씬으로 이동 버튼
    public void OnClickGoGameStartButton()
    {
        

        switch (GameManager.Instance.curStage)
        {
            case 1:
                //씬이동
                SceneManager.LoadScene("GameSceneStage" + GameManager.Instance.curStage);
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
        int curStage = GameManager.Instance.curStage;

        stageNameTMP.text = stageNames[curStage - 1];
        stageNumberTMP.text = "S T A G E " + curStage;
        stageNameTMP.color = stageSymbolicColors[curStage - 1];
        gameStartButtonTMP.color = stageSymbolicColors[curStage - 1];
        stageSelectButtonTMP.color = stageSymbolicColors[curStage - 1];
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
        curSelectStage = GameManager.Instance.curStage;
        StagePlanetPanel.SetActive(false);
        StagePlanetButton.enabled = false;
        StageSelectionPanel.SetActive(true);
    }

    public void OnClickStageSelectButton()
    {
        GameManager.Instance.curStage = curSelectStage;
        Debug.Log(curSelectStage);
        ClearStageSelected(curSelectStage);
        Debug.Log(curSelectStage);
    }

    public void OnClickNextStageButton()
    {
        if (isStageChanging) return;

        curSelectStage = curSelectStage + 1;
        PlanetAxisAnime.SetTrigger("doRotateNext");
        StartCoroutine(StageChange());
    }

    public void OnClickPriorStageButton()
    {
        if (isStageChanging) return;

        curSelectStage = curSelectStage - 1;
        PlanetAxisAnime.SetTrigger("doRotatePrior");
        StartCoroutine(StageChange());
    }

    public IEnumerator StageChange()
    {
        
        isStageChanging = true;

        yield return new WaitForSeconds(0.5f);

        stageNumberTMP.text = "S T A G E " + curSelectStage;
        stageNameTMP.color = stageSymbolicColors[curSelectStage - 1];
        gameStartButtonTMP.color = stageSymbolicColors[curSelectStage - 1];
        stageSelectButtonTMP.color = stageSymbolicColors[curSelectStage - 1];
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
                if (isStageClear[curSelectStage - 2])
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

        if (curSelectStage == GameManager.Instance.curStage)
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
    }

    //EquipmentInfoPanel
    public void backButton()
    {
        equipmentInfoPanel.SetActive(false);

        curSelectedItem = null;
    }
}
