using UnityEngine;
using System.Collections;
using System.Collections.Generic;
using Unity.VisualScripting;
public class OneToOneBlock : Block
{
    public bool isCrushedPlayer = false;
    public bool isOverlappedPlayer = false;

    private void OnTriggerEnter2D(Collider2D collision)
    {
        if (collision.tag == "PlayerTrigger")
        {
            switch (enemyType)
            {
                case EnemyType.Block1X1H:
                    Destroy(gameObject);
                    break;
                case EnemyType.Block1X1:
                case EnemyType.Block1X3:
                case EnemyType.Block1X3M:
                    isOverlappedPlayer = true;
                    break;
            }
        }
        else if(collision.tag == "Floor")
        {
            switch (enemyType)
            {
                case EnemyType.Block1X1H:
                    OnDead();
                    break;
                case EnemyType.Block1X1:
                    if (!isOverlappedPlayer)
                    {
                        //±ò·ÁÀÖÁö ¾ÊÀº »óÅÂ¿¡¼­ ºí·Ï ÆÄ±«½Ã
                        OnDead();
                    }
                    else if (isOverlappedPlayer)
                    {
                        //ÇÃ·¹ÀÌ¾î°¡ ±ò¾Æ¹¶°³Áü
                        isCrushedPlayer = true;
                        PlayerController.Instance.isCrushed = true;
                    }
                    break;
                case EnemyType.Block1X3:
                case EnemyType.Block1X3M:
                    if (isOverlappedPlayer)
                    {
                        //ÇÃ·¹ÀÌ¾î°¡ ±ò¾Æ¹¶°³Áü
                        isCrushedPlayer = true;
                        PlayerController.Instance.isCrushed = true;
                    }
                    break;
            }
        }
        else if (collision.tag == "Sheld")
        {
            switch (enemyType)
            {
                case EnemyType.Block1X1H:
                    Destroy(gameObject);
                    break;
                case EnemyType.Block1X1:
                case EnemyType.Block1X3:
                case EnemyType.Block1X3M:
                    parentRigid.velocity = Vector2.zero;
                    parentRigid.AddForce(new Vector2(0, isCrushedPlayer ? 25 : 12.5f), ForceMode2D.Impulse);
                    break;
            }
        }
        else if (collision.tag == "Weapon")
        {
            switch (enemyType)
            {
                case EnemyType.Block1X1H:
                    if (!parentGameObject.activeSelf) return;

                    parentRigid.AddForce(new Vector2(0, isCrushedPlayer ? 20 : 1), ForceMode2D.Impulse);
                    StartCoroutine(OnHit(DataManager.Instance.playerData.playerATK, collision.transform.position));
                    break;
                case EnemyType.Block1X1:
                case EnemyType.Block1X3:
                case EnemyType.Block1X3M:
                    if (!parentGameObject.activeSelf) return;

                    parentRigid.AddForce(new Vector2(0, isCrushedPlayer ? 20 : 1), ForceMode2D.Impulse);
                    StartCoroutine(OnHit(DataManager.Instance.playerData.playerATK, collision.transform.position));
                    break;
            }
        }
        else if(collision.tag == "Special")
        {
            switch (enemyType)
            {
                case EnemyType.Block1X1H:
                    if (!parentGameObject.activeSelf) return;

                    if (PlayerController.Instance.specialTargetEnemyCollider != gameObject.GetComponent<Collider2D>())
                        return;

                    parentRigid.velocity = Vector3.zero;
                    parentRigid.AddForce(new Vector2(0, 1.2f), ForceMode2D.Impulse);
                    StartCoroutine(OnHit(DataManager.Instance.playerData.playerATK, collision.transform.position));
                    break;
                case EnemyType.Block1X1:
                case EnemyType.Block1X3:
                case EnemyType.Block1X3M:
                    if (!parentGameObject.activeSelf) return;

                    if (PlayerController.Instance.specialTargetEnemyCollider != gameObject.GetComponent<Collider2D>())
                        return;

                    parentRigid.velocity = Vector3.zero;
                    parentRigid.AddForce(new Vector2(0, 1.2f), ForceMode2D.Impulse);
                    StartCoroutine(OnHit(DataManager.Instance.playerData.playerATK, collision.transform.position));
                    break;
            }
        }
        //if (collision.tag == "SpecialBulletTrigger")
        //{
        //    switch (enemyType)
        //    {
        //        case EnemyType.Block1X1H:
        //            StartCoroutine(OnHit(1, collision.transform.position));
        //            break;
        //        case EnemyType.Block1X1:
        //        case EnemyType.Block1X3:
        //        case EnemyType.Block1X3M:
        //            parentRigid.velocity = Vector2.zero;
        //            parentRigid.AddForce(new Vector2(0, 2f), ForceMode2D.Impulse);
        //            StartCoroutine(OnHit(1, collision.transform.position));
        //            break;
        //    }
        //}
    }

