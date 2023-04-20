public class NotateNumber
{
	public static string Transform(long originNumber)
	{
		// 1,000 = 1K, 1,000,000 = 1M
		string[] symbol = new string[7]{ "K", "M", "G", "T", "P", "E", "Z" };

		// �Ű������� �޾ƿ� ���ڸ� ���ڿ��� ��ȯ
		string result = originNumber.ToString();

		// ����+�ɺ��� �ִ� 4�ڸ������� ǥ���ϴµ� ���ڰ� 4�ڸ� ���϶�� �ɺ� ���� ���
		if ( result.Length < 4 )
		{
			return result;
		}

		for ( int i = 0; i < symbol.Length; ++ i )
		{
			if ( 4 + 3 * i <= result.Length && result.Length < 4 + 3 * (i + 1) )
			{
				// 3���� ������ ������ ������ ��(n)�� 0, 1, 2
				int n = result.Length % 3;
				// ������ ��(n)�� 0�̸� 3���� ����
				n = n == 0 ? 3 : n;

                // ������ �� ����(n) = ���ڸ� ����
                // ���ڸ� ǥ���� ����� �� �ٷ� ���� ���� �Ҽ��� ���� ���ڷ� ǥ��


                //Ver#1: �Ϲ� ����
                //result = $"{result.Substring(0, n)}.{result.Substring(n, 1)}";

                //Ver#2: , �߰� ����
                result = $"{MoneyUnitString.GetThousandCommaText(int.Parse(result.Substring(0, n)))}.{result.Substring(n, 1)}";
				// ��� ��ȣ �߰�
				result += symbol[i];
				break;
			}
		}

		return result;
	}
}


/// int �� �� �ִ� ���� 2.14G����
/// long �� �� �ִ� ���� 1E����