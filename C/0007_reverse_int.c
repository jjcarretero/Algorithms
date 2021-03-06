/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   0007_reverse_int.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcarrete <jcarrete@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/20 23:00:54 by jcarrete          #+#    #+#             */
/*   Updated: 2020/08/20 23:00:54 by jcarrete         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

int	reverse(int x)
{
	int	r;

	r = 0;
	while (x)
	{
		if ((r < INT_MIN / 10) || (r > INT_MAX / 10)\
			|| (r == INT_MIN / 10 && x % 10 < INT_MIN % 10)\
			|| (r == INT_MAX / 10 && x % 10 > INT_MAX % 10))
			return (0);
		r = r * 10 + x % 10;
		x /= 10;
	}
	return (r);
}
