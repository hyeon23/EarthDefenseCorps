using System.Collections;
using System.Collections.Generic;
using System.Linq;
using System.Linq.Expressions;
using UnityEngine;

public class Inventory : MonoBehaviour
{
    public List<GameObject> slotGameObject;
    public List<ItemSlot> slots;
    public List<Item> items;

    public Transform slotParent;
    public GameObject slotPrefab;

    private void OnValidate()
    {
        slots = slotParent.GetComponentsInChildren<ItemSlot>().ToList<ItemSlot>();
    }

    private void Awake()
    {
        initSlot();
    }

    public void initSlot()
    {
        int i = 0;
        for (; i < items.Count && i < slots.Count; i++)
        {
            slots[i].GetComponent<ItemSlot>().item = items[i];
        }
        for (; i < slots.Count; i++)
        {
            slots[i].GetComponent<ItemSlot>().item = null;
        }
    }

    public void AddItem(Item _item) {
        items.Add(_item);
        GameObject cloneSlot = Instantiate(slotPrefab, slotParent);
        cloneSlot.GetComponent<ItemSlot>().item = _item;
        cloneSlot.GetComponent<ItemSlot>().ItemIcon.sprite = _item.itemImage;
        cloneSlot.GetComponent<ItemSlot>().gradeBackground.color = cloneSlot.GetComponent<ItemSlot>().SetGradeColorBackground();
        slots.Add(cloneSlot.GetComponent<ItemSlot>());
        slotGameObject.Add(cloneSlot);
    }

    public void EquipItem(Item _item)
    {

    }

    public void unequipItem(Item _item)
    {

    }

    public void UpgradeItem(Item _item)
    {
        //if PlayerGold >= curUpgradeCost
        // PlayerGold - curUpgradeCost
        // 
        _item.itemLevel++;
    }

    public void SellItem(Item _item)
    {
        
    }


}
