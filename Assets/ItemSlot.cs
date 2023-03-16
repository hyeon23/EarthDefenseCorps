using System;
using UnityEngine;
using UnityEngine.UI;

public class ItemSlot : MonoBehaviour
{
    public Item item;
    public Image ItemIcon;
    public Image gradeBackground;

    //Random Item 할당하는 방법
    //가차시스템 시 적용

    public void ItemSlotClicked()
    {
        MainMenuController.Instance.EquipInfoUpdate(item);
    }
}
