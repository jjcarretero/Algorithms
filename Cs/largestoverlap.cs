public class Solution
{
	public int LargestOverlap(int[][] A, int[][] B)
	{
		int ret = 0;
		int size = A.Length;
		int i = 0;
		while (i < (size * 2) - 1)
		{
			int j = 0;
			while (j < (size * 2) - 1)
			{
				int up = Math.Max(i, size - 1);
				int down = Math.Min(i + size - 1, 2 * size - 2);
				int temp = 0;
				while (up <= down)
				{
					int left = Math.Max(j, size - 1);
					int right = Math.Min(j + size - 1, 2 * size - 2);
					while (left <= right)
					{
						if (A[up - i][left - j] == 1)
							if (A[up - i][left - j] == B[up - (size - 1)][left - (size - 1)])
								temp++;
						left++;
					}
					up++;
				}
				ret = Math.Max(ret, temp);
				j++;
			}
			i++;
		}
		return (ret);
	}
}
