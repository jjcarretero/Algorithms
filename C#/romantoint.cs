public class Solution
{
	private readonly Dictionary<char,int> dic = new Dictionary<char, int>()
		{
			{'I', 1},{'V', 5},{'X', 10},{'L', 50},{'C', 100},{'D', 500},{'M',1000}
		};
	public int RomanToInt(string s)
	{
		int r = dic[s[s.Length - 1]];
		int i = s.Length - 2;
		while (i >= 0)
		{
			if (dic[s[i]] >= dic[s[i + 1]])
				r += dic[s[i]];
			else
				r -= dic[s[i]];
			i--;
		}
		return (r);
	}
}
