/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sequential_digits.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcarrete <jcarrete@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/19 13:08:04 by jcarrete          #+#    #+#             */
/*   Updated: 2020/09/19 13:08:04 by jcarrete         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

int	create_sequence(int nb, int mod)
{
	int	ret;
	int	i;
	int	add;

	ret = 0;
	i = 1;
	while (i <= nb)
	{
		add = (mod == -1) ? 1 : i;
		ret = (ret * 10) + add;
		i++;
	}
	return (ret);
}

int	*sequentialDigits(int low, int high, int *returnSize)
{
	int	*ret;
	int	i;
	int	min;
	int	increment;

	*returnSize = 0;
	if (low > high)
		return (NULL);
	ret = (int *)malloc(sizeof(int) * 36);
	i = ft_digits_long(low);
	while (i <= ft_digits_long(high))
	{
		min = create_sequence(i, i);
		increment = create_sequence(i, -1);
		while (min <= high && ((min % 10 != 0)))
		{
			if (min >= low)
			{
				ret[*returnSize] = min;
				*returnSize += 1;
			}
			min += increment;
		}
		i++;
	}
	return (ret);
}
