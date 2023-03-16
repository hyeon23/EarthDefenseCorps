using System;
using UnityEngine;
using UnityEngine.UI;

public class ItemSlot : MonoBehaviour
{
    public Item item;
    public Image ItemIcon;
    public Image gradeBackground;

    //Random Item �Ҵ��ϴ� ���
    //�����ý��� �� ����

    public Color SetGradeColorBackground()
    {
        Color retColor = Color.white;

        switch (item.itemGrade)
        {
            case Item.ItemGrade.Normal:
                retColor = Color.gray;
                break;
            case Item.ItemGrade.Rare:
                retColor = Color.blue;
                break;
            case Item.ItemGrade.Epic:
                retColor = new Color(125, 0, 255, 255);
                break;
            case Item.ItemGrade.Unique:
                retColor = Color.yellow;
                break;
            case Item.ItemGrade.Legendary:
                retColor = Color.red;
                break;
        }

        return retColor;
    }

    public Item ItemSlotClicked()
    {
        Debug.Log($"{item.itemID}\n{item.itemName}\n{item.itemLevel}");//
        return item;
    }
}
