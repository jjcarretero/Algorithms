/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isvalid.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcarrete <jcarrete@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/27 01:59:58 by jcarrete          #+#    #+#             */
/*   Updated: 2020/08/27 01:59:58 by jcarrete         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isValid(char * s)
{
	int		i;
	int		len;
	int		peek;
	char	*stack;

	len = ft_strlen(s);
	stack = (char*)malloc(sizeof(char) * len);
	peek = -1;
	i = 0;
	while (i < len)
	{
		peek++;
		stack[peek] = s[i];
		if((s[i] == ')') || s[i] == '}' || s[i] == ']')
		{
			if (peek >= 1)
			{
				if (ft_abs(stack[peek - 1] - stack [peek]) < 3)
					peek -= 2;
				else
					return (0);
			}
			else
				return (0);
		}
		i++;
	}
	if (peek < 0)
		return (1);
	return (0);
}
