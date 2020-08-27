public class Solution
{
	public bool IsValid(string s)
	{
		int i = 0;
		Dictionary<char, char> dict =  new Dictionary<char, char>();
		dict.Add(')', '(');
		dict.Add('}', '{');
		dict.Add(']', '[');

		Stack<char> stack = new Stack<char>();
		while (i < s.Length)
		{
			if (dict.ContainsKey(s[i]))
			{
				if (stack.Count == 0)
					return false;
				if (dict[s[i]] != stack.Pop())
					return false;
			}
			else
				stack.Push(s[i]);
			i++;
		}
		return (stack.Count == 0 ? true : false);
	}
}
