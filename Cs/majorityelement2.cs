public class Solution
{
	public IList<int> MajorityElement(int[] nums)
	{
		int[] m = new int[2]{0, 0};
		int[] counter = new int[2]{0, 0};
		foreach (int nb in nums)
		{
			if (nb == m[0])
				counter[0]++;
			else if(nb == m[1])
				counter[1]++;
			else if(counter[0] == 0)
			{
				m[0] = nb;
				counter[0] = 1;
			}
			else if(counter[1] == 0)
			{
				m[1] = nb;
				counter[1] = 1;
			}
			else
			{
				counter[0]--;
				counter[1]--;
			}
		}
		counter[0] = 0 ;
		counter[1] = 0 ;
		foreach(int nb in nums)
		{
			if (nb == m[0])
				counter[0]++;
			else if(nb == m[1])
				counter[1]++;
		}
		List<int> ret = new List<int>();
		if (counter[0] > nums.Length / 3)
			ret.Add(m[0]);
		if (counter[1] > nums.Length / 3)
			ret.Add(m[1]);
		return ret;
	}
}
