public class Solution
{
	public IList<IList<int>> CombinationSum3(int k, int n)
	{
		var lst = new List<IList<int>>();
		traverse(lst, new List<int>(), k, n, 0, 1);
		return (lst);
	}

	private void	traverse(List<IList<int>> lst, List<int> temp_lst, int k, int n, int count, int start)
	{
		if(temp_lst.Count == k && temp_lst.Sum() == n)
			lst.Add(new List<int>(temp_lst));
		int i = count;
		while (i < k)
		{
			int j = start;
			while (j < 10)
			{
				temp_lst.Add(j);
				traverse(lst, temp_lst, k, n, i + 1, j + 1);
				temp_lst.RemoveAt(temp_lst.Count - 1);
				j++;
			}
			i++;
		}
	}
}
