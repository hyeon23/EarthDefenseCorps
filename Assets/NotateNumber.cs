public class NotateNumber
{
	public static string Transform(long originNumber)
	{
		// 1,000 = 1K, 1,000,000 = 1M
		string[] symbol = new string[7]{ "K", "M", "G", "T", "P", "E", "Z" };

		// 매개변수로 받아온 숫자를 문자열로 변환
		string result = originNumber.ToString();

		// 숫자+심볼은 최대 4자리까지만 표기하는데 숫자가 4자리 이하라면 심볼 없이 출력
		if ( result.Length < 4 )
		{
			return result;
		}

		for ( int i = 0; i < symbol.Length; ++ i )
		{
			if ( 4 + 3 * i <= result.Length && result.Length < 4 + 3 * (i + 1) )
			{
				// 3으로 나눴기 때문에 나머지 값(n)은 0, 1, 2
				int n = result.Length % 3;
				// 나머지 값(n)이 0이면 3으로 설정
				n = n == 0 ? 3 : n;

                // 나머지 값 개수(n) = 앞자리 개수
                // 앞자리 표현에 사용한 값 바로 뒤의 값을 소수점 이하 숫자로 표현


                //Ver#1: 일반 버전
                //result = $"{result.Substring(0, n)}.{result.Substring(n, 1)}";

                //Ver#2: , 추가 버전
                result = $"{MoneyUnitString.GetThousandCommaText(int.Parse(result.Substring(0, n)))}.{result.Substring(n, 1)}";
				// 축약 기호 추가
				result += symbol[i];
				break;
			}
		}

		return result;
	}
}


/// int 일 때 최대 값이 2.14G까지
/// long 일 때 최대 값이 1E까지