/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bulls_and_cows.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcarrete <jcarrete@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/10 12:32:36 by jcarrete          #+#    #+#             */
/*   Updated: 2020/09/10 12:32:36 by jcarrete         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static void	count_animals(char *secret, char *guess, int *bulls, int *cows)
{
	int	count[10];
	int	i;

	i = 0;
	while (i < 10)
		count[i++] = 0;
	i = 0;
	while (secret[i] != '\0')
	{
		if (secret[i] == guess[i])
		{
			secret[i] = '0' - 1;
			*bulls = *bulls + 1;
		}
		else
		{
			if (count[secret[i] - '0']++ < 0)
				*cows = *cows + 1;
			if (count[guess[i] - '0']-- > 0)
				*cows = *cows + 1;
		}
		i++;
	}
}

char		*getHint(char *secret, char *guess)
{
	int		bulls;
	int		cows;
	char	*ret;
	char	*bulls_str;
	char	*cows_str;

	bulls = 0;
	cows = 0;
	count_animals(secret, guess, &bulls, &cows);
	bulls_str = ft_strjoin(ft_itoa(bulls), "A");
	cows_str = ft_strjoin(ft_itoa(cows), "B");
	ret = ft_strjoin(bulls_str, cows_str);
	bulls_str = ft_memfree(bulls_str, NULL);
	cows_str = ft_memfree(cows_str, NULL);
	return (ret);
}
