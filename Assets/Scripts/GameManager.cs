using UnityEngine;

public class GameManager : MonoBehaviour
{
    private static GameManager instance = null;

    void Awake()
    {
        if (null == instance)
        {
            instance = this;
            DontDestroyOnLoad(this.gameObject);
        }
        else
        {
            Destroy(this.gameObject);
        }


        //Target Frame Rate ����
        Application.targetFrameRate = 60;
        //ȭ�� ��ȣ�� ����
        Screen.sleepTimeout = SleepTimeout.NeverSleep;
    }
    public static GameManager Instance
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
}
