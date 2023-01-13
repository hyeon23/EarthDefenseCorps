using UnityEngine;

public class GameManager : MonoBehaviour
{
    private void Awake()
    {
        //Target Frame Rate 설정
        Application.targetFrameRate = 60;
        //화면 보호기 제거
        Screen.sleepTimeout = SleepTimeout.NeverSleep;
    }
}
