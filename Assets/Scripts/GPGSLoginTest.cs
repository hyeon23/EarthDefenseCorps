using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GPGSLoginTest : MonoBehaviour
{
    string log;
    
    //핸드폰에서만 표시됨
    void OnGUI()
    {
        GUI.matrix = Matrix4x4.TRS(Vector3.zero, Quaternion.identity, Vector3.one * 3);

        //클리어 로그 버튼을 누르면 로그 초기화
        if (GUILayout.Button("ClearLog"))
            log = "";

        //로그인 버튼을 누르면 <성공 여부, Local User>의 여러 변수를 받음
        //localUaser. 을 이용해 여러 변수를 사용하면 됨[쓰고싶은 것을 쓰면 된다.]
        if (GUILayout.Button("Login"))
            GPGSBinder.Inst.Login((success, localUser) =>
            log = $"{success}, {localUser.userName}, {localUser.id}, {localUser.state}, {localUser.underage}");

        if (GUILayout.Button("Logout"))
            GPGSBinder.Inst.Logout();

        if (GUILayout.Button("SaveCloud"))
            GPGSBinder.Inst.SaveCloud("mysave", "want data", success => log = $"{success}");

        if (GUILayout.Button("LoadCloud"))
            GPGSBinder.Inst.LoadCloud("mysave", (success, data) => log = $"{success}, {data}");

        if (GUILayout.Button("DeleteCloud"))
            GPGSBinder.Inst.DeleteCloud("mysave", success => log = $"{success}");

        if (GUILayout.Button("ShowAchievementUI"))
            GPGSBinder.Inst.ShowAchievementUI();


        /*여러 추가 기능[리더보드, 업적 등]*/
        //if (GUILayout.Button("UnlockAchievement_one"))
        //    GPGSBinder.Inst.UnlockAchievement(GPGSIds.achievement_one, success => log = $"{success}");

        //if (GUILayout.Button("UnlockAchievement_two"))
        //    GPGSBinder.Inst.UnlockAchievement(GPGSIds.achievement_two, success => log = $"{success}");

        //if (GUILayout.Button("IncrementAchievement_three"))
        //    GPGSBinder.Inst.IncrementAchievement(GPGSIds.achievement_three, 1, success => log = $"{success}");

        //if (GUILayout.Button("ShowAllLeaderboardUI"))
        //    GPGSBinder.Inst.ShowAllLeaderboardUI();

        //if (GUILayout.Button("ShowTargetLeaderboardUI_num"))
        //    GPGSBinder.Inst.ShowTargetLeaderboardUI(GPGSIds.leaderboard_num);

        //if (GUILayout.Button("ReportLeaderboard_num"))
        //    GPGSBinder.Inst.ReportLeaderboard(GPGSIds.leaderboard_num, 1000, success => log = $"{success}");

        //if (GUILayout.Button("LoadAllLeaderboardArray_num"))
        //    GPGSBinder.Inst.LoadAllLeaderboardArray(GPGSIds.leaderboard_num, scores =>
        //    {
        //        log = "";
        //        for (int i = 0; i < scores.Length; i++)
        //            log += $"{i}, {scores[i].rank}, {scores[i].value}, {scores[i].userID}, {scores[i].date}\n";
        //    });

        //if (GUILayout.Button("LoadCustomLeaderboardArray_num"))
        //    GPGSBinder.Inst.LoadCustomLeaderboardArray(GPGSIds.leaderboard_num, 10,
        //        GooglePlayGames.BasicApi.LeaderboardStart.PlayerCentered, GooglePlayGames.BasicApi.LeaderboardTimeSpan.Daily, (success, scoreData) =>
        //        {
        //            log = $"{success}\n";
        //            var scores = scoreData.Scores;
        //            for (int i = 0; i < scores.Length; i++)
        //                log += $"{i}, {scores[i].rank}, {scores[i].value}, {scores[i].userID}, {scores[i].date}\n";
        //        });

        //if (GUILayout.Button("IncrementEvent_event"))
        //    GPGSBinder.Inst.IncrementEvent(GPGSIds.event_event, 1);

        //if (GUILayout.Button("LoadEvent_event"))
        //    GPGSBinder.Inst.LoadEvent(GPGSIds.event_event, (success, iEvent) =>
        //    {
        //        log = $"{success}, {iEvent.Name}, {iEvent.CurrentCount}";
        //    });

        //if (GUILayout.Button("LoadAllEvent"))
        //    GPGSBinder.Inst.LoadAllEvent((success, iEvents) =>
        //    {
        //        log = $"{success}\n";
        //        foreach (var iEvent in iEvents)
        //            log += $"{iEvent.Name}, {iEvent.CurrentCount}\n";
        //    });

        GUILayout.Label(log);
    }
}

