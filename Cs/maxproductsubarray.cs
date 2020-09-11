public class Solution
{
	public int MaxProduct(int[] nums)
	{
		var prev_max = nums[0];
		var prev_min = nums[0];
		var max = nums[0];
		int i = 1;

		while (i < nums.Length)
		{
			var val_max = prev_max * nums[i];
			var val_min = prev_min * nums[i];
			prev_max = Math.max(Math.max(val_max, val_min), nums[i]);
			min = Math.min(Math.min(val_max, val_min), nums[i]);
			if (max < prev_max)
				max = prev_max;
			i++;
		}
		return (max);
	}
}
