/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_partitionlabels.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcarrete <jcarrete@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/04 12:31:28 by jcarrete          #+#    #+#             */
/*   Updated: 2020/09/04 12:31:28 by jcarrete         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft.h"

int	*ft_intiate(int len, int *returnSize, int *end, int *prev)
{
	int	*ret;
	int	i;

	*returnSize = 0;
	*end = 0;
	*prev = 0;
	if (!(ret = (int*)malloc(sizeof(int) * len)))
		return (NULL);
	i = 0;
	while (i < len)
	{
		ret[i] = 0;
		i++;
	}
	return (ret);
}

int	*partitionLabels(char *S, int *returnSize)
{
	int	pos[26];
	int	*ret;
	int	end;
	int	prev;
	int	i;

	ret = ft_intiate(26, returnSize, &end, &prev);
	i = 0;
	while (S[i])
	{
		pos[(S[i] - 'a')] = i;
		i++;
	}
	i = 0;
	while (S[i])
	{
		end = ft_max(end, pos[(S[i] - 'a')]);
		if (end == i)
		{
			ret[(*returnSize)++] = end - prev + 1;
			prev = end + 1;
		}
		i++;
	}
	return (ret);
}
