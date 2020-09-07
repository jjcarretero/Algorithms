public class Solution
{
	public bool WordPattern(string pattern, string str)
	{
		if(string.IsNullOrEmpty(pattern) || string.IsNullOrEmpty(str))
			return (false);
		Dictionary<object, int> map = new Dictionary<object, int>();
		string[] split = str.Split(' ');

		if(pattern.Length != split.Length)
			return (false);
		int i = 0;
		while (i < split.Length)
		{
			if(!map.ContainsKey(pattern[i]))
				map.Add(pattern[i], i);
			if(!map.ContainsKey(split[i]))
				map.Add(split[i], i);
			if(map[pattern[i]] != map[split[i]])
				return (false);
			i++;
		}
	return (true);
	}
}
