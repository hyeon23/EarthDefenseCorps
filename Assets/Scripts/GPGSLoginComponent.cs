using System;
using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;
using UnityEngine.SocialPlatforms;
using UnityEngine.SocialPlatforms.Impl;
using UnityEngine.UI;

public class SigninClass
{
    public bool state;
    public string name;
    public string email;

    public SigninClass(bool _state = false, string _name = null, string _email = null)
    {
        state = _state;
        name = _name;
        email = _email;
    }
}

public class SignupClass
{
    public string name;
    public string email;

    public SignupClass(string _name = null, string _email = null)
    {
        name = _name;
        email = _email;
    }
}

public class StageClearClass
{
    public string phase;
    public string email;

    public StageClearClass(string _phase = null, string _email = null)
    {
        phase = _phase;
        email = _email;
    }
}

public class GPGSLoginComponent : MonoBehaviour
{
    public Button startButton;
    public Button loginButton;

    public TextMeshProUGUI popupTMP;
    public Animator popupAnime;

    private void Start()
    {
        //0. GPGS �ڵ� �α��� ����
        GPGSLogin();

        //1. DB �ڵ� �α��� ����
        DBLogin();
    }

    public void OnClickLoginBtn()
    {
        SoundManager.Instance.SFXPlay(SoundManager.SFX.Button);

        //=1. �α��� ���� => ���۹�ư ����
        //=2. �α��� ���� => 3. ȸ������ ���� => 0. �α��� ����

        //=3. ȸ������ ����
        //=4. ȸ������ ����

        if (!DataManager.Instance.loginSuccessed || !DataManager.Instance.signinDBSuccessed)//2. �α��� ����
        {
            Debug.Log($"{DataManager.Instance.loginSuccessed} {DataManager.Instance.signinDBSuccessed}");
            TriggerPopUp("�α����� �ʼ��Դϴ�.");

            //ȸ������

            GPGSLogin();

            DBLogin();
        }
        else//1. �α��� ����
        {
            startButton.gameObject.SetActive(true);
            loginButton.gameObject.SetActive(false);
        }
    }

    public void GPGSLogin()
    {
        //0-1. GPGS �α��� ����
        if (!DataManager.Instance.loginSuccessed)
            GPGSBinder.Inst.Login((success, localUser) => {
                DataManager.Instance.loginSuccessed = success;
                DataManager.Instance.localUserID = localUser.id;
                DataManager.Instance.localUserName = localUser.userName;
            });
    }

    public void DBLogin()
    {
        //0-2. DB �α��� ����
        if (!DataManager.Instance.signinDBSuccessed)
        {
            //PostRequest �Լ� ���� ��, �÷��̾� ������ �ε�[post �Լ� ���ο� ����]
            StartCoroutine(DataManager.Instance.PostSigninRequest(DataManager.Instance.signinPath, new SigninClass(false, DataManager.Instance.localUserName, "paramtest")));
        }
    }

    public void OnClickStartBtn()
    {
        SoundManager.Instance.SFXPlay(SoundManager.SFX.Button);
        LoadingSceneController.LoadScene("MainMenuScene");

        //if (�α��� ���� ��)
        //{
        //   ȭ�� ��ȯ
        //   LoadingSceneController.LoadScene("MainMenuScene");
        //}
        //else (�α��� ���� ��)
        //{
        //   ��� ���
        //   TriggerPopUp("�α����� �����߽��ϴ�.");
        //}
    }

    public void OnClickLogoutBtn()
    {
        TriggerPopUp("�α׾ƿ� �Ǿ����ϴ�.");

        SoundManager.Instance.SFXPlay(SoundManager.SFX.Button);
        DataManager.Instance.signinDBSuccessed = false;
        DataManager.Instance.loginSuccessed = false;
        DataManager.Instance.localUserName = null;
        DataManager.Instance.localUserInfo = null;
        DataManager.Instance.localUserID = null;

        startButton.gameObject.SetActive(false);
        loginButton.gameObject.SetActive(true);

        GPGSBinder.Inst.Logout();
    }

    public void OnClickGetUserInfoBtn()
    {
        SoundManager.Instance.SFXPlay(SoundManager.SFX.Button);

        StartCoroutine(DataManager.Instance.GetUserInfoRequest(DataManager.Instance.getUserInfoPath));
    }

    public void OnClickGetStageListBtn()
    {
        SoundManager.Instance.SFXPlay(SoundManager.SFX.Button);

        StartCoroutine(DataManager.Instance.GetStageListRequest(DataManager.Instance.getStageListPath));
    }

    public void OnClickPutStageClearBtn()
    {
        SoundManager.Instance.SFXPlay(SoundManager.SFX.Button);

        StartCoroutine(DataManager.Instance.PutStageClearRequest(DataManager.Instance.putStageClearPath, new StageClearClass("PHASE_TWO", "paramtest")));
    }

    public void TriggerPopUp(string msg)
    {
        popupTMP.text = msg;
        popupAnime.SetTrigger("doPopUp");
        SoundManager.Instance.SFXPlay(SoundManager.SFX.PopUP);
    }
}