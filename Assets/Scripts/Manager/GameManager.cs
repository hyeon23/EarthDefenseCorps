using UnityEngine;
using System.Collections;
using UnityEngine.SceneManagement;
//Layering
//BackGround: -4 ~
//Player: 1 ~
//Enemy(Block + Alien): 6 ~
//Effect: 11 ~

public class GameManager : MonoBehaviour
{
    private static GameManager instance = null;

    public GameObject curHitEnemy = null;

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
    public int gold;

    private Transform cam;

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

        //화면 보호기 제거
        Screen.sleepTimeout = SleepTimeout.NeverSleep;

        Time.timeScale = 1.0f;

        cam = Camera.main.transform;

        curDeadEnemyCount = 0;
        curLiveEnemyCount = 0;
        curKillEnemyCount = 0;

        combo = 0;
        score = 0;
        gold = 0;
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

    public IEnumerator CameraShake(float shakeTime, float shakeSpeed, float shakeAmount)
    {
        Vector3 originPosition = cam.localPosition;
        float elapsedTime = 0f;

        while(elapsedTime < shakeTime)
        {
            Vector3 randomPoint = originPosition + Random.insideUnitSphere * shakeAmount;
            cam.localPosition = Vector3.Lerp(cam.localPosition, randomPoint, Time.deltaTime * shakeSpeed);

            yield return null;

            elapsedTime += Time.deltaTime;
        }

        //cam.localPosition = originPosition;
    }

    public void GameOver()
    {
        
        InGameTextViewer.Instance.GameOver();
        SoundManager.Instance.bgmPlayer.Stop();
        SoundManager.Instance.SFXPlay(SoundManager.SFX.GameOver);
        DataManager.Instance.playerData.PlayerGold += gold;

        //[★]골드 변동 request
        StartCoroutine(DataManager.Instance.PutGoldUpdateRequest(DataManager.Instance.putGoldUpdatePath, new PUTReqGold(DataManager.Instance.playerData.PlayerGold)));
    }

    public void StageClear()
    {
        InGameTextViewer.Instance.StageClear();
        DataManager.Instance.playerData.PlayerGold += gold;
        SoundManager.Instance.SFXPlay(SoundManager.SFX.GameClear);
        DataManager.Instance.playerData.isStageClear[DataManager.Instance.playerData.curStage - 1] = true;

        //[★]골드 변동 request
        StartCoroutine(DataManager.Instance.PutGoldUpdateRequest(DataManager.Instance.putGoldUpdatePath, new PUTReqGold(DataManager.Instance.playerData.PlayerGold)));

        //[★]스테이지 정보 변동 request
        StartCoroutine(DataManager.Instance.PutStageClearRequest(DataManager.Instance.putStageClearPath, new PUTReqStageClear(DataManager.Instance.playerData.curStage, DataManager.Instance.localUserID)));
    }

    public void GoToMenu()
    {
        //SoundManager.Instance.SFXPlay(SoundManager.SFX.Button);

        SceneManager.LoadScene("MainMenuScene");
        //LoadingSceneController.LoadScene("MainMenuScene");
    }

    public void GameRetry()
    {
        SoundManager.Instance.SFXPlay(SoundManager.SFX.Button);

        if (DataManager.Instance.playerData.playerZen < 5)
        {
            InGameTextViewer.Instance.TriggerPopUp("Not Enough Zens");
            return;
        }

        DataManager.Instance.playerData.PlayerZen -= 5;

        DataManager.Instance.GameStartDataUpdate();
        SceneManager.LoadScene(SceneManager.GetActiveScene().name);
    }
}
