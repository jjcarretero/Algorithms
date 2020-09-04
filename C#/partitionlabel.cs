public class Solution
{
	public IList<int> PartitionLabels(string S)
	{
		int[]		pos = new int[26];
		List<int>	ret = new List<int>();
		int			end = 0, prev = 0;

		int i = 0;
		while (i < S.Length)
		{
			pos[(S[i] - 'a')] = i;
			i++;
		}
		i = 0;
		while (i < S.Length)
		{
			end = Math.Max(end, pos[(S[i] - 'a')]);
			if (end == i)
			{
				ret.Add(end - prev + 1);
				rev = end + 1;
			}
			i++;
		}
		return (ret);
	}
}
