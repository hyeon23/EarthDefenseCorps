using System;
using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;
using UnityEngine.SocialPlatforms.Impl;
using UnityEngine.UI;

public class TempDataClass
{
    public string email;
    //public string email2;
    //public string email3;

    public TempDataClass(string _email1/*, string _email2, string _email3*/) {
        email = _email1;
        //email2 = _email2;
        //email3 = _email3;
    }
}

public class GPGSLoginComponent : MonoBehaviour
{
    public Button startButton;
    public Button loginButton;
    public Button logoutButton;
    public Button toJsonButton;

    public TextMeshProUGUI popupTMP;
    public Animator popupAnime;

    public void GetLoginResult(bool successInfo, string localUserID)
    {
        DataManager.Instance.loginSuccessed = successInfo;
        DataManager.Instance.localUserID = localUserID;
    }

    private void Start()
    {
        //0. �α��� ���� => ������� ���� ȸ������ ����
        if (!DataManager.Instance.loginSuccessed)
            GPGSBinder.Inst.Login((success, localUser) => { DataManager.Instance.loginSuccessed = success; DataManager.Instance.localUserID = localUser.id; });
        
        if (!DataManager.Instance.signinDBSuccessed)
            StartCoroutine(DataManager.Instance.PostRequest(DataManager.Instance.signinPath, new TempDataClass("paramtest"/*, "paramtest", "paramtest"*/)/*DataManager.Instance.localUserID*/));

        loginButton.onClick.AddListener( delegate {
            SoundManager.Instance.SFXPlay(SoundManager.SFX.Button);

            //=1. �α��� ���� => ���۹�ư ����
            //=2. �α��� ���� => 3. ȸ������ ���� => 0. �α��� ����

            //=3. ȸ������ ����
            //=4. ȸ������ ����

            if (!DataManager.Instance.loginSuccessed || !DataManager.Instance.signinDBSuccessed)//2. �α��� ����
            {
                TriggerPopUp("�α����� �ʼ��Դϴ�.");

                //ȸ������

                //0-1. �α��� ���� => ������� ���� ȸ������ ����
                if (!DataManager.Instance.loginSuccessed)
                    GPGSBinder.Inst.Login((success, localUser) => { DataManager.Instance.loginSuccessed = success; DataManager.Instance.localUserID = localUser.id; });
                //0-0. �α��� ���� => ������� ���� ȸ������ ����

                Debug.Log(DataManager.Instance.signinPath);

                if (!DataManager.Instance.signinDBSuccessed)
                {
                    StartCoroutine(DataManager.Instance.PostRequest(DataManager.Instance.signinPath, new TempDataClass("paramtest"/*, "paramtest", "paramtest"*/)/*DataManager.Instance.localUserID*/));
                }


            }
            else//1. �α��� ����
            {
                startButton.gameObject.SetActive(true);
                loginButton.gameObject.SetActive(false);

                //�÷��̾� ������ �ε�
                //StartCoroutine(DataManager.Instance.GetRequest(DataManager.Instance.signinPath, LoadingSceneController.LoadScene));
            }
        });

        startButton.onClick.AddListener(delegate {
            SoundManager.Instance.SFXPlay(SoundManager.SFX.Button);
            LoadingSceneController.LoadScene("MainMenuScene");
            //if (�α��� ���� ��)
            //{
            //   ������ �ε�(�� ��û)
            //   LoadingSceneController.LoadScene("MainMenuScene");
            //ȭ�� ��ȯ
            //}
            //else (�α��� ���� ��)
            //{
            //   TriggerPopUp("�α����� �����߽��ϴ�.");
            //}
        });

        logoutButton.onClick.AddListener(
            delegate {
            TriggerPopUp("�α׾ƿ� �Ǿ����ϴ�.");

            SoundManager.Instance.SFXPlay(SoundManager.SFX.Button);
            DataManager.Instance.loginSuccessed = false;
            DataManager.Instance.localUserInfo = null;
            DataManager.Instance.localUserID = null;

            startButton.gameObject.SetActive(false);
            loginButton.gameObject.SetActive(true);

            GPGSBinder.Inst.Logout();
        });

        toJsonButton.onClick.AddListener(delegate
        {
            Debug.Log(JsonUtility.ToJson(new TempDataClass("paramtest"/*, "paramtest", "paramtest"*/)));
            //Debug.Log(JsonUtility.ToJson(new Item(0, ItemPart.None, ItemGrade.None, false, "�̸�", "����", 0, 0, 0, 0, 0, 0)));
        });
    }

    public T GetT<T> (T _data)
    {
        return _data;
    }

    public void TriggerPopUp(string msg)
    {
        popupTMP.text = msg;
        popupAnime.SetTrigger("doPopUp");
        SoundManager.Instance.SFXPlay(SoundManager.SFX.PopUP);
    }

