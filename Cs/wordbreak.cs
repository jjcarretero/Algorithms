public class Solution
{
	public bool WordBreak(string s, IList<string> wordDict)
	{
		HashSet<string>	hash = new HashSet<string>(wordDict);
		int	max_len = 0;
		foreach (var word in wordDict)
			max_len = Math.Max(max_len, word.Length);
		bool[] value = new bool[s.Length + 1];
		value[0] = true;
		int i = 1;
		while (i <= s.Length)
		{
			int j = i;
			while(j > 0)
			{
				j--;
				if (max_len < (i - j))
					continue ;
				if (value[j] && hash.Contains(s.Substring(j, i - j)))
				{
					value[i] = true;
					break;
				}
			}
			i++;
		}
		return value[s.Length];
	}
}
