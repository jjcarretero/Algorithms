/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_word_break.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcarrete <jcarrete@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/29 14:51:18 by jcarrete          #+#    #+#             */
/*   Updated: 2020/09/29 14:51:18 by jcarrete         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

static int	*prepare_hash(char *s, int len)
{
	int	*ret;
	int i;

	ret = malloc(sizeof(int) * (len + 1));
	i = 0;
	while (i <= len)
		ret[i++] = 0;
	ret[len] = 1;
	return (ret);
}

int			wordBreak(char *s, char **wd, int wd_size)
{
	int	*hash;
	int	i;
	int	j;
	int	wd_len;

	if (!s || !wd || wd_size == 0)
		return (0);
	hash = prepare_hash(s, ft_strlen(s));
	i = ft_strlen(s) - 1;
	while (i >= 0)
	{
		j = -1;
		while (j < wd_size - 1)
		{
			j++;
			wd_len = ft_strlen(wd[j]);
			if ((i + wd_len) > ft_strlen(s))
				continue ;
			hash[i] = (hash[wd_len + i] &&\
			ft_strncmp(s + i, wd[j], wd_len) == 0) || hash[i];
		}
		i--;
	}
	return (hash[0]);
}
