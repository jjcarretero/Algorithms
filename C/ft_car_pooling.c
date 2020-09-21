/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_car_pooling.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcarrete <jcarrete@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/21 15:19:03 by jcarrete          #+#    #+#             */
/*   Updated: 2020/09/21 15:19:03 by jcarrete         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

int	carPooling(int **trips, int tripsSize, int *tripsColSize, int capacity)
{
	int	hash[1001];
	int	i;
	int	passengers;

	ft_memset(hash, 0, sizeof(hash));
	passengers = 0;
	i = 0;
	while (i < tripsSize)
	{
		hash[trips[i][1]] += trips[i][0];
		hash[trips[i][2]] -= trips[i][0];
		i++;
	}
	i = 0;
	while (i < 1001)
	{
		passengers += hash[i];
		if (passengers > capacity)
			return (0);
		i++;
	}
	return (1);
}
