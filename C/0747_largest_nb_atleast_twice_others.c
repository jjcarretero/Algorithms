/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   0747_largest_nb_atleast_twice_others.c             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcarrete <jcarrete@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/31 21:48:50 by jcarrete          #+#    #+#             */
/*   Updated: 2020/10/31 21:48:50 by jcarrete         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	dominantIndex(int *nums, int numsSize)
{
	int max[2];
	int i;

	if (numsSize == 1)
		return (0);
	max[0] = -1;
	max[1] = -1;
	i = 0;
	while (i < numsSize)
	{
		if (max[1] == -1 || nums[i] > nums[max[1]])
		{
			max[0] = max[1];
			max[1] = i;
		}
		else if (max[0] == -1 || nums[i] > nums[max[0]])
			max[0] = i;
		i++;
	}
	if ((nums[max[0]] * 2) <= nums[max[1]])
			return (max[1]);
	return (-1);
}
