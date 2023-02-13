using UnityEngine;

//Layering
//BackGround: -4 ~
//Player: 1 ~
//Enemy(Block + Alien): 6 ~
//Effect: 11 ~

public class GameManager : MonoBehaviour
{
    private static GameManager instance = null;

    public int curKillEnemyCount;
    public int score;
    public int combo;

    void Awake()
    {
        if (null == instance)
        {
            instance = this;
        }
        else
        {
            Destroy(this.gameObject);
        }

        //Target Frame Rate ����
        Application.targetFrameRate = 60;
        //ȭ�� ��ȣ�� ����
        Screen.sleepTimeout = SleepTimeout.NeverSleep;

        curKillEnemyCount = 0;
        combo = 0;
        score = 0;
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
