using Newtonsoft.Json.Linq;
using System.Text;
using UnityEngine;

public class MoneyUnitString : MonoBehaviour
{
    //Korean MoneyUnitySymbol
    //0�� 4���� ����� ȿ��
    //10000 = ��
    //100000000 = ��
    //1000000000000 = ��
    //10000000000000000 = ��
    //100000000000000000000 = ��
    //static string[] koreanMoneyUnitSymbol = new string[] { "", "��", "��", "��", "��", "��" };

    //American MoneyUnitySymbol
    //0�� 3���� ����� ȿ��
    //1000 = K
    //1000000 = M
    //1000000000 = B
    //1000000000000 = T
    static string[] americanMoneyUnitSymbol = new string[] { "", "K", "M", "B", "T" };

    // long ���� double�� �ִ� ���� Ŀ�� double  ���
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
                // ���ڸ��� 0�� �ƴҶ�
                if (digits != 0)
                {
                    sb.Insert(0, $"{digits}{americanMoneyUnitSymbol[unitID]}");
                }
            }
            else
            {
                // ���̳ʽ��� ���ڿ� ����
                sb.Insert(0, $"{splits[i - 1]}");
            }
            unitID++;
        }
        return sb.ToString();
    }

    //1000 ���� , ����ֱ�
    public static string GetThousandCommaText(double value)
    {
        if (value == 0)
            return "0";

        return string.Format("{0:#,###}", value);
    }
}