    //private void OnTriggerStay2D(Collider2D collision)
    //{
    //    if (collision.tag == "Special")
    //    {
    //        switch (enemyType)
    //        {
    //            case EnemyType.Block1X1H:
    //                if (!parentGameObject.activeSelf) return;

    //                StartCoroutine(OnHit(DataManager.Instance.playerData.playerATK, collision.transform.position));
    //                break;
    //            case EnemyType.Block1X1:
    //            case EnemyType.Block1X3:
    //            case EnemyType.Block1X3M:
    //                if (!parentGameObject.activeSelf) return;

    //                //parentRigid.AddForce(new Vector2(0, 0.5f), ForceMode2D.Impulse);
    //                StartCoroutine(OnHit(DataManager.Instance.playerData.playerATK, collision.transform.position));
    //                break;
    //        }
    //    }
    //}

    private void OnTriggerExit2D(Collider2D collision)
    {
        if (collision.tag == "PlayerTrigger")
        {
            switch (enemyType)
            {
                case EnemyType.Block1X1H:

                    break;
                case EnemyType.Block1X1:
                case EnemyType.Block1X3:
                case EnemyType.Block1X3M:
                    isOverlappedPlayer = false;
                    break;
            }
        }
        else if (collision.tag == "Floor")
        {
            switch (enemyType)
            {
                case EnemyType.Block1X1H:

                    break;
                case EnemyType.Block1X1:
                case EnemyType.Block1X3:
                case EnemyType.Block1X3M:
                    isCrushedPlayer = false;
                    PlayerController.Instance.isCrushed = false;
                    break;
            }
        }
        else if (collision.tag == "Special")
        {
            switch (enemyType)
            {
                case EnemyType.Block1X1H:
                case EnemyType.Block1X1:
                case EnemyType.Block1X3:
                case EnemyType.Block1X3M:
                    if (!parentGameObject.activeSelf) return;
                    parentRigid.velocity = Vector3.zero;
                    break;
            }
        }
    }

    public IEnumerator OnHit(int damage, Vector2 onHitPosition)
    {
        GameManager.Instance.curHitEnemy = gameObject;

        bool isCritical = CriticalCheck(DataManager.Instance.playerData.PlayerCriticalRate);
        if (isCritical) 
        { 
            damage = Mathf.RoundToInt(damage * DataManager.Instance.playerData.PlayerCriticalDamage / 100); 
        }
        curHp -= damage;

        InGameTextViewer.Instance.SetEnemyImage(true, curHp, maxHp, enemyType);
        InGameTextViewer.Instance.SpawnHUDText(damage.ToString(), isCritical ? Color.red : Color.white, onHitPosition);

        if (curHp <= 0)
        {
            OnDead(true);
        }
        else
        {
            gameObject.GetComponent<SpriteRenderer>().color = Color.red;
            yield return new WaitForSeconds(0.1f);
            gameObject.GetComponent<SpriteRenderer>().color = Color.white;
        }
    }

