using UnityEngine;

public class Item
{
    public enum ItemType { Weapon, Gloves, Shoes, Sheld, Armor, Helmat, Count }
    public enum ItemGrade { Normal, Rare, Epic, Unique, Legendary, Count }

    public int ID;//아이템 고유 번호
    public string Name;//아이템 이름
    public string Desc;//아이템 설명
    public ItemType Type;//아이템 타입
    public ItemGrade Grade;//아이템 등급

    public int Price;

    public Sprite Sprite;//

    //공격력 = 100
    //방어력 = 
    //생명력 = 
    //쉴드 게이지 총량 플러스 = 
    //필살기 게이지 총량 플러스 = 
    //크리티컬 확률 = 
    //크리티컬 데미지 = 
    //현재레벨 = 
    //최대레벨은 Grade로 정해짐
    //강화비용 = 

}
