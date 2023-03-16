using System;
using UnityEngine;

[Serializable]
[CreateAssetMenu(fileName = "New Item", menuName = "New Item/Item")]
public class Item: ScriptableObject
{
    //public bool isEquiped = false;

    public enum ItemPart { Weapon, Gloves, Shoes, Sheld, Armor, Helmat, Count }

    //������ ��޿� ���� ����       { Gray, Blue, Purple, Yellow, Red } 
    //������ ��޿� ���� �ִ뷹��   { 10, 20, 30, 40, 50 } 
    public enum ItemGrade { Normal, Rare, Epic, Unique, Legendary, Count }

    public bool isEquipped;//��� ���� ����

    public int itemID;//������ ���� ��ȣ
    public string itemName;//������ �̸�
    public string itemDesc;//������ ����
    public Sprite itemImage;//������ ��������Ʈ
    public ItemPart itemType;//������ Ÿ��
    public ItemGrade itemGrade;//������ ���

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
    public int upgradeCost;
    //��ȭ��� = ��ȭ��� = ������ ��� X ���� ������ ����

    //�̱����
    public float itemProbability;//������ �̱� Ȯ��(����ġ)
}
