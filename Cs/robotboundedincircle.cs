public class Solution
{
	public bool IsRobotBounded(string instructions)
	{
		(int x, int y)[] move = {(0 , 1), (-1, 0), (0 , -1), (1 , 0)};
		int posx = 0;
		int posy = 0;
		int dir = 0;

		int i = 0;
		while (i < instructions.Length)
		{
			if (instructions[i] == 'G')
			{
				posx += move[dir].x;
				posy += move[dir].y;
			}
			else if (instructions[i] == 'L')
				dir = (dir + 1) % 4;
			else if (instructions[i] == 'R')
				dir = (dir + 3) % 4;
			i++;
		}
		return ((x == 0 && y == 0) || dir != 1);
	}
}
