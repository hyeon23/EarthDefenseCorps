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

    public ItemPart itemPart;//������ Ÿ��
    public ItemGrade itemGrade;//������ ���

    public bool isEquipped;//��� ���� ����
    public int itemID;//������ ���� ��ȣ

    //������ ��޿� ���� ����       { Gray, Blue, Purple, Yellow, Red } 
    //������ ��޿� ���� �ִ뷹��   { 10, 20, 30, 40, 50 } 

    public string itemName;//������ �̸�
    public string itemDesc;//������ ����
    public Sprite itemImage;//������ ��������Ʈ
    

    //���ݰ���
    public int itemATK;//���ݷ�
    public int itemLevel;//���緹��
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
