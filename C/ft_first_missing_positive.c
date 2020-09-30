/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_first_missing_positive.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcarrete <jcarrete@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/30 11:23:32 by jcarrete          #+#    #+#             */
/*   Updated: 2020/09/30 11:23:32 by jcarrete         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	firstMissingPositive(int *nums, int numsSize)
{
	int	i;

	i = 0;
	while (i < numsSize)
	{
		if (nums[i] <= 0 || nums[i] > numsSize)
			nums[i] = numsSize + 1;
		i++;
	}
	i = 0;
	while (i < numsSize)
	{
		if (ft_abs(nums[i]) <= numsSize)
			if (nums[ft_abs(nums[i]) - 1] > 0)
				nums[ft_abs(nums[i]) - 1] *= -1;
		i++;
	}
	i = 0;
	while (i < numsSize)
		if (nums[i++] > 0)
			break ;
	return (i + 1);
}
