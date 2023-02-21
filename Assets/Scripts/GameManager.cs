using UnityEngine;

//Layering
//BackGround: -4 ~
//Player: 1 ~
//Enemy(Block + Alien): 6 ~
//Effect: 11 ~

public class GameManager : MonoBehaviour
{
    private static GameManager instance = null;

    //���� �� ���� Enemy Count
    public int curDeadEnemyCount;
    //���� ���� ����(�μ�) Enemy Count
    public int curKillEnemyCount;
    //���� ���� �����ϴ� Enemey Count
    public int curLiveEnemyCount;
    //�ش� ������������ �����Ǵ� �� EnemyCount;
    public int totalEnemyCount;

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

        curDeadEnemyCount = 0;
        curLiveEnemyCount = 0;
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
