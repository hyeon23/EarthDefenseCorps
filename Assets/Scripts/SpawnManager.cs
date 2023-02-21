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

        //���� ����� ���ÿ� �������� ����
        StageStart(stage);
    }

    public void StageStart(int stage)
    {
        //#.Fade In
        //fadeAnime.SetTrigger("In");

        //#.Stage UI Load
        //stageAnime.SetTrigger("On");
        //stageAnime.GetComponent<TMP_Text>().text = "Stage " + stage + "\nStart";
        //clearAnime.GetComponent<TMP_Text>().text = "Stage " + stage + "\nClear";

        //#.Enemy Spawn File Read
        ReadSpawnFile(stage);
    }

    private void Update()
    {
        curSpawnDelay += Time.deltaTime;
        if (curSpawnDelay >= nextSpawnDelay && !spawnEnd)
        {
            //GameManager.Instance.curLiveEnemyCount == 0
            switch (spawnList[spawnIndex].phaseMileStone)
            {
                case 1:
                case 2:
                case 3:
                    //�������� ���� ���� ����
                    if (GameManager.Instance.curLiveEnemyCount != 0) return;
                    
                    Debug.Log("������" + spawnList[spawnIndex].phaseMileStone + "����");

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
        //#UI Score Update
        //Player playerLogic = player.GetComponent<Player>();
        //scoreText.text = string.Format("{0:n0}", playerLogic.score); //�ڸ��� ������ ����
    }

    void ReadSpawnFile(int stage)
    {
        //#1. Initialization
        spawnList.Clear();
        spawnIndex = 0;
        spawnEnd = false;

        //#2. Respawn File Reading
        //-using System.IO;
        //���� �� ���� �о����
        TextAsset textFile = Resources.Load("Stage" + stage.ToString()) as TextAsset;//Load�� ������ TextAsset File�� �ƴϸ� Nulló�� ������ ó��
        //���� �� ���ڿ� ������ �б� Ŭ����
        StringReader stringReader = new StringReader(textFile.text);
        while (stringReader != null)
        {
            string line = stringReader.ReadLine();
            if (line == null)
                break;
            //#������ ������ ����
            Spawn spawnData = new Spawn();
            string[] lineDatas = line.Split(',');
            spawnData.delay = float.Parse(lineDatas[0]);
            spawnData.enemyType = int.Parse(lineDatas[1]);
            spawnData.spawnPoint = int.Parse(lineDatas[2]);
            spawnData.phaseMileStone = int.Parse(lineDatas[3]);

            if(spawnData.phaseMileStone == 0)
            {
                curStageTotalNum++;
            }

            spawnList.Add(spawnData);
        }

        //�ؽ�Ʈ ���� �ݱ�
        stringReader.Close();

        //#ù��° ���� ������ ����
        nextSpawnDelay = spawnList[0].delay;
    }

    void SpawnEnemy()
    {

        int enemyIndex = 0;
        switch (spawnList[spawnIndex].enemyType)
        {
            //enemy ���
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
        }

        int enemyPoint = spawnList[spawnIndex].spawnPoint;
        GameObject enemy = Instantiate(enemyObjs[enemyIndex], spawnPoints[enemyPoint].position, spawnPoints[enemyPoint].rotation);

        GameManager.Instance.curLiveEnemyCount++;

        //[����]
        //Rigidbody2D rigid = enemy.GetComponent<Rigidbody2D>();
        //Enemy enemylogic = enemy.GetComponent<Enemy>();
        //enemylogic.player = player;
        //enemylogic.gameManager = this;
        //enemylogic.objectManager = objectManager;

        //if (enemyPoint == 5 || enemyPoint == 6)
        //{
        //    rigid.velocity = new Vector2(enemylogic.speed * (-1), -1);
        //    enemy.transform.Rotate(Vector3.back * 75);
        //}
        //else if (enemyPoint == 7 || enemyPoint == 8)
        //{
        //    rigid.velocity = new Vector2(enemylogic.speed, -1);
        //    enemy.transform.Rotate(Vector3.forward * 75);
        //}
        //else
        //{
        //    rigid.velocity = new Vector2(0, enemylogic.speed * (-1));
        //}

        //#.Respawn Index Increse
        spawnIndex++;

        if (spawnIndex == spawnList.Count)
        {
            spawnEnd = true;
            return;
        }

        //#.���� ������ ������ ����
        nextSpawnDelay = spawnList[spawnIndex].delay;
    }

    public void GameOver()
    {
        //gameOverSet.SetActive(true);
    }
    public void GameRetry()
    {
        //SceneManager.LoadScene(0);
    }
}
