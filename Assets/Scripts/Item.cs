using System;
using UnityEngine;

[System.Serializable]
public class Item
{
    public enum ItemGrade { None, Normal, Rare, Epic, Unique, Legendary, Count }
    public enum ItemPart { None, Weapon, Gloves, Shoes, Sheld, Helmat, Armor, Count }

    public ItemPart itemPart;//아이템 타입
    public ItemGrade itemGrade;//아이템 등급

    public bool isEquipped;//장비 착용 상태
    public int itemID;//아이템 고유 번호

    public string itemName;//아이템 이름
    public string itemDesc;//아이템 설명
    public Sprite itemImage;//아이템 스프라이트
    

    //스텟관련
    public int itemATK;//공격력
    public float itemCriticalRate;//크리티컬 확률
    public float itemCriticalDamage;//크리티컬 데미지

    public float itemHP;//생명력
    public float itemSheldGager;//쉴드 게이지 총량 플러스
    public float itemSpecialMoveGager;//필살기 게이지 총량 플러스

    [HideInInspector]
    public int itemCurLevel;//현재레벨
    [HideInInspector]
    public int itemMaxLevel;//현재레벨

    //비용관련
    [HideInInspector]
    public int itemPrice;//아이템 가격, 판매가격 = (int)(아이템 가격 * 0.3)
    [HideInInspector]
    public int itemUpgradeCost;//강화비용 = 강화비용 = 아이템 등급 X 현재 아이템 레벨

    //뽑기관련
    public int itemDrawingWeight;//아이템 뽑기 확률(가중치)

    public Item(Item item)

    {
        this.itemPart = item.itemPart;
        this.itemGrade = item.itemGrade;
        this.isEquipped = false;
        this.itemID = item.itemID;
        this.itemName = item.itemName;
        this.itemDesc = item.itemDesc;
        this.itemImage = item.itemImage;
        this.itemATK = item.itemATK;
        this.itemHP = item.itemHP;
        this.itemSheldGager = item.itemSheldGager;
        this.itemSpecialMoveGager = item.itemSpecialMoveGager;
        this.itemCriticalRate = item.itemCriticalRate;
        this.itemCriticalDamage = item.itemCriticalDamage;

        this.itemCurLevel = 1;

        switch (itemGrade)
        {
            case ItemGrade.Normal:
                this.itemPrice = 250;
                this.itemMaxLevel = 10;
                this.itemUpgradeCost = 1000;
                this.itemDrawingWeight = 40;
                break;
            case ItemGrade.Rare:
                this.itemPrice = 1000;
                this.itemMaxLevel = 20;
                this.itemUpgradeCost = 2500;
                this.itemDrawingWeight = 35;
                break;
            case ItemGrade.Epic:
                this.itemPrice = 4000;
                this.itemMaxLevel = 30;
                this.itemUpgradeCost = 5000;
                this.itemDrawingWeight = 20;
                break;
            case ItemGrade.Unique:
                this.itemPrice = 16000;
                this.itemMaxLevel = 40;
                this.itemUpgradeCost = 15000;
                this.itemDrawingWeight = 10;
                break;
            case ItemGrade.Legendary:
                this.itemPrice = 32000;
                this.itemMaxLevel = 50;
                this.itemUpgradeCost = 50000;
                this.itemDrawingWeight = 5;
                break;
            case ItemGrade.Count:
                break;
        }
    }

    public Item(ItemPart _itemPart, ItemGrade _itemGrade, bool _isEquipped, int _itemID, string _itemName, string _itemDesc, Sprite _itemImage, int _itemATK, float _itemHP, float _itemSheldGager, float _itemSpecialMoveGager, float _itemCriticalRate, float _itemCriticalDamage)

    {
        this.itemPart = _itemPart;
        this.itemGrade = _itemGrade;
        this.isEquipped = _isEquipped;
        this.itemID = _itemID;
        this.itemName = _itemName;
        this.itemDesc = _itemDesc;
        this.itemImage = _itemImage;
        this.itemATK = _itemATK;
        this.itemHP = _itemHP;
        this.itemSheldGager = _itemSheldGager;
        this.itemSpecialMoveGager = _itemSpecialMoveGager;
        this.itemCriticalRate = _itemCriticalRate;
        this.itemCriticalDamage = _itemCriticalDamage;

        this.itemCurLevel = 1;

        switch (itemGrade)
        {
            case ItemGrade.Normal:
                this.itemPrice = 250;
                this.itemMaxLevel = 10;
                this.itemUpgradeCost = 1000;
                this.itemDrawingWeight = 40;
                break;
            case ItemGrade.Rare:
                this.itemPrice = 1000;
                this.itemMaxLevel = 20;
                this.itemUpgradeCost = 2500;
                this.itemDrawingWeight = 35;
                break;
            case ItemGrade.Epic:
                this.itemPrice = 4000;
                this.itemMaxLevel = 30;
                this.itemUpgradeCost = 5000;
                this.itemDrawingWeight = 20;
                break;
            case ItemGrade.Unique:
                this.itemPrice = 16000;
                this.itemMaxLevel = 40;
                this.itemUpgradeCost = 10000;
                this.itemDrawingWeight = 10;
                break;
            case ItemGrade.Legendary:
                this.itemPrice = 32000;
                this.itemMaxLevel = 50;
                this.itemUpgradeCost = 50000;
                this.itemDrawingWeight = 5;
                break;
            case ItemGrade.Count:
                break;
        }
    }
}