    //�ڵ��������� ǥ�õ�
    //void OnGUI()
    //{
    //    GUI.matrix = Matrix4x4.TRS(Vector3.zero, Quaternion.identity, Vector3.one * 3);

    //    //Ŭ���� �α� ��ư�� ������ �α� �ʱ�ȭ
    //    if (GUILayout.Button("ClearLog"))
    //        log = "";

    //    //�α��� ��ư�� ������ <���� ����, Local User>�� ���� ������ ����
    //    //localUaser. �� �̿��� ���� ������ ����ϸ� ��[������� ���� ���� �ȴ�.]
    //    if (GUILayout.Button("Login"))
    //        GPGSBinder.Inst.Login((success, localUser) =>
    //        log = $"{success}, {localUser.userName}, {Social.localUser.id}, {localUser.state}, {localUser.underage}");

    //    if (GUILayout.Button("Logout"))
    //        GPGSBinder.Inst.Logout();

    //    if (guilayout.button("savecloud"))
    //        //���ϴ� ���� ���� & ���ϴ� �����͸� ���ڷ� ����, ������ -> ���� ǥ��
    //        gpgsbinder.inst.savecloud("mysave", "want data", success => log = $"{success}");

    //    //���ϴ� ���� ������ ���ڷ� ����, ������ -> ������ ����
    //    if (guilayout.button("loadcloud"))
    //        gpgsbinder.inst.loadcloud("mysave", (success, data) => log = $"{success}, {data}");

    //    //���ϴ� ���� ������ ���ڷ� ����, ������ -> ���� ����
    //    if (guilayout.button("deletecloud"))
    //        gpgsbinder.inst.deletecloud("mysave", success => log = $"{success}");

    //    if (guilayout.button("showachievementui"))
    //        gpgsbinder.inst.showachievementui();


    //    /*���� �߰� ���[��������, ���� ��]*/
    //    if (guilayout.button("unlockachievement_one"))
    //        gpgsbinder.inst.unlockachievement(gpgsids.achievement_one, success => log = $"{success}");

    //    if (guilayout.button("unlockachievement_two"))
    //        gpgsbinder.inst.unlockachievement(gpgsids.achievement_two, success => log = $"{success}");

    //    if (guilayout.button("incrementachievement_three"))
    //        gpgsbinder.inst.incrementachievement(gpgsids.achievement_three, 1, success => log = $"{success}");

    //    if (guilayout.button("showallleaderboardui"))
    //        gpgsbinder.inst.showallleaderboardui();

    //    if (guilayout.button("showtargetleaderboardui_num"))
    //        gpgsbinder.inst.showtargetleaderboardui(gpgsids.leaderboard_num);

    //    if (guilayout.button("reportleaderboard_num"))
    //        gpgsbinder.inst.reportleaderboard(gpgsids.leaderboard_num, 1000, success => log = $"{success}");

    //    if (guilayout.button("loadallleaderboardarray_num"))
    //        gpgsbinder.inst.loadallleaderboardarray(gpgsids.leaderboard_num, scores =>
    //        {
    //            log = "";
    //            for (int i = 0; i < scores.length; i++)
    //                log += $"{i}, {scores[i].rank}, {scores[i].value}, {scores[i].userid}, {scores[i].date}\n";
    //        });

    //    if (guilayout.button("loadcustomleaderboardarray_num"))
    //        gpgsbinder.inst.loadcustomleaderboardarray(gpgsids.leaderboard_num, 10,
    //            googleplaygames.basicapi.leaderboardstart.playercentered, googleplaygames.basicapi.leaderboardtimespan.daily, (success, scoredata) =>
    //            {
    //                log = $"{success}\n";
    //                var scores = scoredata.scores;
    //                for (int i = 0; i < scores.length; i++)
    //                    log += $"{i}, {scores[i].rank}, {scores[i].value}, {scores[i].userid}, {scores[i].date}\n";
    //            });

    //    if (guilayout.button("incrementevent_event"))
    //        gpgsbinder.inst.incrementevent(gpgsids.event_event, 1);

    //    if (guilayout.button("loadevent_event"))
    //        gpgsbinder.inst.loadevent(gpgsids.event_event, (success, ievent) =>
    //        {
    //            log = $"{success}, {ievent.name}, {ievent.currentcount}";
    //        });

    //    if (guilayout.button("loadallevent"))
    //        gpgsbinder.inst.loadallevent((success, ievents) =>
    //        {
    //            log = $"{success}\n";
    //            foreach (var ievent in ievents)
    //                log += $"{ievent.name}, {ievent.currentcount}\n";
    //        });

    //    GUILayout.Label(log);
    //}
}