    public void OnDead(bool isAttacked = false)
    {

        if (GameManager.Instance.curHitEnemy == gameObject)
        {
            InGameTextViewer.Instance.enemyGageShown = false;
        }
        SoundManager.Instance.SFXPlay(SoundManager.SFX.BlockDead);

        if (isAttacked)
        {
            //Get Gold
            InGameTextViewer.Instance.PlusGetGold(gold);

            switch (enemyName)
            {
                //0: B_Bronze, 1: B_Silver, 2: B_Gold, 3: B_Zam
                //4: MoaiGrayOne, 5: MoaiGrayTwo, 6: MoaiGrayThree
                //7: MoaiRedOne, 8: MoaiRedTwo, 9: MoaiRedThree
                //10: MoaiBlueOne, 11: MoaiBlueTwo, 12: MoaiBlueThree
                //13; Cube
                //14: S_Bronze, 15: S_Silver, 16: S_Gold, 17: S_Zam
                //18: S_TotemOne, 19: S_TotemTwo, 20: S_TotemThree

                //Block 1X3 -> transform.position
                //Block 1X3M -> transform.parent.position

                case "MoaiBlue":
                    EffectManager.Instance.SpawnEffect(new int[] { 0, 1, 2, 3, 10, 11, 12 }, transform.position);
                    break;
                case "MoaiRed":
                    EffectManager.Instance.SpawnEffect(new int[] { 0, 1, 2, 3, 7, 8, 9 }, transform.position);
                    break;
                case "MoaiGray":
                    EffectManager.Instance.SpawnEffect(new int[] { 0, 1, 2, 3, 4, 5, 6 }, transform.position);
                    break;
                case "StoneTower":
                    EffectManager.Instance.SpawnEffect(new int[] { 0, 1, 2, 3, 4, 5, 6 }, transform.position);
                    break;
                case "Totem1":
                case "Totem2":
                case "Totem3":
                case "Totem4":
                case "Totem5":
                case "Totem6":
                    EffectManager.Instance.SpawnEffect(new int[] { 14, 15, 16, 17, 18, 19, 20 }, transform.position);
                    break;
                case "Cube":
                    EffectManager.Instance.SpawnEffect(new int[] { 0, 1, 2, 3, 13 }, transform.position);
                    break;
                case "ApartmentOrange":
                    EffectManager.Instance.SpawnEffect(new int[] { 0, 1, 2, 3, 25, 26, 27 }, transform.position);
                    break;
                case "ApartmentYellow":
                    EffectManager.Instance.SpawnEffect(new int[] { 0, 1, 2, 3, 28, 29, 30 }, transform.position);
                    break;
                case "ApartmentGray":
                    EffectManager.Instance.SpawnEffect(new int[] { 0, 1, 2, 3, 4, 5, 6 }, transform.position);
                    break;
                default:
                    break;
            }
        }
        else
        {
            switch (enemyName)
            {
                //0: B_Bronze, 1: B_Silver, 2: B_Gold, 3: B_Zam
                //4: MoaiGrayOne, 5: MoaiGrayTwo, 6: MoaiGrayThree
                //7: MoaiRedOne, 8: MoaiRedTwo, 9: MoaiRedThree
                //10: MoaiBlueOne, 11: MoaiBlueTwo, 12: MoaiBlueThree
                //13; Cube

                //14: S_Bronze, 15: S_Silver, 16: S_Gold, 17: S_Zam
                //18: S_TotemOne, 19: S_TotemTwo, 20: S_TotemThree

                //Block 1X3 -> transform.position
                //Block 1X3M -> transform.parent.position

                case "MoaiBlue":
                    EffectManager.Instance.SpawnEffect(new int[] { 10, 11, 12 }, transform.position);
                    break;
                case "MoaiRed":
                    EffectManager.Instance.SpawnEffect(new int[] { 7, 8, 9 }, transform.position);
                    break;
                case "MoaiGray":
                case "StoneTower":
                    EffectManager.Instance.SpawnEffect(new int[] { 4, 5, 6 }, transform.position);
                    break;
                case "Totem1":
                case "Totem2":
                case "Totem3":
                case "Totem4":
                case "Totem5":
                case "Totem6":
                    EffectManager.Instance.SpawnEffect(new int[] { 18, 19, 20 }, transform.position);
                    break;
                case "Cube":
                    EffectManager.Instance.SpawnEffect(new int[] { 13 }, transform.position);
                    break;
                default:
                    break;
            }
        }

        //Destroy
        if (ancestorGameObject.transform.childCount == 1)
        {
            if (ancestorGameObject.activeSelf)
            {
                ancestorGameObject.SetActive(false);
            }
            
            Destroy(ancestorGameObject, 1);
        }
        else
        {
            if (parentGameObject.activeSelf)
            {
                parentGameObject.SetActive(false);
            }

            Destroy(parentGameObject, 1);
        }
    }
}
