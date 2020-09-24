/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_gas_station.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcarrete <jcarrete@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/23 15:43:18 by jcarrete          #+#    #+#             */
/*   Updated: 2020/09/23 15:43:18 by jcarrete         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

int	canCompleteCircuit(int *gas, int gasSize, int *cost, int costSize)
{
	int	start;
	int	total;
	int	fuel;
	int	i;

	start = 0;
	total = 0;
	fuel = 0;
	i = 0;
	while (i < gasSize)
	{
		fuel += (gas[i] - cost[i]);
		if (fuel < 0)
		{
			start = i + 1;
			total = total + fuel;
			fuel = 0;
		}
		i++;
	}
	if (total + fuel < 0)
		return (-1);
	return (start);
}
