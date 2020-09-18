/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_max_profit_1.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcarrete <jcarrete@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/18 10:35:54 by jcarrete          #+#    #+#             */
/*   Updated: 2020/09/18 10:35:54 by jcarrete         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	maxProfit(int *prices, int pricesSize)
{
	int	min;
	int	max_profit;
	int	i;

	if (pricesSize <= 0 || prices == NULL)
		return (0);
	max_profit = 0;
	min = prices[0];
	i = 1;
	while (i < pricesSize)
	{
		if (prices[i] < min)
			min = prices[i];
		else if ((prices[i] - min) > max_profit)
			max_profit = prices[i] - min;
		i++;
	}
	return (max_profit);
}
