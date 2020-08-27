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

int	ft_isValid(char *s)
{
	int		i;
	int		peek;
	char	*stack;

	stack = (char*)malloc(sizeof(char) * ft_strlen(s));
	peek = -1;
	i = 0;
	while (i++ < ft_strlen(s))
	{
		stack[++peek] = s[i];
		if ((s[i] == ')') || s[i] == '}' || s[i] == ']')
		{
			if (peek >= 1)
			{
				if (ft_abs(stack[peek - 1] - stack[peek]) < 3)
					peek -= 2;
				else
					return (0);
			}
			else
				return (0);
		}
	}
	return ((peek < 0) ? 1 : 0);
}
