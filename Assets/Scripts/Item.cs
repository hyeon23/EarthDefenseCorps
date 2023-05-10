using System;
using UnityEngine;
public enum ItemPart { None, Weapon, Gloves, Shoes, Sheld, Helmat, Armor, Count }
public enum ItemGrade { None, Normal, Rare, Epic, Unique, Legendary, Count }

public class Item
{
    public int itemID;//������ ���� ��ȣ
    public ItemPart itemPart;//������ Ÿ��
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
                this.itemDrawingWeight = 100;
                break;
            case ItemGrade.Rare:
                this.itemPrice = 1000;
                this.itemMaxLevel = 20;
                this.itemUpgradeCost = 2500;
                this.itemDrawingWeight = 60;
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

    public Item(int _itemID, ItemPart _itemPart, ItemGrade _itemGrade, bool _isEquipped, string _itemName, string _itemDesc, int _itemATK, float _itemCriticalRate, float _itemCriticalDamage, float _itemHP, float _itemSheldGager, float _itemSpecialMoveGager)
    {
        this.itemID = _itemID;
        this.itemPart = _itemPart;
        this.itemGrade = _itemGrade;
        this.isEquipped = _isEquipped;
        this.itemName = _itemName;
        this.itemDesc = _itemDesc;
        this.itemImage = DataManager.Instance.IDtoSprite(_itemID);
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
                this.itemDrawingWeight = 100;
                break;
            case ItemGrade.Rare:
                this.itemPrice = 1000;
                this.itemMaxLevel = 20;
                this.itemUpgradeCost = 2500;
                this.itemDrawingWeight = 50;
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
