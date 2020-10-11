/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   0724_find_pivot_index.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcarrete <jcarrete@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/11 12:49:55 by jcarrete          #+#    #+#             */
/*   Updated: 2020/10/11 12:49:55 by jcarrete         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

int	pivotIndex(int *nums, int numsSize)
{
	int	total;
	int	left_sum;
	int	i;

	total = 0;
	left_sum = 0;
	i = 0;
	while (i < numsSize)
	{
		total += nums[i];
		i++;
	}
	i = 0;
	while (i < numsSize)
	{
		if (left_sum == total - nums[i] - left_sum)
			return (i);
		left_sum += nums[i];
		i++;
	}
	return (-1);
}
