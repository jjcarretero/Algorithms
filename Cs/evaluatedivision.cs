public class Solution
{
	public double[] CalcEquation(IList<IList<string>> equations, double[] values, IList<IList<string>> queries)
	{
		Dictionary<string, int> dic = new Dictionary<string, int>();
		int	size = 0;
		double[] ret = new double[queries.Count];

		int	i = 0;
		while (i < values.Length)
		{
			int j = 0;
			while (j < 2)
			{
				if (!dic.ContainsKey(equations[i][j]))
					dic.Add(equations[i][j], size++);
				j++;
			}
			i++;
		}
		double[,]	hashmap = new double[size, size];
		i = 0;
		while (i < size)
		{
			int j = 0;
			while (j < size)
			{
				hashmap[i, j] = -1.0f;
				j++;
			}
			i++;
		}
		i = 0;
		while (i < values.Length)
		{
			int elem_a = dic[equations[i][0]];
			int elem_b = dic[equations[i][1]];
			hashmap[elem_a, elem_b] = values[i];
			hashmap[elem_b, elem_a] = 1 / values[i];
			i++;
		}
		i = 0;
		while (i < size)
		{
			int j = 0;
			while (j < size)
			{
				int k = 0;
				while (k < size)
				{
					if (hashmap[j, k] == -1 && hashmap[j, i] != -1 && hashmap[i, k] != -1)
						hashmap[j, k] = hashmap[j, i] * hashmap[i, k];
					k++;
				}
				j++;
			}
			i++;
		}
		i = 0;
		while (i < queries.Count)
		{
			if(!dic.ContainsKey(queries[i][0]) || !dic.ContainsKey(queries[i][1]))
				ret[i] = -1;
			else
				ret[i] = hashmap[dic[queries[i][0]], dic[queries[i][1]]];
			i++;
		}
		return (ret);
	}
}
