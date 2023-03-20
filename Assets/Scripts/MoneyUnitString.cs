using Newtonsoft.Json.Linq;
using System.Text;
using UnityEngine;

public class MoneyUnitString : MonoBehaviour
{
    //Korean MoneyUnitySymbol
    //0이 4개씩 생기는 효과
    //10000 = 만
    //100000000 = 억
    //1000000000000 = 조
    //10000000000000000 = 경
    //100000000000000000000 = 해
    //static string[] koreanMoneyUnitSymbol = new string[] { "", "만", "억", "조", "경", "해" };

    //American MoneyUnitySymbol
    //0이 3개씩 생기는 효과
    //1000 = K
    //1000000 = M
    //1000000000 = B
    //1000000000000 = T
    static string[] americanMoneyUnitSymbol = new string[] { "", "K", "M", "B", "T" };

    // long 보다 double이 최대 값이 커서 double  사용
    public static string ToString(double value)
    {
        if (value == 0)
            return "0";

        int unitID = 0;

        //Korean
        //string number = string.Format("{0:# #### #### #### #### ####}", value).TrimStart();

        //American
        string number = string.Format("{0:# ### ### ### ###}", value).TrimStart();
        string[] splits = number.Split(' ');

        StringBuilder sb = new StringBuilder();

        for (int i = splits.Length; i > 0; i--)
        {
            int digits = 0;
            if (int.TryParse(splits[i - 1], out digits))
            {
                // 앞자리가 0이 아닐때
                if (digits != 0)
                {
                    sb.Insert(0, $"{digits}{americanMoneyUnitSymbol[unitID]}");
                }
            }
            else
            {
                // 마이너스나 숫자외 문자
                sb.Insert(0, $"{splits[i - 1]}");
            }
            unitID++;
        }
        return sb.ToString();
    }

    //1000 단위 , 찍어주기
    public static string GetThousandCommaText(double value)
    {
        if (value == 0)
            return "0";

        return string.Format("{0:#,###}", value);
    }
}
