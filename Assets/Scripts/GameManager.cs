using UnityEngine;

public class GameManager : MonoBehaviour
{
    private void Awake()
    {
        //Target Frame Rate ����
        Application.targetFrameRate = 60;
        //ȭ�� ��ȣ�� ����
        Screen.sleepTimeout = SleepTimeout.NeverSleep;
    }
}
