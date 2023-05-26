using System;
using UnityEngine;
public enum ItemPart { NONE, WEAPON, GLOVES, SHOES, SHIELD, HELMET, ARMOR, COUNT }
public enum ItemGrade { NONE, NORMAL, RARE, EPIC, UNIQUE, LEGENDARY, COUNT }

[Serializable]//[��]
public class Item
{
    public int ID;//������ ���� ��ȣ
    public int itemID;//������ ������ ���� ��ȣ

    //[JsonConverter(typeof(StringEnumConverter))]
    public ItemPart itemPart;//������ Ÿ��

    //[JsonConverter(typeof(StringEnumConverter))]
    public ItemGrade itemGrade;//������ ���

    public bool isEquipped;//��� ���� ����
    public string itemName;//������ �̸�
    public string itemDesc;//������ ����

    public Sprite itemImage;//������ ��������Ʈ

    //���ݰ���
    public int itemATK;//���ݷ�
    public float itemCriticalRate;//ũ��Ƽ�� Ȯ��
    public float itemCriticalDamage;//ũ��Ƽ�� ������

    public float itemHP;//�����
    public float itemSheldGager;//���� ������ �ѷ� �÷���
    public float itemSpecialMoveGager;//�ʻ�� ������ �ѷ� �÷���

    public int itemCurLevel;//���緹��
    public int itemMaxLevel;//���緹��

    //������
    public int itemPrice;//������ ����, �ǸŰ��� = (int)(������ ���� * 0.3)
    public int itemUpgradeCost;//��ȭ��� = ��ȭ��� = ������ ��� X ���� ������ ����

    //�̱����
    public int itemDrawingWeight;//������ �̱� Ȯ��(����ġ)

    public Item()
    {

    }

    public Item(Item item)

    {
        //DB ������ ���̵�� ����� ���� �޾ƿͼ� ����[�÷��̾� ������ �ε� ��, ���]
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
