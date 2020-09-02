public class Solution
{
	public bool ContainsNearbyAlmostDuplicate(int[] nums, int k, long t)
	{
		var sort = nums.Select((val, ind) => new { val, ind }).OrderBy(x => x.val).ToArray();

		int i = 0;
		while (i < sort.Length)
		{
			long curr = sort[i].val;
			int j = 1 + i;
			while (j < sort.Length && (sort[j].val - curr) <= t)
			{
				if (Math.Abs(sort[i].ind - sort[j].ind) <= k)
					return true;
				j++;
			}
			i++;
		}
		return false;
	}
}
