/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_compare_version_nbr.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcarrete <jcarrete@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/09 18:19:48 by jcarrete          #+#    #+#             */
/*   Updated: 2020/09/09 18:19:48 by jcarrete         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

int	get_version_int(char *ver, int *i)
{
	int	intver;

	intver = 0;
	while (ver[*i] != '.' && ver[*i] != '\0')
	{
		intver = 10 * intver + (ver[*i] - 48);
		*i += 1;
	}
	return (intver);
}

int	compareVersion(char *version1, char *version2)
{
	int	intver1;
	int	intver2;
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (version1[i] != '\0' || version2[j] != '\0')
	{
		intver1 = get_version_int(version1, &i);
		intver2 = get_version_int(version2, &j);
		if (intver1 > intver2)
			return (1);
		else if (intver2 > intver1)
			return (-1);
		if (version1[i] == '.')
			i++;
		if (version2[j] == '.')
			j++;
	}
	return (0);
}
