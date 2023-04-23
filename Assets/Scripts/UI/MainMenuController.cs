using TMPro;
using UnityEngine;
using UnityEngine.UI;
using System.Collections;
using UnityEngine.SceneManagement;
using System.Text;
using System.Collections.Generic;
using System;

public class MainMenuController : MonoBehaviour
{

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

    }

    //게임 씬으로 이동 버튼
    public void OnClickGoGameStartButton()
    {
        DataManager.Instance.playerData.PlayerZen -= 5;
        DataManager.Instance.GameStartDataUpdate();

        switch (DataManager.Instance.playerData.curStage)
        {
            case 1:
                //씬이동
                //SceneManager.LoadScene("GameSceneStage" + DataManager.Instance.playerData.curStage);
                LoadingSceneController.LoadScene("GameSceneStage" + DataManager.Instance.playerData.curStage);
                break;
        }
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
}
