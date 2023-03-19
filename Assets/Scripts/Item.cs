using System;
using UnityEngine;

[System.Serializable]
public class Item
{
    public Item(ItemPart _itemPart, ItemGrade _itemGrade, bool _isEquipped, int _itemID, string _itemName, string _itemDesc, Sprite _itemImage, int _itemATK, float _itemHP, float _itemSheldGager, float _itemSpecialMoveGager, float _itemCriticalRate, float _itemCriticalDamage, int _itemPrice, int _itemUpgradeCost, float _itemProbability)

    {
        itemPart = _itemPart;
        itemGrade = _itemGrade;
        isEquipped = _isEquipped;
        itemID = _itemID;
        itemName = _itemName;
        itemDesc = _itemDesc;
        itemImage = _itemImage;
        itemATK = _itemATK;
        itemHP = _itemHP;
        itemSheldGager = _itemSheldGager;
        itemSpecialMoveGager = _itemSpecialMoveGager;
        itemCriticalRate = _itemCriticalRate;
        itemCriticalDamage = _itemCriticalDamage;
        itemProbability = _itemProbability;

        itemCurLevel = 1;

        switch (itemGrade)
        {
            case ItemGrade.Normal:
                itemPrice = 250;
                itemMaxLevel = 10;
                itemUpgradeCost = 1000;
                break;
            case ItemGrade.Rare:
                itemPrice = 1000;
                itemMaxLevel = 20;
                itemUpgradeCost = 2500;
                break;
            case ItemGrade.Epic:
                itemPrice = 4000;
                itemMaxLevel = 30;
                itemUpgradeCost = 5000;
                break;
            case ItemGrade.Unique:
                itemPrice = 16000;
                itemMaxLevel = 40;
                itemUpgradeCost = 10000;
                break;
            case ItemGrade.Legendary:
                itemPrice = 32000;
                itemMaxLevel = 50;
                itemUpgradeCost = 50000;
                break;
            case ItemGrade.Count:
                break;
        }
    }

    public enum ItemGrade { Normal, Rare, Epic, Unique, Legendary, Count }
    public enum ItemPart { Weapon, Gloves, Shoes, Sheld, Armor, Helmat, Count }

    public ItemPart itemPart;//아이템 타입
    public ItemGrade itemGrade;//아이템 등급

    public bool isEquipped;//장비 착용 상태
    public int itemID;//아이템 고유 번호

    public string itemName;//아이템 이름
    public string itemDesc;//아이템 설명
    public Sprite itemImage;//아이템 스프라이트
    

    //스텟관련
    public int itemATK;//공격력
    public int itemCurLevel;//현재레벨
    public int itemMaxLevel;//현재레벨
    public float itemHP;//생명력
    public float itemSheldGager;//쉴드 게이지 총량 플러스
    public float itemSpecialMoveGager;//필살기 게이지 총량 플러스
    public float itemCriticalRate;//크리티컬 확률
    public float itemCriticalDamage;//크리티컬 데미지

    //비용관련
    public int itemPrice;//아이템 가격, 판매가격 = (int)(아이템 가격 * 0.3)
    public int itemUpgradeCost;//강화비용 = 강화비용 = 아이템 등급 X 현재 아이템 레벨

    //뽑기관련
    public float itemProbability;//아이템 뽑기 확률(가중치)
}
