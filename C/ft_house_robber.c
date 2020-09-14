/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_house_robber.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcarrete <jcarrete@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/14 15:01:23 by jcarrete          #+#    #+#             */
/*   Updated: 2020/09/14 15:01:23 by jcarrete         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int rob(int* nums, int numsSize)
{
	int	i;

	if (numsSize == 0)
		return (0);
	else if (numsSize == 1)
		return (nums[0]);
	else if (numsSize == 2)
		return (ft_max(nums[0], nums[1]));
	nums[2] = ft_max(nums[0] + nums[2], nums[1]);
	i = 3;
	while (i < numsSize)
	{
		nums[i] += ft_max(nums[i - 2], nums[i - 3]);
		i++;
	}
	return (ft_max(nums[numsSize - 1], nums[numsSize - 2]));
}
