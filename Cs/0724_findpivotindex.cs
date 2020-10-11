public class Solution
{
	public int PivotIndex(int[] nums)
	{
		int	total = 0;
		int	left_sum = 0;
		int	i = 0;

		foreach (int num in nums)
			total += num;
		while (i < nums.Length)
		{
			if(left_sum == total - nums[i] - left_sum)
				return (i);
			left_sum += nums[i];
			i++;
		}
		return (-1);
	}
}
