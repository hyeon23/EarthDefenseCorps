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

    public ItemPart itemPart;//������ Ÿ��
    public ItemGrade itemGrade;//������ ���

    public bool isEquipped;//��� ���� ����
    public int itemID;//������ ���� ��ȣ

    public string itemName;//������ �̸�
    public string itemDesc;//������ ����
    public Sprite itemImage;//������ ��������Ʈ
    

    //���ݰ���
    public int itemATK;//���ݷ�
    public int itemCurLevel;//���緹��
    public int itemMaxLevel;//���緹��
    public float itemHP;//�����
    public float itemSheldGager;//���� ������ �ѷ� �÷���
    public float itemSpecialMoveGager;//�ʻ�� ������ �ѷ� �÷���
    public float itemCriticalRate;//ũ��Ƽ�� Ȯ��
    public float itemCriticalDamage;//ũ��Ƽ�� ������

    //������
    public int itemPrice;//������ ����, �ǸŰ��� = (int)(������ ���� * 0.3)
    public int itemUpgradeCost;//��ȭ��� = ��ȭ��� = ������ ��� X ���� ������ ����

    //�̱����
    public float itemProbability;//������ �̱� Ȯ��(����ġ)
}
