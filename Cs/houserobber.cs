public class Solution
{
	public int Rob(int[] nums)
	{
		if (nums.Length == 0)
			return (0);
		else if (nums.Length == 1)
			return (nums[0]);
		else if (nums.Length == 2)
			return(Math.Max(nums[0], nums[1]));
		nums[2] = Math.Max(nums[0] + nums[2],nums[1]);
		int i = 3;
		while (i < nums.Length)
		{
			nums[i] += Math.Max(nums[i -2], nums[i -3]);
			i++;
		}
		return(Math.Max(nums[nums.Length - 1], nums[nums.Length - 2]));
	}
}
