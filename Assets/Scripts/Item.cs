using System;
using UnityEngine;
public enum ItemPart { NONE, WEAPON, GLOVES, SHOES, SHIELD, HELMET, ARMOR, COUNT }
public enum ItemGrade { NONE, NORMAL, RARE, EPIC, UNIQUE, LEGENDARY, COUNT }

[Serializable]//[★]
public class Item
{
    public int ID;//아이템 고유 번호
    public int itemID;//아이템 종류별 고유 번호

    //[JsonConverter(typeof(StringEnumConverter))]
    public ItemPart itemPart;//아이템 타입

    //[JsonConverter(typeof(StringEnumConverter))]
    public ItemGrade itemGrade;//아이템 등급

    public bool isEquipped;//장비 착용 상태
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

    public int itemCurLevel;//현재레벨
    public int itemMaxLevel;//현재레벨

    //비용관련
    public int itemPrice;//아이템 가격, 판매가격 = (int)(아이템 가격 * 0.3)
    public int itemUpgradeCost;//강화비용 = 강화비용 = 아이템 등급 X 현재 아이템 레벨

    //뽑기관련
    public int itemDrawingWeight;//아이템 뽑기 확률(가중치)

    public Item()
    {

    }

    public Item(Item item)

    {
        //DB 아이템 아이디는 통신을 통해 받아와서 설정[플레이어 데이터 로드 시, 사용]
        ID = item.ID;
        itemPart = item.itemPart;
        itemGrade = item.itemGrade;
        isEquipped = false;
        itemID = item.itemID;
        itemName = item.itemName;
        itemDesc = item.itemDesc;
        itemImage = item.itemImage;
        itemATK = item.itemATK;
        itemHP = item.itemHP;
        itemSheldGager = item.itemSheldGager;
        itemSpecialMoveGager = item.itemSpecialMoveGager;
        itemCriticalRate = item.itemCriticalRate;
        itemCriticalDamage = item.itemCriticalDamage;

        itemCurLevel = 1;

        switch (itemGrade)
        {
            case ItemGrade.NORMAL:
                itemPrice = 250;
                itemMaxLevel = 10;
                itemUpgradeCost = 1000;
                itemDrawingWeight = 100;
                break;
            case ItemGrade.RARE:
                itemPrice = 1000;
                itemMaxLevel = 20;
                itemUpgradeCost = 2500;
                itemDrawingWeight = 60;
                break;
            case ItemGrade.EPIC:
                itemPrice = 4000;
                itemMaxLevel = 30;
                itemUpgradeCost = 5000;
                itemDrawingWeight = 20;
                break;
            case ItemGrade.UNIQUE:
                itemPrice = 16000;
                itemMaxLevel = 40;
                itemUpgradeCost = 15000;
                itemDrawingWeight = 10;
                break;
            case ItemGrade.LEGENDARY:
                itemPrice = 32000;
                itemMaxLevel = 50;
                itemUpgradeCost = 50000;
                itemDrawingWeight = 5;
                break;
            case ItemGrade.COUNT:
                break;
        }
    }

    public Item(int _ID, int _itemID, ItemPart _itemPart, ItemGrade _itemGrade, bool _isEquipped, string _itemName, string _itemDesc, int _itemATK, float _itemCriticalRate, float _itemCriticalDamage, float _itemHP, float _itemSheldGager, float _itemSpecialMoveGager)
    {
        ID = _ID;
        itemID = _itemID;
        itemPart = _itemPart;
        itemGrade = _itemGrade;
        isEquipped = _isEquipped;
        itemName = _itemName;
        itemDesc = _itemDesc;
        itemImage = DataManager.Instance.IDtoSprite(_itemID);
        itemATK = _itemATK;
        itemHP = _itemHP;
        itemSheldGager = _itemSheldGager;
        itemSpecialMoveGager = _itemSpecialMoveGager;
        itemCriticalRate = _itemCriticalRate;
        itemCriticalDamage = _itemCriticalDamage;

        itemCurLevel = 1;

        switch (itemGrade)
        {
            case ItemGrade.NORMAL:
                itemPrice = 250;
                itemMaxLevel = 10;
                itemUpgradeCost = 1000;
                itemDrawingWeight = 100;
                break;
            case ItemGrade.RARE:
                itemPrice = 1000;
                itemMaxLevel = 20;
                itemUpgradeCost = 2500;
                itemDrawingWeight = 50;
                break;
            case ItemGrade.EPIC:
                itemPrice = 4000;
                itemMaxLevel = 30;
                itemUpgradeCost = 5000;
                itemDrawingWeight = 20;
                break;
            case ItemGrade.UNIQUE:
                itemPrice = 16000;
                itemMaxLevel = 40;
                itemUpgradeCost = 10000;
                itemDrawingWeight = 10;
                break;
            case ItemGrade.LEGENDARY:
                itemPrice = 32000;
                itemMaxLevel = 50;
                itemUpgradeCost = 50000;
                itemDrawingWeight = 5;
                break;
            case ItemGrade.COUNT:
                break;
        }
    }
}
