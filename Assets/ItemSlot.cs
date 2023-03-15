using System.Collections;
using System.Collections.Generic;
using System.Windows.Markup;
using UnityEngine;

public class ItemSlot : MonoBehaviour
{
    private Item _item;//해당 값이 저장되어야 함

    public Item item
    {
        get { return _item; }
        set
        {
            _item = value;
            if(_item != null)
            {
                _item.itemID = value.itemID;
                _item.itemName= value.itemName;
                _item.itemDesc= value.itemDesc;
                _item.itemImage= value.itemImage;
                _item.itemType= value.itemType;
                _item.itemGrade= value.itemGrade;

                _item.itemATK= value.itemATK;
                _item.itemLevel= value.itemLevel;
                _item.itemHP= value.itemHP;
                _item.itemSheldGager= value.itemSheldGager;
                _item.itemSpecialMoveGager= value.itemSpecialMoveGager;
                _item.itemCriticalRate = value.itemCriticalRate;
                _item.itemCriticalDamage= value.itemCriticalDamage;

                _item.itemPrice= value.itemPrice;
            }
        }
    }

    //Random Item 할당하는 방법
    //가차시스템 시 적용

    public Color SetGradeColorBackground(Item _item)
    {
        Color retColor = Color.white;

        switch (_item.itemGrade)
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
}
