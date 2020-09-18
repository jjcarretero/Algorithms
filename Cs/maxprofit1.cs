public class Solution
{
	public int MaxProfit(int[] prices)
	{
		if(prices == null || prices.Length == 0)
			return 0;
		int	min = prices[0];
		int	max_profit = 0;
		int	i = 1;
		while (i < prices.Length)
		{
			min = Math.Min(min, prices[i]);
			max_profit = Math.Max(max_profit, prices[i] - min);
			i++;
		}
		return (max_profit);
	}
}
