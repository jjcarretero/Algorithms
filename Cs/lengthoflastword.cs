public class Solution
{
	public int LengthOfLastWord(string s)
	{
		int	s_len = s.Length;
		int	pre_len = 0;
		int	cur_len = 0;
		int	i = 0;
		while (i < s_len)
		{
			if (s[i] == 32)
			{
				if (cur_len != 0)
					pre_len = cur_len;
				cur_len = 0;
			}
			else
				cur_len++;
			i++;
		}
		return (cur_len != 0 ? cur_len : pre_len);
	}
}
