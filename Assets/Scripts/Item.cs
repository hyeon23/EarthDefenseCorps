using UnityEngine;

public class Item
{
    public enum ItemType { Weapon, Gloves, Shoes, Sheld, Armor, Helmat, Count }
    public enum ItemGrade { Normal, Rare, Epic, Unique, Legendary, Count }

    public int ID;//������ ���� ��ȣ
    public string Name;//������ �̸�
    public string Desc;//������ ����
    public ItemType Type;//������ Ÿ��
    public ItemGrade Grade;//������ ���

    public int Price;

    public Sprite Sprite;//

    //���ݷ� = 100
    //���� = 
    //����� = 
    //���� ������ �ѷ� �÷��� = 
    //�ʻ�� ������ �ѷ� �÷��� = 
    //ũ��Ƽ�� Ȯ�� = 
    //ũ��Ƽ�� ������ = 
    //���緹�� = 
    //�ִ뷹���� Grade�� ������
    //��ȭ��� = 

}
