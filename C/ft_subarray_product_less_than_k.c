/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_subarray_product_less_than_k.c                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcarrete <jcarrete@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/28 12:10:06 by jcarrete          #+#    #+#             */
/*   Updated: 2020/09/28 12:10:06 by jcarrete         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

int	numSubarrayProductLessThanK(int *nums, int numsSize, int k)
{
	int	i;
	int	j;
	int	product;
	int	ret;

	i = 0;
	j = 0;
	product = 1;
	ret = 0;
	if (numsSize == 0 || k == 0)
		return (0);
	while (j < numsSize)
	{
		product *= nums[j];
		j++;
		while (product >= k && i < j)
			product /= nums[i++];
		ret += j - i;
	}
	return (ret);
}
