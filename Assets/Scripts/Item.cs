using System;
using UnityEngine;

[System.Serializable]
public class Item
{
    public Item(ItemPart _itemPart, ItemGrade _itemGrade, bool _isEquipped, int _itemID, string _itemName, string _itemDesc, Sprite _itemImage, int _itemATK, int _itemLevel, float _itemHP, float _itemSheldGager, float _itemSpecialMoveGager, float _itemCriticalRate, float _itemCriticalDamage, int _itemPrice, int _itemUpgradeCost, float _itemProbability)

    {
        itemPart = _itemPart;
        itemGrade = _itemGrade;
        isEquipped = _isEquipped;
        itemID = _itemID;
        itemName = _itemName;
        itemDesc = _itemDesc;
        itemImage = _itemImage;
        itemATK = _itemATK;
        itemLevel = _itemLevel;
        itemHP = _itemHP;
        itemSheldGager = _itemSheldGager;
        itemSpecialMoveGager = _itemSpecialMoveGager;
        itemCriticalRate = _itemCriticalRate;
        itemCriticalDamage = _itemCriticalDamage;
        itemPrice = _itemPrice;
        itemUpgradeCost = _itemUpgradeCost;
        itemProbability = _itemProbability;
    }

    public enum ItemGrade { Normal, Rare, Epic, Unique, Legendary, Count }
    public enum ItemPart { Weapon, Gloves, Shoes, Sheld, Armor, Helmat, Count }

    public ItemPart itemPart;//아이템 타입
    public ItemGrade itemGrade;//아이템 등급

    public bool isEquipped;//장비 착용 상태
    public int itemID;//아이템 고유 번호

    //아이템 등급에 따른 색상       { Gray, Blue, Purple, Yellow, Red } 
    //아이템 등급에 따른 최대레벨   { 10, 20, 30, 40, 50 } 

    public string itemName;//아이템 이름
    public string itemDesc;//아이템 설명
    public Sprite itemImage;//아이템 스프라이트
    

    //스텟관련
    public int itemATK;//공격력
    public int itemLevel;//현재레벨
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
