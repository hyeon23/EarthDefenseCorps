using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Purchasing;

public class IAPManager : MonoBehaviour
{
    //golds
    private string gold10000 = "com.donghyeonkang.earthdefensecorps.gold10000";

    private string gold50000 = "com.donghyeonkang.earthdefensecorps.gold50000";

    //zams
    private string zam100 = "com.donghyeonkang.earthdefensecorps.zam100";

    private string removeAds = "com.donghyeonkang.earthdefensecorps.removeads";

    public void OnPurchaseComplete(Product product)
    {
        if(product.definition.id == gold10000)
        {
            //reward your players
            Debug.Log("You've Gained 10000 gold");
        }

        if (product.definition.id == gold50000)
        {
            //reward your players
            Debug.Log("You've Gained 50000 gold");
        }

        if (product.definition.id == zam100)
        {
            //reward your players
            Debug.Log("You've Gained 100 zam");
        }

        if (product.definition.id == removeAds)
        {
            //reward your players
            Debug.Log("All ads are removed!");
        }
    }

    public void OnPurchaseFailed(Product product, PurchaseFailureReason failureReason)
    {
        Debug.Log($"{product.definition.id} failed bacause {failureReason}");
    }
}
