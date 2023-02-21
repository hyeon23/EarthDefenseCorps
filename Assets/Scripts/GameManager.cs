using UnityEngine;

//Layering
//BackGround: -4 ~
//Player: 1 ~
//Enemy(Block + Alien): 6 ~
//Effect: 11 ~

public class GameManager : MonoBehaviour
{
    private static GameManager instance = null;

    //현재 총 죽은 Enemy Count
    public int curDeadEnemyCount;
    //현재 내가 죽인(부순) Enemy Count
    public int curKillEnemyCount;
    //현재 씬에 존재하는 Enemey Count
    public int curLiveEnemyCount;
    //해당 스테이지에서 스폰되는 총 EnemyCount;
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

        //Target Frame Rate 설정
        Application.targetFrameRate = 60;

        //화면 보호기 제거
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
