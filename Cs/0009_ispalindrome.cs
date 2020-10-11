public class Solution
{
	public bool IsPalindrome(int x)
	{
		if (x.CompareTo(0).Equals(-1)
			|| (!x.Equals(0) && (x % 10).Equals(0)))
			return false;
		else if (x.CompareTo(10).Equals(-1))
			return true;
		int backwards = 0;
		while (x.CompareTo(backwards).Equals(1))
		{
			backwards = (backwards * 10) + (x % 10);
			x /= 10;
		}
		return (x.Equals(backwards) || x.Equals(backwards / 10));
	}
}
