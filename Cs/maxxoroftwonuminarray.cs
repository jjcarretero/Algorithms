public class Solution
{
	public int FindMaximumXOR(int[] nums)
	{
		int	ret = 0;
		int	mask = 0;
		int	i = 31;

		while (i >= 0)
		{
			mask = mask | (1 << i);
			HashSet<int> hash = new HashSet<int>();
			foreach (int num in nums)
				hash.Add(num & mask);
			int temp = ret | (1 << i);
			foreach (int prefix in hash)
			{
				if (hash.Contains(temp ^ prefix))
				{
					ret = temp;
					break;
				}
			}
			i--;
		}
		return (ret);
	}
}
