using System.Collections.Generic;
using UnityEngine;

public class DataManager : MonoBehaviour
{
    private static DataManager instance = null;

    public int playerATK;
    public float playerHP;
    public float playerShledGege;
    public float playerSpecialMoveGege;
    public float playerCriticalRate;
    public float playerCriticalDamage;

    public int playerZam;
    public int playerGold;

    public Item curEquippedWeapon;
    public Item curEquippedGloves;
    public Item curEquippedShoes;
    public Item curEquippedSheld;
    public Item curEquippedHelmat;
    public Item curEquippedArmor;

    public List<Item> items = new List<Item>();

    public static DataManager Instance
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

    void Awake()
    {
        if (instance == null)
        {
            instance = this;
            DontDestroyOnLoad(gameObject);
        }
        else
        {
            Destroy(gameObject);
        }

        curEquippedWeapon = null;
        curEquippedGloves = null;
        curEquippedShoes = null;
        curEquippedSheld = null;
        curEquippedHelmat = null;
        curEquippedArmor = null;
}


}
