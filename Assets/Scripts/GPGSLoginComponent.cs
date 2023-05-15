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
        //0. 로그인 수행 => 결과값을 통해 회원가입 수행
        if (!DataManager.Instance.loginSuccessed)
            GPGSBinder.Inst.Login((success, localUser) => { DataManager.Instance.loginSuccessed = success; DataManager.Instance.localUserID = localUser.id; });
        
        if (!DataManager.Instance.signinDBSuccessed)
            StartCoroutine(DataManager.Instance.PostRequest(DataManager.Instance.signinPath, new TempDataClass("paramtest"/*, "paramtest", "paramtest"*/)/*DataManager.Instance.localUserID*/));

        loginButton.onClick.AddListener( delegate {
            SoundManager.Instance.SFXPlay(SoundManager.SFX.Button);

            //=1. 로그인 성공 => 시작버튼 등장
            //=2. 로그인 실패 => 3. 회원가입 수행 => 0. 로그인 수행

            //=3. 회원가입 성공
            //=4. 회원가입 실패

            if (!DataManager.Instance.loginSuccessed || !DataManager.Instance.signinDBSuccessed)//2. 로그인 실패
            {
                TriggerPopUp("로그인은 필수입니다.");

                //회원가입

                //0-1. 로그인 수행 => 결과값을 통해 회원가입 수행
                if (!DataManager.Instance.loginSuccessed)
                    GPGSBinder.Inst.Login((success, localUser) => { DataManager.Instance.loginSuccessed = success; DataManager.Instance.localUserID = localUser.id; });
                //0-0. 로그인 수행 => 결과값을 통해 회원가입 수행

                Debug.Log(DataManager.Instance.signinPath);

                if (!DataManager.Instance.signinDBSuccessed)
                {
                    StartCoroutine(DataManager.Instance.PostRequest(DataManager.Instance.signinPath, new TempDataClass("paramtest"/*, "paramtest", "paramtest"*/)/*DataManager.Instance.localUserID*/));
                }


            }
            else//1. 로그인 성공
            {
                startButton.gameObject.SetActive(true);
                loginButton.gameObject.SetActive(false);

                //플레이어 데이터 로드
                //StartCoroutine(DataManager.Instance.GetRequest(DataManager.Instance.signinPath, LoadingSceneController.LoadScene));
            }
        });

        startButton.onClick.AddListener(delegate {
            SoundManager.Instance.SFXPlay(SoundManager.SFX.Button);
            LoadingSceneController.LoadScene("MainMenuScene");
            //if (로그인 성공 시)
            //{
            //   데이터 로드(웹 요청)
            //   LoadingSceneController.LoadScene("MainMenuScene");
            //화면 전환
            //}
            //else (로그인 실패 시)
            //{
            //   TriggerPopUp("로그인을 실패했습니다.");
            //}
        });

        logoutButton.onClick.AddListener(
            delegate {
            TriggerPopUp("로그아웃 되었습니다.");

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
            //Debug.Log(JsonUtility.ToJson(new Item(0, ItemPart.None, ItemGrade.None, false, "이름", "설명", 0, 0, 0, 0, 0, 0)));
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

    //핸드폰에서만 표시됨
    //void OnGUI()
    //{
    //    GUI.matrix = Matrix4x4.TRS(Vector3.zero, Quaternion.identity, Vector3.one * 3);

    //    //클리어 로그 버튼을 누르면 로그 초기화
    //    if (GUILayout.Button("ClearLog"))
    //        log = "";

    //    //로그인 버튼을 누르면 <성공 여부, Local User>의 여러 변수를 받음
    //    //localUaser. 을 이용해 여러 변수를 사용하면 됨[쓰고싶은 것을 쓰면 된다.]
    //    if (GUILayout.Button("Login"))
    //        GPGSBinder.Inst.Login((success, localUser) =>
    //        log = $"{success}, {localUser.userName}, {Social.localUser.id}, {localUser.state}, {localUser.underage}");

    //    if (GUILayout.Button("Logout"))
    //        GPGSBinder.Inst.Logout();

    //    if (guilayout.button("savecloud"))
    //        //원하는 파일 네임 & 원하는 데이터를 인자로 가짐, 성공시 -> 성공 표현
    //        gpgsbinder.inst.savecloud("mysave", "want data", success => log = $"{success}");

    //    //원하는 파일 네임을 인자로 가짐, 성공시 -> 데이터 전달
    //    if (guilayout.button("loadcloud"))
    //        gpgsbinder.inst.loadcloud("mysave", (success, data) => log = $"{success}, {data}");

    //    //원하는 파일 네임을 인자로 가짐, 성공시 -> 파일 삭제
    //    if (guilayout.button("deletecloud"))
    //        gpgsbinder.inst.deletecloud("mysave", success => log = $"{success}");

    //    if (guilayout.button("showachievementui"))
    //        gpgsbinder.inst.showachievementui();


    //    /*여러 추가 기능[리더보드, 업적 등]*/
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


