/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_repeatedsubstring.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcarrete <jcarrete@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/03 16:42:25 by jcarrete          #+#    #+#             */
/*   Updated: 2020/09/03 16:42:25 by jcarrete         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

int	*init_int_array(int len)
{
	int	*ind;
	int	i;

	ind = (int*)malloc(sizeof(int) * len);
	i = 0;
	while (i < len)
	{
		ind[i] = 0;
		i++;
	}
	return (ind);
}

int	*ft_kmp_algorithm(char *s, int len)
{
	int	i;
	int	j;
	int	*ind;

	i = 1;
	j = 0;
	ind = init_int_array(len);
	while (i < len)
	{
		if (s[i] == s[j])
		{
			ind[i] = j + 1;
			i++;
			j++;
		}
		else
		{
			if (j != 0)
				j = ind[j - 1];
			else
				i++;
		}
	}
	return (ind);
}

int	repeatedSubstringPattern(char *s)
{
	int	len;
	int	*ind;
	int	ret;
	int	last;

	len = (int)ft_strlen(s);
	if (len == 0)
		return (0);
	ind = ft_kmp_algorithm(s, len);
	last = ind[len - 1];
	free(ind);
	if (last == 0)
		return (0);
	ret = len - last;
	return (len % ret == 0);
}
