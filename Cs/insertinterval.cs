public class Solution
{
	public int[][] Insert(int[][] intervals, int[] newInterval)
	{
		int start = intervals.Length;
		int end = intervals.Length - 1;
		int i = 0;

		while (i < intervals.Length)
		{
			if (intervals[i][1] >= newInterval[0])
			{
				start = i;
				break ;
			}
			i++;
		}
		i = start;
		while (i < intervals.Length)
		{
			if (intervals[i][0] > newInterval[1])
			{
				end = i - 1;
				break ;
			}
			i++;
		}
		List<int[]> ret = new List<int[]>();
		i = 0;
		while (i < start)
				ret.Add(intervals[i++]);
		i = start;
		while (i <= end)
		{
			newInterval[0] = Math.Min(intervals[i][0], newInterval[0]);
			newInterval[1] = Math.Max(intervals[i][1], newInterval[1]);
			i++;
		}
		ret.Add(newInterval);
		i = end + 1;
		while (i < intervals.Length)
			ret.Add(intervals[i++]);
		return (ret.ToArray());
	}
}
