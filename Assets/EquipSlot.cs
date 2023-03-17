using UnityEngine;
using UnityEngine.UI;

public class EquipSlot : MonoBehaviour
{
    public enum EquipSlotPart { Weapon, Gloves, Shoes, Sheld, Helmat, Armor }

    public Image ItemIcon;
    public Image gradeBackground;
    public EquipSlotPart equipSlotPart;

    private Item item;

    private void Update()
    {
        switch (equipSlotPart)
        {
            case EquipSlotPart.Weapon:
                if (DataManager.Instance.curEquippedWeapon != null)
                {
                   gameObject.GetComponent<Button>().interactable = true;
                    item = DataManager.Instance.curEquippedWeapon;
                    Color tempColor = ItemIcon.color;
                    tempColor.a = 1;
                    ItemIcon.color = tempColor;
                    ItemIcon.sprite = item.itemImage;
                    gradeBackground.color = MainMenuController.Instance.SetGradeColorBackground(item);
                }
                else
                {
                    item = null;
                    Color tempColor = ItemIcon.color;
                    tempColor.a = 0;
                    ItemIcon.color = tempColor;
                    gameObject.GetComponent<Button>().interactable = false;
                    gradeBackground.color = Color.white;
                }
                break;
            case EquipSlotPart.Gloves:
                if (DataManager.Instance.curEquippedGloves != null)
                {
                    gameObject.GetComponent<Button>().interactable = true;
                    item = DataManager.Instance.curEquippedGloves;
                    Color tempColor = ItemIcon.color;
                    tempColor.a = 1;
                    ItemIcon.color = tempColor;
                    ItemIcon.sprite = item.itemImage;
                    gradeBackground.color = MainMenuController.Instance.SetGradeColorBackground(item);
                }
                else
                {
                    item = null;
                    Color tempColor = ItemIcon.color;
                    tempColor.a = 0;
                    ItemIcon.color = tempColor;
                    gameObject.GetComponent<Button>().interactable = false;
                    gradeBackground.color = Color.white;
                }
                break;
            case EquipSlotPart.Shoes:
                if (DataManager.Instance.curEquippedShoes != null)
                {
                    gameObject.GetComponent<Button>().interactable = true;
                    item = DataManager.Instance.curEquippedShoes;
                    Color tempColor = ItemIcon.color;
                    tempColor.a = 1;
                    ItemIcon.color = tempColor;
                    ItemIcon.sprite = item.itemImage;
                    gradeBackground.color = MainMenuController.Instance.SetGradeColorBackground(item);
                }
                else
                {
                    item = null;
                    Color tempColor = ItemIcon.color;
                    tempColor.a = 0;
                    ItemIcon.color = tempColor;
                    gameObject.GetComponent<Button>().interactable = false;
                    gradeBackground.color = Color.white;
                }
                break;
            case EquipSlotPart.Sheld:
                if (DataManager.Instance.curEquippedSheld != null)
                {
                    gameObject.GetComponent<Button>().interactable = true;
                    item = DataManager.Instance.curEquippedSheld;
                    Color tempColor = ItemIcon.color;
                    tempColor.a = 1;
                    ItemIcon.color = tempColor;
                    ItemIcon.sprite = item.itemImage;
                    gradeBackground.color = MainMenuController.Instance.SetGradeColorBackground(item);
                }
                else
                {
                    item = null;
                    Color tempColor = ItemIcon.color;
                    tempColor.a = 0;
                    ItemIcon.color = tempColor;
                    gameObject.GetComponent<Button>().interactable = false;
                    gradeBackground.color = Color.white;
                }
                break;
            case EquipSlotPart.Helmat:
                if (DataManager.Instance.curEquippedHelmat != null)
                {
                    gameObject.GetComponent<Button>().interactable = true;
                    item = DataManager.Instance.curEquippedHelmat;
                    Color tempColor = ItemIcon.color;
                    tempColor.a = 1;
                    ItemIcon.color = tempColor;
                    ItemIcon.sprite = item.itemImage;
                    gradeBackground.color = MainMenuController.Instance.SetGradeColorBackground(item);
                }
                else
                {
                    item = null;
                    Color tempColor = ItemIcon.color;
                    tempColor.a = 0;
                    ItemIcon.color = tempColor;
                    gameObject.GetComponent<Button>().interactable = false;
                    gradeBackground.color = Color.white;
                }
                break;
            case EquipSlotPart.Armor:
                if (DataManager.Instance.curEquippedArmor != null)
                {
                    gameObject.GetComponent<Button>().interactable = true;
                    item = DataManager.Instance.curEquippedArmor;
                    Color tempColor = ItemIcon.color;
                    tempColor.a = 1;
                    ItemIcon.color = tempColor;
                    ItemIcon.sprite = item.itemImage;
                    gradeBackground.color = MainMenuController.Instance.SetGradeColorBackground(item);
                }
                else
                {
                    item = null;
                    Color tempColor = ItemIcon.color;
                    tempColor.a = 0;
                    ItemIcon.color = tempColor;
                    gradeBackground.color = new Color(1, 1, 1, 1);
                    gameObject.GetComponent<Button>().interactable = false;
                    gradeBackground.color = Color.white;
                }
                break;
        }
    }

    public void ItemSlotClicked()
    {
        MainMenuController.Instance.EquipInfoUpdate(item);
    }
}
