/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_insert_interval.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcarrete <jcarrete@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/13 22:54:28 by jcarrete          #+#    #+#             */
/*   Updated: 2020/09/13 22:54:28 by jcarrete         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void			copy_interval_array(int *interval, int **arr, int i)
{
	arr[i][0] = interval[0];
	arr[i][1] = interval[1];
}

int				**init_empty_array(int intervalsSize,\
						int **returnColumnSizes)
{
	int	**ret;
	int	i;

	ret = (int **)malloc(sizeof(int *) * intervalsSize);
	returnColumnSizes = (int **)malloc(sizeof(int *) * intervalsSize);
	i = 0;
	while (i < intervalsSize)
	{
		ret[i] = (int *)malloc(sizeof(int) * 2);
		i++;
	}
	return (ret);
}

int				**prepare_return_array(int **intervals,\
						int *new_interval, int intervalsSize,\
						int **returnColumnSizes)
{
	int	i;
	int	count;
	int	**ret;

	ret = init_empty_array(intervalsSize + 1, returnColumnSizes);
	i = 0;
	count = 0;
	while (i < (intervalsSize))
	{
		if (intervals[i][0] < new_interval[0] || count)
		{
			copy_interval_array(intervals[i], ret, i + count);
			i++;
		}
		else
		{
			copy_interval_array(new_interval, ret, i);
			count++;
		}
	}
	if (count == 0)
		copy_interval_array(new_interval, ret, i);
	return (ret);
}

void			merge_intervals(int **ret, int *returnSize, int intervalsSize)
{
	int			max;
	int			i;
	int			j;
	int			temp[2];

	intervalsSize += 1;
	max = 0;
	i = 0;
	while (i < intervalsSize)
	{
		temp[0] = ret[i][0];
		max = ret[i][1];
		j = i + 1;
		while (j < intervalsSize && ret[j][0] <= max)
		{
			if (ret[j][1] > max)
				max = ret[j][1];
			j++;
		}
		i = j;
		temp[1] = max;
		*returnSize += 1;
		copy_interval_array(temp, ret, *returnSize - 1);
	}
}

int				**insert(int **intervals, int intervalsSize,\
					int *intervalsColSize, int *newInterval,\
					int newIntervalSize, int *returnSize,\
					int **returnColumnSizes)
{
	int	**ret;
	int *cols;
	int i;

	ret = prepare_return_array(intervals, newInterval,\
								intervalsSize, returnColumnSizes);
	*returnSize = 0;
	merge_intervals(ret, returnSize, intervalsSize);
	i = 0;
	cols = (int*)malloc(sizeof(int) * *returnSize);
	while (i < *returnSize)
	{
		cols[i] = 2;
		i++;
	}
	*returnColumnSizes = cols;
	return (ret);
}
