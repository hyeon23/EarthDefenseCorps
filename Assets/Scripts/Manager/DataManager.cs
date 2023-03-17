using System.Collections.Generic;
using UnityEngine;

public class DataManager : MonoBehaviour
{
    private static DataManager instance = null;

    public Item curEquippedWeapon;
    public Item curEquippedGloves;
    public Item curEquippedShoes;
    public Item curEquippedSheld;
    public Item curEquippedHelmat;
    public Item curEquippedArmor;

    public List<Item> items = new List<Item>();

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
}
