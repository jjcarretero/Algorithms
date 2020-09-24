public class Solution
{
	public char FindTheDifference(string s, string t)
	{
		return ((char)(t.Sum(c => c) - s.Sum(c => c)));
	}
}
