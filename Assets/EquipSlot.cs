using UnityEngine;
using UnityEngine.UI;

public class EquipSlot : MonoBehaviour
{
    public enum EquipSlotPart { Weapon, Gloves, Shoes, Sheld, Helmat, Armor }
    public Item item;
    public Image ItemIcon;
    public Image gradeBackground;
    public EquipSlotPart equipSlotPart;

    private void Update()
    {
        switch (equipSlotPart)
        {
            case EquipSlotPart.Weapon:
                if (DataManager.Instance.curEquippedWeapon != null)
                {
                    item = DataManager.Instance.curEquippedWeapon;
                    ItemIcon.sprite = item.itemImage;
                    gradeBackground.color = MainMenuController.Instance.SetGradeColorBackground(item);
                }
                else
                {
                    item = null;
                    ItemIcon.sprite = null;
                    gradeBackground.color = MainMenuController.Instance.SetGradeColorBackground(item);
                }
                break;
            case EquipSlotPart.Gloves:
                if (DataManager.Instance.curEquippedGloves != null)
                {
                    item = DataManager.Instance.curEquippedGloves;
                    ItemIcon.sprite = item.itemImage;
                    gradeBackground.color = MainMenuController.Instance.SetGradeColorBackground(item);
                }
                else
                {
                    item = null;
                    ItemIcon.sprite = null;
                    gradeBackground.color = MainMenuController.Instance.SetGradeColorBackground(item);
                }
                break;
            case EquipSlotPart.Shoes:
                if (DataManager.Instance.curEquippedShoes != null)
                {
                    item = DataManager.Instance.curEquippedShoes;
                    ItemIcon.sprite = item.itemImage;
                    gradeBackground.color = MainMenuController.Instance.SetGradeColorBackground(item);
                }
                else
                {
                    item = null;
                    ItemIcon.sprite = null;
                    gradeBackground.color = MainMenuController.Instance.SetGradeColorBackground(item);
                }
                break;
            case EquipSlotPart.Sheld:
                if (DataManager.Instance.curEquippedSheld != null)
                {
                    item = DataManager.Instance.curEquippedSheld;
                    ItemIcon.sprite = item.itemImage;
                    gradeBackground.color = MainMenuController.Instance.SetGradeColorBackground(item);
                }
                else
                {
                    item = null;
                    ItemIcon.sprite = null;
                    gradeBackground.color = MainMenuController.Instance.SetGradeColorBackground(item);
                }
                break;
            case EquipSlotPart.Helmat:
                if (DataManager.Instance.curEquippedHelmat != null)
                {
                    item = DataManager.Instance.curEquippedHelmat;
                    ItemIcon.sprite = item.itemImage;
                    gradeBackground.color = MainMenuController.Instance.SetGradeColorBackground(item);
                }
                else
                {
                    item = null;
                    ItemIcon.sprite = null;
                    gradeBackground.color = MainMenuController.Instance.SetGradeColorBackground(item);
                }
                break;
            case EquipSlotPart.Armor:
                if (DataManager.Instance.curEquippedArmor != null)
                {
                    item = DataManager.Instance.curEquippedArmor;
                    ItemIcon.sprite = item.itemImage;
                    gradeBackground.color = MainMenuController.Instance.SetGradeColorBackground(item);
                }
                else
                {
                    item = null;
                    ItemIcon.sprite = null;
                    gradeBackground.color = MainMenuController.Instance.SetGradeColorBackground(item);
                }
                break;
        }
    }

    public void ItemSlotClicked()
    {
        MainMenuController.Instance.EquipInfoUpdate(item);
    }
}
