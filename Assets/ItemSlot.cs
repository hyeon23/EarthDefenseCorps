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

    public void ItemSlotClicked()
    {
        MainMenuController.Instance.EquipInfoUpdate(item);
    }
}
