public class Solution
{
	public bool RepeatedSubstringPattern(string s)
	{
		int len = s.Length;
		int i = 1;
		int j = 0;
		int[] ind = new int[len];

		while (i < len)
		{
			if (s[i] == s[j])
			{
				ind[i] = j + 1;
				j++;
				i++;
			}
			else if (j == 0)
				i++;
			else
				j = ind[j - 1];
		}
		return (ind[len - 1] != 0 && len % (len - ind[len - 1]) == 0);
	}
}
