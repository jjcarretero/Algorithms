/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_romantoi.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcarrete <jcarrete@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/22 22:54:21 by jcarrete          #+#    #+#             */
/*   Updated: 2020/08/22 22:54:21 by jcarrete         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft.h"

int romanToInt(char * s)
{
	int num;
	int i;

	i = 0;
	num = 0;
	while (s[i])
	{
		if (s[i] == 'I')
			num += (s[i + 1] == 'V' || s[i + 1] == 'X') ? -1 : 1;
		else if (s[i] == 'V')
			num += 5;
		else if (s[i] == 'X')
			num += (s[i + 1 ] == 'L' || s[i + 1] == 'C') ? -10 : 10;
		else if (s[i] == 'L')
			num += 50;
		else if (s[i] == 'C')
			num += (s[i + 1] == 'D' || s[i + 1] == 'M') ? -100 : 100;
		else if (s[i] == 'D')
			num += 500;
		else if (s[i] == 'M')
			num += 1000;
		i++;
	}
	return (num);
}

/*
int romanToInt(char * s)
{
	int m[22];
	int r;
	int i;
	int a;
	int b;

	'I'
	m[6] = 1;
	'V'
	m[19] = 5;
	'X'
	m[21] = 10;
	'L'
	m[9] = 50;
	'C'
	m[0] = 100;
	'D'
	m[1] = 500;
	'M'
	m[10] = 1000;
	r = 0;
	i = 0;
	while (s[i])
	{
		if (s[i + 1] != '\0')
		{
			a = m[s[i] - 67];
			b = m[s[i + 1] - 67];
			if (a < b)
			{
				r += (b - a);
				i++;
			}
			else
				r += a;
		}
		else
			r += m[s[i] - 67];
		i++;
	}
	return (r);
}
*/
