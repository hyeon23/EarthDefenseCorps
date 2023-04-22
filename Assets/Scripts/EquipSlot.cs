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

    public Item item = null;

    private void Update()
    {
        if (item != null || item.itemPart != ItemPart.None)
        {
            curLevelText.gameObject.SetActive(true);
        }
        else
        {
            curLevelText.gameObject.SetActive(false);
        }

        switch (equipSlotPart)
        {
            case EquipSlotPart.Weapon:
                item = DataManager.Instance.playerData.CurEquippedWeapon;

                if (item != null || item.itemPart != ItemPart.None)
                {
                    gameObject.GetComponent<Button>().interactable = true;
                    Color tempColor = ItemIcon.color;
                    tempColor.a = 1;

                    ItemIcon.color = tempColor;
                    ItemIcon.sprite = item.itemImage;
                    curLevelText.text = $"Lv.{item.itemCurLevel}";
                    gradeBackground.color = MainMenuController.Instance.SetGradeColorBackground(item);
                }
                else
                {
                    curLevelText.text = "";
                    Color tempColor = ItemIcon.color;
                    tempColor.a = 0;
                    ItemIcon.color = tempColor;
                    gameObject.GetComponent<Button>().interactable = false;
                    gradeBackground.color = Color.white;
                }
                break;
            case EquipSlotPart.Gloves:
                item = DataManager.Instance.playerData.CurEquippedGloves;

                if (item != null || item.itemPart != ItemPart.None)
                {
                    gameObject.GetComponent<Button>().interactable = true;
                    Color tempColor = ItemIcon.color;
                    tempColor.a = 1;
                    ItemIcon.color = tempColor;
                    ItemIcon.sprite = item.itemImage;
                    curLevelText.text = $"Lv.{item.itemCurLevel}";
                    gradeBackground.color = MainMenuController.Instance.SetGradeColorBackground(item);
                }
                else
                {
                    curLevelText.text = "";
                    Color tempColor = ItemIcon.color;
                    tempColor.a = 0;
                    ItemIcon.color = tempColor;
                    gameObject.GetComponent<Button>().interactable = false;
                    gradeBackground.color = Color.white;
                }
                break;
            case EquipSlotPart.Shoes:
                item = DataManager.Instance.playerData.CurEquippedShoes;

                if (item != null || item.itemPart != ItemPart.None)
                {
                    gameObject.GetComponent<Button>().interactable = true;
                    Color tempColor = ItemIcon.color;
                    tempColor.a = 1;
                    ItemIcon.color = tempColor;
                    ItemIcon.sprite = item.itemImage;
                    curLevelText.text = $"Lv.{item.itemCurLevel}";
                    gradeBackground.color = MainMenuController.Instance.SetGradeColorBackground(item);
                }
                else
                {
                    item = null;
                    curLevelText.text = "";
                    Color tempColor = ItemIcon.color;
                    tempColor.a = 0;
                    ItemIcon.color = tempColor;
                    gameObject.GetComponent<Button>().interactable = false;
                    gradeBackground.color = Color.white;
                }
                break;
            case EquipSlotPart.Sheld:
                item = DataManager.Instance.playerData.CurEquippedSheld;

                if (item != null || item.itemPart != ItemPart.None)
                {
                    gameObject.GetComponent<Button>().interactable = true;
                    Color tempColor = ItemIcon.color;
                    tempColor.a = 1;
                    ItemIcon.color = tempColor;
                    ItemIcon.sprite = item.itemImage;
                    curLevelText.text = $"Lv.{item.itemCurLevel}";
                    gradeBackground.color = MainMenuController.Instance.SetGradeColorBackground(item);
                }
                else
                {
                    item = null;
                    curLevelText.text = "";
                    Color tempColor = ItemIcon.color;
                    tempColor.a = 0;
                    ItemIcon.color = tempColor;
                    gameObject.GetComponent<Button>().interactable = false;
                    gradeBackground.color = Color.white;
                }
                break;
            case EquipSlotPart.Helmat:
                item = DataManager.Instance.playerData.CurEquippedHelmat;

                if (item != null || item.itemPart != ItemPart.None)
                {
                    gameObject.GetComponent<Button>().interactable = true;
                    Color tempColor = ItemIcon.color;
                    tempColor.a = 1;
                    ItemIcon.color = tempColor;
                    ItemIcon.sprite = item.itemImage;
                    curLevelText.text = $"Lv.{item.itemCurLevel}";
                    gradeBackground.color = MainMenuController.Instance.SetGradeColorBackground(item);
                }
                else
                {
                    item = null;
                    curLevelText.text = "";
                    Color tempColor = ItemIcon.color;
                    tempColor.a = 0;
                    ItemIcon.color = tempColor;
                    gameObject.GetComponent<Button>().interactable = false;
                    gradeBackground.color = Color.white;
                }
                break;
            case EquipSlotPart.Armor:
                item = DataManager.Instance.playerData.CurEquippedArmor;

                if (item != null || item.itemPart != ItemPart.None)
                {
                    gameObject.GetComponent<Button>().interactable = true;
                    Color tempColor = ItemIcon.color;
                    tempColor.a = 1;
                    ItemIcon.color = tempColor;
                    ItemIcon.sprite = item.itemImage;
                    curLevelText.text = $"Lv.{item.itemCurLevel}";
                    gradeBackground.color = MainMenuController.Instance.SetGradeColorBackground(item);
                }
                else
                {
                    item = null;
                    curLevelText.text = "";
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
        SoundManager.Instance.SFXPlay(SoundManager.SFX.Button);
        MainMenuController.Instance.EquipInfoUpdate(item);
    }
}