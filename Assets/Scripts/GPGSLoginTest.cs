using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;
using UnityEngine.SocialPlatforms.Impl;
using UnityEngine.UI;

public class GPGSLoginTest : MonoBehaviour
{
    public Button startButton;
    public Button loginButton;
    public Button logoutButton;

    public TextMeshProUGUI popupTMP;
    public Animator popupAnime;

    private void Start()
    {
        if (bool.Parse(DataManager.Instance.localPlayerInfo[0]))
        {
            transform.gameObject.SetActive(false);
        }
        else
        {
            transform.gameObject.SetActive(true);
        }

        loginButton.onClick.AddListener( delegate {
            GPGSBinder.Inst.Login((success, localUser) =>
            DataManager.Instance.localPlayerInfo = $"{success}, {localUser.userName}, {Social.localUser.id}, {localUser.state}, {localUser.underage}".Split(','));
        });

        startButton.onClick.AddListener(delegate {
            if (bool.Parse(DataManager.Instance.localPlayerInfo[0]))
            {
                LoadingSceneController.LoadScene("MainMenuScene");
            }
            else
            {
                TriggerPopUp("로그인은 필수입니다.");
            }
        });

        logoutButton.onClick.AddListener(delegate {
            if (bool.Parse(DataManager.Instance.localPlayerInfo[0]))
            {
                TriggerPopUp("로그아웃 되었습니다.");
                DataManager.Instance.localPlayerInfo = null;
                GPGSBinder.Inst.Logout();
            }
            else
            {
                TriggerPopUp("로그인 상태가 아닙니다.");
            }
        }
        );
    }

    public void TriggerPopUp(string msg)
    {
        popupTMP.text = msg;
        popupAnime.SetTrigger("doPopUp");
        SoundManager.Instance.SFXPlay(SoundManager.SFX.PopUP);
    }

    private void Update()
    {
        if (bool.Parse(DataManager.Instance.localPlayerInfo[0]))
        {
            startButton.gameObject.SetActive(true);
            startButton.gameObject.SetActive(false);
        }
        else
        {
            startButton.gameObject.SetActive(true);
            startButton.gameObject.SetActive(false);
        }
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

