public class Solution
{
	public int Reverse(int x)
	{
		int r = 0;
		while (x != 0)
		{
			if ((r < Int32.MinValue / 10) || (r > Int32.MaxValue /10)
			|| (r == Int32.MinValue / 10 && x % 10 < Int32.MinValue %10)
			|| (r == Int32.MaxValue / 10 && x %10 > Int32.MaxValue %10))
				return 0;
			r = r * 10 + x % 10;
			x /= 10;
		}
		return (r);
	}
}
