/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_len_of_lastword.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcarrete <jcarrete@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/15 12:43:29 by jcarrete          #+#    #+#             */
/*   Updated: 2020/09/15 12:43:29 by jcarrete         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

int	lengthOfLastWord(char *s)
{
	int	i;
	int	cur_len;
	int	pre_len;

	i = 0;
	cur_len = 0;
	pre_len = 0;
	while (s[i])
	{
		if (s[i] == 32)
		{
			if (cur_len != 0)
				pre_len = cur_len;
			cur_len = 0;
		}
		else
			cur_len++;
		i++;
	}
	return (cur_len ? cur_len : pre_len);
}
