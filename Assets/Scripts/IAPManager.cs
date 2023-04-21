using UnityEngine;
using UnityEngine.Purchasing;
using UnityEngine.Purchasing.Extension;
using TMPro;

public class IAPManager : MonoBehaviour
{
    //zams
    private string zam300 = "com.devurim.earthdefensecorps.zam300";

    //zams
    private string zam1000 = "com.devurim.earthdefensecorps.zam1000";

    //zams
    private string zam3000 = "com.devurim.earthdefensecorps.zam3000";

    //zams
    private string zam10000 = "com.devurim.earthdefensecorps.zam10000";

    //SkipAds
    private string removeAds = "com.devurim.earthdefensecorps.removeads";

    public TextMeshProUGUI[] IAPTexts;

    public void OnPurchaseComplete(Product product)
    {
        if (product.definition.id == zam300)
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

    public void OnPurchaseFailed(Product product, PurchaseFailureDescription failureDescription)
    {
        Debug.Log($"{product.definition.id} failed bacause {failureDescription}");
    }

    public void OnProductFetched(Product product)
    {
        Debug.Log($"{product.definition.id} {product.metadata}");

        if (product.definition.id == zam300)
        {
            IAPTexts[0].text = $"{product.metadata.GetGoogleProductMetadata().localizedPrice} {product.metadata.GetGoogleProductMetadata().isoCurrencyCode}";
        }
        else if (product.definition.id == zam1000)
        {
            IAPTexts[1].text = $"{product.metadata.GetGoogleProductMetadata().localizedPrice} {product.metadata.GetGoogleProductMetadata().isoCurrencyCode}";
        }
        else if (product.definition.id == zam3000)
        {
            IAPTexts[2].text = $"{product.metadata.GetGoogleProductMetadata().localizedPrice} {product.metadata.GetGoogleProductMetadata().isoCurrencyCode}";
        }
        else if (product.definition.id == zam10000)
        {
            IAPTexts[3].text = $"{product.metadata.GetGoogleProductMetadata().localizedPrice} {product.metadata.GetGoogleProductMetadata().isoCurrencyCode}";
        }
    }
}