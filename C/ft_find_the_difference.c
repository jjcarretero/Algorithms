/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_the_difference.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcarrete <jcarrete@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/24 16:16:46 by jcarrete          #+#    #+#             */
/*   Updated: 2020/09/24 16:16:46 by jcarrete         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

char	findTheDifference(char *s, char *t)
{
	int a;
	int b;
	int i;

	a = 0;
	b = 0;
	i = 0;
	while (s[i])
		a += s[i++];
	i = 0;
	while (t[i])
		b += t[i++];
	return (b - a);
}
