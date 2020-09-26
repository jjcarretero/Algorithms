public class Solution
{
	public int FindPoisonedDuration(int[] timeSeries, int duration)
	{
		int	ret = 0;
		int	time = 0;

		foreach(var attack in timeSeries)
		{
			ret += duration;
			if (time > 0 && time >= attack)
				ret -= time - attack + 1;
			time = attack + duration - 1;
		}
		return (ret);
	}
}
