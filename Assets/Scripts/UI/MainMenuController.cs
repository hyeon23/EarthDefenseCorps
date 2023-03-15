using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.EventSystems;
using UnityEngine.SceneManagement;
using TMPro;
using static UnityEngine.CullingGroup;

public class MainMenuController : MonoBehaviour
{
    [Header("Bottom Panel")]
    public Sprite[] BtnTargetImage;
    public Sprite[] SelectedBtnTargetImage;
    public RectTransform[] BtnImageRect;
    const int SIZE = 3;

    int targetIndex;

    [Header("Middle Panel")]
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

    public Animator popUpAnime;
    public TextMeshProUGUI PopUpTMP;//팝업 TMP


    private void Awake()
    {
        TabClick(1);
        isStageClear = new bool[3] { true, false, false };
        stageNames = new string[3] { "MOON", "Mercury", "Mars" };
        stageSymbolicColors = new Color[3] { Color.yellow, new Color(0, 150, 255, 255), Color.red };
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

        if (curSelectStage == GameManager.Instance.curStage)
        {

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
}
