public class Solution
{
	public IList<int> SequentialDigits(int low, int high)
	{
		int[] solutions = new int[36]{
			12, 23, 34, 45, 56, 67, 78, 89,
			123, 234, 345, 456, 567, 678, 789,
			1234, 2345, 3456, 4567, 5678, 6789,
			12345, 23456, 34567, 45678, 56789,
			123456, 234567, 345678, 456789,
			1234567, 2345678, 3456789,
			12345678, 23456789,
			123456789
			};

		IList<int> ret = new List<int>();
		int i = 0;
		while (i < 36)
		{
			if ((solutions[i] >= low) && (solutions[i] <= high))
				ret.Add(solutions[i]);
			else if (solutions[i] > high)
				break ;
			i++;
		}
		return (ret);
	}
}
