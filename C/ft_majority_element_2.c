/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_majority_element_2.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcarrete <jcarrete@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/22 15:17:29 by jcarrete          #+#    #+#             */
/*   Updated: 2020/09/22 15:17:29 by jcarrete         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	find_majorities(int *nums, int numsSize, int *ret, int *counter)
{
	int	i;

	i = 0;
	if (counter[0] > 0)
		i++;
	if (counter[1] > 0)
		ret[i++] = ret[1];
	if (i > 0)
	{
		counter[0] = 0;
		counter[1] = -1;
		if (i > 1)
			counter[1] = 0;
		i = 0;
		while (i < numsSize)
		{
			if (ret[0] == nums[i])
				counter[0]++;
			if (counter[1] > -1 && ret[1] == nums[i])
				counter[1]++;
			i++;
		}
	}
}

void	streaming_algorithm(int *nums, int numsSize, int *ret, int *counter)
{
	int	i;

	i = 0;
	while (i < numsSize)
	{
		if (nums[i] == ret[0])
			counter[0] += 1;
		else if (nums[i] == ret[1])
			counter[1] += 1;
		else if (counter[0] == 0)
		{
			ret[0] = nums[i];
			counter[0] = 1;
		}
		else if (counter[1] == 0)
		{
			ret[1] = nums[i];
			counter[1] = 1;
		}
		else
		{
			counter[0] -= 1;
			counter[1] -= 1;
		}
		i++;
	}
}

int		*majorityElement(int *nums, int numsSize, int *returnSize)
{
	int		counter[2];
	int		*ret;
	int		i;

	ret = (int*)malloc(sizeof(int) * 2);
	*returnSize = 0;
	counter[0] = 0;
	counter[1] = 0;
	streaming_algorithm(nums, numsSize, ret, counter);
	find_majorities(nums, numsSize, ret, counter);
	i = 0;
	if (counter[0] > numsSize / 3)
		i++;
	if (counter[1] > numsSize / 3)
		ret[i++] = ret[1];
	*returnSize = i;
	return (ret);
}
