using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Purchasing;

public class IAPManager : MonoBehaviour
{
    //zams
    private string zam300 = "com.donghyeonkang.earthdefensecorps.zam300";

    //zams
    private string zam1000 = "com.donghyeonkang.earthdefensecorps.zam1000";

    //zams
    private string zam3000 = "com.donghyeonkang.earthdefensecorps.zam3000";

    //zams
    private string zam10000 = "com.donghyeonkang.earthdefensecorps.zam10000";

    //SkipAds
    private string removeAds = "com.donghyeonkang.earthdefensecorps.removeads";

    public void OnPurchaseComplete(Product product)
    {
        if(product.definition.id == zam300)
        {
            //reward your players
            Debug.Log("You've Gained 300 Zam");
            MainMenuController.Instance.BuyZam(300);
        }

        if (product.definition.id == zam1000)
        {
            //reward your players
            Debug.Log("You've Gained 1000 Zam");
            MainMenuController.Instance.BuyZam(1000);
        }

        if (product.definition.id == zam3000)
        {
            //reward your players
            Debug.Log("You've Gained 3000 Zam");
            MainMenuController.Instance.BuyZam(3000);
        }

        if (product.definition.id == zam10000)
        {
            //reward your players
            Debug.Log("You've Gained 10000 Zam");
            MainMenuController.Instance.BuyZam(10000);
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
