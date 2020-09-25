public class Solution
{
	static int compare_number(string a, string b)
	{
		int	i = 0;
		while (i < y.Length)
		{
			if (a[i] > b[i])
				return (-1);
			else if (a[i] < b[i])
				return (1);
			i++;
		}
		if (i != x.Length)
		{
			int j = 0;
			while (j < x.Length)
			{
				int k = (j + i) % x.Length;
				if (x[k] > x[j])
					return (-1);
				else if (x[k] < x[j])
					return (1);
				j++;
			}
		}
		return (0);
	}

	public string LargestNumber(int[] nums)
	{
		var string_array = new string[nums.Length];
		int len = 0;
		int i = 0;

		while (i < nums.Length)
		{
			string_array[i] = nums[i].ToString();
			len += string_array[i];
			i++;
		}
		Array.Sort(string_array, (x,y)=>(x.Length >= y.Length ? compare_number(x, y) : -1 * compare_number(y, x)));
		var ret = string.Join("", string_array);
		return (ret[0] != '0' ? ret : "0");
	}
}
