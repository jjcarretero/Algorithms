/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_max_product_subar.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcarrete <jcarrete@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/11 10:59:35 by jcarrete          #+#    #+#             */
/*   Updated: 2020/09/11 10:59:35 by jcarrete         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	maxProduct(int *nums, int size)
{
	int	left;
	int	right;
	int	max;
	int	i;

	left = 1;
	right = 1;
	max = -2147483648;
	i = 0;
	while (i < size)
	{
		left *= nums[i];
		right *= nums[size - i - 1];
		max = ft_max(max, ft_max(left, right));
		if (left == 0)
			left++;
		if (right == 0)
			right++;
		i++;
	}
	return (max);
}
