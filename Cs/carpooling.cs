public class Solution
{
	public bool CarPooling(int[][] trips, int capacity)
	{
		int	row = trips.Length;
		int	col = trips[0].Length;
		int	passengers = 0;

		if (row == 0 || col == 0)
			return (true);
		int[] hash = new int[1001];
		int	i = 0;
		while (i < row)
		{
			hash[trips[i][1]] += trips[i][0];
			hash[trips[i][2]] -= trips[i][0];
			i++;
		}
		i = 0;
		while (i < hash.Length)
		{
			passengers += hash[i];
			if (passengers > capacity)
				return (false);
			i++;
		}
		return (true);
	}
}
