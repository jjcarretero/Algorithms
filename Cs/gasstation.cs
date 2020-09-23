public class Solution
{
	public int CanCompleteCircuit(int[] gas, int[] cost)
	{
		int	start = 0;
		int	total = 0;
		int	fuel = 0;
		int	i = 0;
		while (i < gas.Length)
		{
			fuel += (gas[i] - cost[i]);
			if (fuel < 0)
			{
				start = i + 1;
				total = total + fuel;
				fuel = 0;
			}
			i++;
		}
		if (total + fuel < 0)
			return (-1);
		return (start);
	}
}
