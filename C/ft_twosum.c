/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   twoSum.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcarrete <jcarrete@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/16 11:41:48 by jcarrete          #+#    #+#             */
/*   Updated: 2020/08/16 11:41:48 by jcarrete         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

typedef struct	s_values
{
	int			min;
	int			max;
	int			len;
	int			*hash;
}				t_values;

static void		complete_hash(t_values *val)
{
	int	i;

	if (!(val->hash = (int*)malloc(sizeof(int) * val->len)))
		return (NULL);
	i = 0;
	while (i < (val->len))
	{
		val->hash[i] = -1;
		i++;
	}
}

static void		create_values(int *nums, int numssize, t_values *val)
{
	int	i;
	int	min;
	int	max;
	int	len;

	min = 2147483647;
	max = -2147483648;
	i = 0;
	while (i < numssize)
	{
		if (nums[i] < min)
			min = nums[i];
		if (nums[i] > max)
			max = nums[i];
		i++;
	}
	val->min = min;
	val->max = max;
	val->len = max - min + 1;
}

static void		prepare_function(int **res, t_values *val,\
									int nums, int numssize)
{
	if (!(res = (int*)malloc(sizeof(int) * 2)))
		return (NULL);
	ft_bzero(&val, sizeof(val));
	create_values(nums, numssize, &val);
	complete_hash(&val);
}

int				*ft_twoSum(int *nums, int numsSize, int target)
{
	int			*res;
	t_values	val;
	int			diff;
	int			i;

	prepare_function(&*res, &val, nums, numsSize);
	i = 0;
	while (i < numsSize)
	{
		diff = target - nums[i] - val.min;
		if (diff >= 0 && diff < val.len &&\
			val.hash[diff] >= 0 && val.hash[diff] != i)
		{
			res[0] = i;
			res[1] = val.hash[diff];
			ft_memfree(val.hash, NULL);
			return (res);
		}
		else
			val.hash[(nums[i] - val.min)] = i;
		i++;
	}
	ft_memfree(val.hash, NULL);
	return (NULL);
}
