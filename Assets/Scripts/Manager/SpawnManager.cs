using System.Collections.Generic;
using System.Collections;
using UnityEngine;
using TMPro;
using System.IO;
using System.Runtime.Serialization;
using UnityEngine.SceneManagement;

[System.Serializable]
public class Spawn
{
    public float delay;
    public int enemyType;
    public int spawnPoint;
    public int phaseNumber;
    public int phaseMileStone;
}

public class SpawnManager : MonoBehaviour
{
    private static SpawnManager instance = null;

    public static SpawnManager Instance
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

    public int stage;

    [SerializeField]
    private GameObject[] enemyObjs;
    [SerializeField]
    private Transform[] spawnPoints;
    [SerializeField]
    private float nextSpawnDelay;
    [SerializeField]
    private float curSpawnDelay;

    [SerializeField]
    private List<Spawn> spawnList;
    [SerializeField]
    private int spawnIndex;
    [SerializeField]
    private bool spawnEnd;

    public int phase1Num = 0;
    public int phase2Num = 0;
    public int phase3Num = 0;

    public int curStageTotalNum = 0;

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

        spawnList = new List<Spawn>();

        //게임 입장과 동시에 스테이지 시작
        StageStart(stage);
    }

    public void StageStart(int stage)
    {
        //#.Enemy Spawn File Read
        ReadSpawnFile(stage);
    }

    private void Update()
    {
        curSpawnDelay += Time.deltaTime;
        if (curSpawnDelay >= nextSpawnDelay && !spawnEnd)
        {
            switch (spawnList[spawnIndex].phaseMileStone)
            {
                case -1:
                    if (GameManager.Instance.curLiveEnemyCount != 0) return;
                    SpawnEnemy();
                    curSpawnDelay = 0;
                    break;
                case 1:
                case 2:
                case 3:
                    //스테이지 시작 문구 띄우기
                    if (GameManager.Instance.curLiveEnemyCount != 0) return;

                    InGameTextViewer.Instance.PhaseStart($"Phase{spawnList[spawnIndex].phaseMileStone}");
                    SoundManager.Instance.SFXPlay(SoundManager.SFX.ReadyFight);
                    spawnIndex++;

                    if (spawnIndex == spawnList.Count)
                    {
                        spawnEnd = true;
                        return;
                    }
                    curSpawnDelay = 0;
                    break;
                default:
                    SpawnEnemy();
                    curSpawnDelay = 0;
                    break;
            }
        }
    }

    void ReadSpawnFile(int stage)
    {
        //#1. Initialization
        spawnList.Clear();
        spawnIndex = 0;
        spawnEnd = false;

        //#2. Respawn File Reading
        //-using System.IO;
        //폴더 내 파일 읽어오기
        TextAsset textFile = Resources.Load("Stage" + stage.ToString()) as TextAsset;//Load한 파일이 TextAsset File이 아니면 Null처리 맞으면 처리
        //파일 내 문자열 데이터 읽기 클래스
        StringReader stringReader = new StringReader(textFile.text);
        while (stringReader != null)
        {
            string line = stringReader.ReadLine();
            if (line == null)
                break;
            //#리스폰 데이터 생성
            Spawn spawnData = new Spawn();
            string[] lineDatas = line.Split(',');
            spawnData.delay = float.Parse(lineDatas[0]);
            spawnData.enemyType = int.Parse(lineDatas[1]);
            spawnData.phaseNumber = int.Parse(lineDatas[2]);
            spawnData.phaseMileStone= int.Parse(lineDatas[3]);

            int pluser = 0;

            switch (spawnData.enemyType)
            {
                case 0:
                    pluser = 27;
                    spawnData.spawnPoint = 1;
                    break;
                case 1:
                    pluser = 50;
                    spawnData.spawnPoint = 1;
                    break;
                case 2:
                    pluser = 9;
                    spawnData.spawnPoint = 1;
                    break;
                case 3:
                case 4:
                case 5:
                case 6:
                case 7:
                case 8:
                    pluser = 1;
                    spawnData.spawnPoint = Random.Range(0, 3);
                    break;
                case 9:
                case 10:
                case 11:
                    pluser = 3;
                    spawnData.spawnPoint = 1;
                    break;
                case 12:
                case 13:
                    pluser = 1;
                    spawnData.spawnPoint = Random.Range(0, 3);
                    break;
                case 14:
                    pluser = 1;
                    spawnData.spawnPoint = 1;
                    break;
            }
            
            if(spawnData.phaseNumber == 1)
            {
                phase1Num += pluser;
            }
            else if(spawnData.phaseNumber == 2)
            {
                phase2Num += pluser;
            }
            else if(spawnData.phaseNumber==3)
            {
                phase3Num += pluser;
            }

            spawnList.Add(spawnData);
        }

        curStageTotalNum = phase1Num + phase2Num + phase3Num;

        //텍스트 파일 닫기
        stringReader.Close();

        //#첫번째 스폰 딜레이 적용
        nextSpawnDelay = spawnList[0].delay;
    }

    void SpawnEnemy()
    {

        int enemyIndex = 0;
        switch (spawnList[spawnIndex].enemyType)
        {
            //enemy 등록
            case 0:
                enemyIndex = 0;
                break;
            case 1:
                enemyIndex = 1;
                break;
            case 2:
                enemyIndex = 2;
                break;
            case 3:
                enemyIndex = 3;
                break;
            case 4:
                enemyIndex = 4;
                break;
            case 5:
                enemyIndex = 5;
                break;
            case 6:
                enemyIndex = 6;
                break;
            case 7:
                enemyIndex = 7;
                break;
            case 8:
                enemyIndex = 8;
                break;
            case 9:
                enemyIndex = 9;
                break;
            case 10:
                enemyIndex = 10;
                break;
            case 11:
                enemyIndex = 11;
                break;
            case 12:
                enemyIndex = 12;
                break;
            case 13:
                enemyIndex = 13;
                break;
            case 14:
                enemyIndex = 14;
                break;
        }

        int enemyPoint = spawnList[spawnIndex].spawnPoint;
        GameObject enemy = Instantiate(enemyObjs[enemyIndex], spawnPoints[enemyPoint].position, spawnPoints[enemyPoint].rotation);

        //#.Respawn Index Increse
        spawnIndex++;

        if (spawnIndex == spawnList.Count)
        {
            spawnEnd = true;
            return;
        }

        //#.다음 리스폰 딜레이 갱신
        nextSpawnDelay = spawnList[spawnIndex].delay;
    }
}
