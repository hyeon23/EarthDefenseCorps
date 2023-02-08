using System.Collections.Generic;
using System.Collections;
using UnityEngine;

public class SpawnManager : MonoBehaviour
{
    [SerializeField]
    private Transform[] spawnPoints;
    [SerializeField]
    private GameObject[] enemies;
    [SerializeField]
    public GameObject[] EnemyGroup;

    private static SpawnManager instance = null;

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

        StartCoroutine(SpawnEnemies(0.5f));
    }
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

    public void Spawn()
    {
        Instantiate(enemies[0], spawnPoints[0].position, Quaternion.identity);
        Instantiate(enemies[1], spawnPoints[1].position, Quaternion.identity);
        Instantiate(enemies[2], spawnPoints[2].position, Quaternion.identity);
    }

    public IEnumerator SpawnEnemies(float timer)
    {
        while(true)
        {
            Spawn();

            yield return new WaitForSeconds(timer);
        }
    }
}
