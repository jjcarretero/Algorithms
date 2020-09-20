public class Solution
{

	int	path_count = 0;
	int	zero_count = 0;

	private void	depth_first_search(int[][] grid, int x, int y, int zero_check)
	{
		if (x < 0 || y < 0 || x >= grid[0].Length || y >= grid.Length)
			return ;
		else if (grid[y][x] == -1 || (grid[y][x] == 2 && zero_check != zero_count))
			return ;
		else if (grid[y][x] == 2 && zero_check == zero_count)
		{
			path_count++;
			return ;
		}
		int temp = grid[y][x];
		grid[y][x] = -1;
		depth_first_search(grid, x, y - 1, zero_check + 1);
		depth_first_search(grid, x, y + 1, zero_check + 1);
		depth_first_search(grid, x - 1, y, zero_check + 1);
		depth_first_search(grid, x + 1, y, zero_check + 1);
		grid[y][x] = temp;
	}

	public int UniquePathsIII(int[][] grid)
	{
		int[] start = new int[2];
		int	zero_check = -1;

		int i = 0;
		while (i < grid.Length)
		{
			int j = 0;
			while (j < grid[0].Length)
			{
				if (grid[i][j] == 0)
					zero_count++;
				else if (grid[i][j] == 1)
				{
					start[0] = i;
					start[1] = j;
				}
				j++;
			}
			i++;
		}
		depth_first_search(grid, start[1], start[0], zero_check);
		return (path_count);
	}
}
