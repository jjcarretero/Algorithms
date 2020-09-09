public class Solution
{
	public int	CompareVersion(string version1, string version2)
	{
		int i = 0;
		int j = 0;

		while (i < version1.Length || j < version2.Length)
		{
			int intv1 = get_version(version1, ref i);
			int intv2 = get_version(version2, ref j);
			if (intv1 != intv2)
				return (intv1.CompareTo(intv2));
			i++;
			j++;
		}
		return (0);
	}

	private int	get_version(string version, ref int i)
	{
		string intv = "0";

		while (i < version.Length && version[i] != '.')
		{
			intv += version[i];
			i++;
		}
		return (Int32.Parse(intv));
	}
}
