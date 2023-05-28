using TMPro;
using UnityEngine;
using UnityEngine.UI;

public class EquipSlot : MonoBehaviour
{
    public enum EquipSlotPart { Weapon, Gloves, Shoes, Sheld, Helmat, Armor }

    public Image ItemIcon;
    public Image gradeBackground;
    public EquipSlotPart equipSlotPart;
    public TextMeshProUGUI curLevelText;

    public Item item;

    private void Update()
    {
        EquipItemLoad(equipSlotPart);

        EquippedItemPresentation(item);
    }

    public void ItemSlotClicked()
    {
        SoundManager.Instance.SFXPlay(SoundManager.SFX.Button);
        MainMenuController.Instance.EquipInfoUpdate(item);
    }

    public void EquippedItemPresentation(Item _item)
    {
        if (_item != null)
        {
            gameObject.GetComponent<Button>().interactable = true;
            Color tempColor = ItemIcon.color;
            tempColor.a = 1;

            ItemIcon.color = tempColor;
            ItemIcon.sprite = _item.itemImage;

            curLevelText.gameObject.SetActive(true);
            curLevelText.text = $"Lv.{_item.itemCurLevel}";
            gradeBackground.color = MainMenuController.Instance.SetGradeColorBackground(_item);
        }
        else
        {
            Color tempColor = ItemIcon.color;
            tempColor.a = 0;
            ItemIcon.color = tempColor;

            curLevelText.gameObject.SetActive(false);

            gameObject.GetComponent<Button>().interactable = false;

            gradeBackground.color = Color.white;
        }
    }

    public void EquipItemLoad(EquipSlotPart equipSlotPart)
    {
        switch (equipSlotPart)
        {
            case EquipSlotPart.Weapon:
                item = DataManager.Instance.playerData.CurEquippedWeapon;
                break;
            case EquipSlotPart.Gloves:
                item = DataManager.Instance.playerData.CurEquippedGloves;
                break;
            case EquipSlotPart.Shoes:
                item = DataManager.Instance.playerData.CurEquippedShoes;
                break;
            case EquipSlotPart.Sheld:
                item = DataManager.Instance.playerData.CurEquippedSheld;
                break;
            case EquipSlotPart.Helmat:
                item = DataManager.Instance.playerData.CurEquippedHelmat;
                break;
            case EquipSlotPart.Armor:
                item = DataManager.Instance.playerData.CurEquippedArmor;
                break;
        }
    }
}