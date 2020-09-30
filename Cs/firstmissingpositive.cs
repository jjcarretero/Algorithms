public class Solution
{
	public int FirstMissingPositive(int[] nums)
	{
		int i = 0;
		while (i < nums.Length)
		{
			if (nums[i] <= 0 || nums[i] > nums.Length)
				nums[i] = nums.Length + 1;
			i++;
		}
		i = 0;
		while (i < nums.Length)
		{
			if (Math.Abs(nums[i]) <= nums.Length)
				if (nums[Math.Abs(nums[i]) - 1] > 0)
					nums[Math.Abs(nums[i]) - 1] *= -1;
			i++;
		}
		i = 0;
		while (i < nums.Length)
		{
			if (nums[i] > 0)
				break ;
			i++;
		}
		return (i + 1);
	}
}
