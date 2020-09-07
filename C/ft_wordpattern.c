/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_wordpattern.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcarrete <jcarrete@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/07 15:03:15 by jcarrete          #+#    #+#             */
/*   Updated: 2020/09/07 15:03:15 by jcarrete         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft.h"

static	char	**prepare_map(void)
{
	int		i;
	char	**map;

	if (!(map = (char**)malloc(sizeof(char*) * 26)))
		return (NULL);
	i = 0;
	while (i < 26)
		map[i++] = "";
	return (map);
}

static int		check_letter_with_str(char **map, char *split, int ind)
{
	int	j;

	j = 0;
	while (j < 26)
	{
		if (ft_strcmp(map[j], split) == 0)
			return (0);
		j++;
	}
	map[ind] = split;
	return (1);
}

int				wordPattern(char *pattern, char *str)
{
	char	**map;
	char	**split;
	int		i;
	int		j;

	map = prepare_map();
	split = ft_split(str, 32);
	if (split[0] && ft_strlen(pattern) == 0)
		return (0);
	map[*pattern - 97] = split[0];
	i = 0;
	while (*pattern)
	{
		if (!(split[i]))
			return (0);
		if (map[*pattern - 97] == "")
			if (check_letter_with_str(map, split[i], (*pattern - 97)) == 0)
				return (0);
		if (ft_strcmp(map[*pattern - 'a'], split[i]) != 0)
			return (0);
		pattern++;
		i++;
	}
	return (!(split[i]));
}
