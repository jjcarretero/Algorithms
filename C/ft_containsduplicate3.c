/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_containsduplicate3.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcarrete <jcarrete@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/02 15:49:23 by jcarrete          #+#    #+#             */
/*   Updated: 2020/09/02 15:49:23 by jcarrete         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

static void		ft_sort(int *nums, int *ind, int start, int end)
{
	int	s;
	int	e;
	int val;

	s = start;
	e = end;
	val = nums[(e + s) / 2];
	while (s <= e)
	{
		while (nums[s] < val)
			s++;
		while (nums[e] > val)
			e--;
		if (s <= e)
		{
			ft_swap_int(nums + s, nums + e);
			ft_swap_int(ind + s, ind + e);
			s++;
			e--;
		}
	}
	if (start < e)
		ft_sort(nums, ind, start, e);
	if (s < end)
		ft_sort(nums, ind, s, end);
}

static int		*prepare_index(int size)
{
	int	*ret;
	int	i;

	if (!(ret = (int*)malloc(sizeof(int) * size)))
		return (0);
	i = 0;
	while (i < size)
	{
		ret[i] = i;
		i++;
	}
	return (ret);
}

static int		check_diff(int *nums, int size, int t, int k)
{
	int		i;
	int		j;
	long	diff;
	int		*ind;

	i = 0;
	ind = prepare_index(size);
	ft_sort(nums, ind, 0, size - 1);
	while (i < size)
	{
		diff = (long)nums[i] + (long)t;
		j = i + 1;
		while (j < size && (long)(nums[j]) <= diff)
		{
			if (ft_abs(ind[i] - ind[j]) <= k)
			{
				free(ind);
				return (1);
			}
			j++;
		}
		i++;
	}
	free(ind);
	return (0);
}

int				contains_duplicate_3(int *nums, int size, int k, int t)
{
	int	ret;

	ret = 0;
	if (size <= 0 || k == 0)
		return (ret);
	ret = check_diff(nums, size, t, k);
	return (ret);
}
