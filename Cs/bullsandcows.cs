public class Solution
{
	public string GetHint(string secret, string guess)
	{
		int[] count = new int[10];
		int i = 0;
		int cows = 0;
		int bulls = 0;

		while (i < secret.Length)
			count[secret[i++] - '0']++;
		i = 0;
		while (i < guess.Length)
		{
			if(secret[i] == guess[i])
				bulls++;
			if (count[guess[i] - '0']-- > 0)
				cows++;
			i++;
		}
		cows -= bulls;
		return ($"{bulls}A{cows}B");
	}
}
