public class Solution
{
	public string LargestTimeFromDigits(int[] A)
	{
		StringBuilder str = new StringBuilder();
		HashSet<int> hash = new HashSet<int>();
		int max = -1;
		string res = string.Empty;
		BuildString(str, hash, A, 0, 0, ref max, ref res);
		return res;
	}

	private void BuildString(StringBuilder str, HashSet<int> hash, int[] A, int hours, int minutes, ref int max, ref string res)
	{
		if (hash.Count == A.Length)
		{
			if (str.Length == 4 && hours * 60 + minutes > max)
			{
				max = hours * 60 + minutes;
				str.Insert(2,":");
				res = str.ToString();
				str.Remove(2,1);
			}
			return;
		}
		int i = 0;
		while(i < A.Length)
		{
			if (hash.Contains(i))
			{
				i++;
				continue;
			}
			if (str.Length < 2 && hours * 10 + A[i] < 24)
			{
				str.Append(A[i]);
				hash.Add(i);
				BuildString(str, hash, A, hours * 10 + A[i], minutes, ref max, ref res);
				hash.Remove(i);
				str.Length--;
			}
			else if (str.Length >= 2 && minutes * 10 + A[i] < 60)
			{
				str.Append(A[i]);
				hash.Add(i);
				BuildString(str, hash, A, hours, minutes * 10 + A[i], ref max, ref res);
				hash.Remove(i);
				str.Length--;
			}
			i++;
		}
	}
}
