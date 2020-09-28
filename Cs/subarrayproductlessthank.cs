public class Solution
{
	public int NumSubarrayProductLessThanK(int[] nums, int k)
	{
		int product = 1;
		int ret = 0;
		int i = 0;
		int j = 0;

		if (nums.Length == 0 || k < 1)
			return (0);
		while (j < nums.Length)
		{
			product *= nums[j];
			j++;
			while (product >= k && i < j)
				product /= nums[i++];
			ret += j - i;
		}
		return (ret);
	}
}
