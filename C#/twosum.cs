public class Solution
{
	public int[] TwoSum(int[] nums, int target)
	{
		Dictionary<int, int> dict =  new Dictionary<int, int>();
		dict[nums[0]] = 0;
		int i = 1;

		while (i < nums.Length)
		{
			int diff = target - nums[i];
			if (dict.ContainsKey(diff) && dict[diff] != i)
				return new int[2]{(int) dict[diff], i};
			dict[nums[i]] = i;
			i++;
		}
		return null;
	}
}
