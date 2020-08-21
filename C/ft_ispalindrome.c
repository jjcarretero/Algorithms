/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ispalindrome.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcarrete <jcarrete@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/21 21:15:29 by jcarrete          #+#    #+#             */
/*   Updated: 2020/08/21 21:15:29 by jcarrete         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft.h"

int	isPalindrome(int x)
{
	int r;
	int i;

	r = 0;
	i = x;
	while (i > 0)
	{
		if ((r > INT_MAX /10) || (r == INT_MAX / 10 && i % 10 > INT_MAX %10))
			return (0);
		r = r * 10 + i % 10;
		i /= 10;
	}
	return (x == r);
}
