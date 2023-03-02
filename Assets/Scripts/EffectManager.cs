using UnityEngine;

public class EffectManager : MonoBehaviour
{
    private static EffectManager instance = null;

    //B: Bronze, Silver, Gold, Zam, OneBlock, TowBlock, ThreeBlock //7
    //S: Bronze, Silver, Gold, Zam, OneBlock, TowBlock, ThreeBlock //7

    [SerializeField]
    private GameObject[] Effects;

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

    }

    public static EffectManager Instance
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

    public void SpawnEffect(int[] goNums, Vector2 spawnPos)
    {
        GameObject effectObject;

        foreach (int num in goNums)
        {
            effectObject = intToEffectType(num);

            if (effectObject == null) return;

            GameObject clone = Instantiate(effectObject, spawnPos, Quaternion.identity, gameObject.transform);
            Destroy(clone, 2f);//Effect Ending ½Ã°£°ú ¸ÂÃã
        }
    }

    private Vector3 offset;

    public void SpawnSwordEffect(GameObject gameObject, int order)
    {
        GameObject effectObject;

        
        if(order % 2 == 0)
        {
            effectObject = intToEffectType(23);
            offset = new Vector3(-0.5f, 0.25f, 0);
        }
        else
        {
            effectObject = intToEffectType(24);
            offset = new Vector3(0.5f, 0.5f, 0);
        }

        if (effectObject == null) return;

        GameObject clone = Instantiate(effectObject, gameObject.transform.position + offset, Quaternion.identity, gameObject.transform);
        Destroy(clone, 1f);
    }

    public GameObject intToEffectType(int num)
    {
        switch (num)
        {
            case 0:
                return Effects[0];
            case 1:
                return Effects[1];
            case 2:
                return Effects[2];
            case 3:
                return Effects[3];
            case 4:
                return Effects[4];
            case 5:
                return Effects[5];
            case 6:
                return Effects[6];
            case 7:
                return Effects[7];
            case 8:
                return Effects[8];
            case 9:
                return Effects[9];
            case 10:
                return Effects[10];
            case 11:
                return Effects[11];
            case 12:
                return Effects[12];
            case 13:
                return Effects[13];
            case 14:
                return Effects[14];
            case 15:
                return Effects[15];
            case 16:
                return Effects[16];
            case 17:
                return Effects[17];
            case 18:
                return Effects[18];
            case 19:
                return Effects[19];
            case 20:
                return Effects[20];
            case 21:
                return Effects[21];
            case 22:
                return Effects[22];
            case 23:
                return Effects[23];
            case 24:
                return Effects[24];
            default:
                return null;
        }
    }
}
