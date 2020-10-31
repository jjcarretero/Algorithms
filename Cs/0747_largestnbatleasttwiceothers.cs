public class Solution
{
	public int DominantIndex(int[] nums)
	{
		if (nums.Length == 1)
			return (0);
		int[] max = {-1, -1};
		int i = 0;
		while (i < nums.Length)
		{
			if (max[1] == -1 || nums[i] > nums[max[1]])
			{
				max[0] = max[1];
				max[1] = i;
			}
			else if (max[0] == -1 || nums[i] > nums[max[0]])
				max[0] = i;
			i++;
		}
		if ((nums[max[0]] * 2) <= nums[max[1]])
			return (max[1]);
		return (-1);
	}
}
