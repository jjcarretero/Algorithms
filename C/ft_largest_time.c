/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_largest_time.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcarrete <jcarrete@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/01 13:31:24 by jcarrete          #+#    #+#             */
/*   Updated: 2020/09/01 17:01:24 by jcarrete         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

static char	*ft_hourtoa(int h)
{
	int		hrs;
	int		mins;
	char	*h_str;
	char	*m_str;
	char	*ret;

	hrs = h / 60;
	mins = h % 60;
	m_str = (mins < 10) ? ft_strjoin("0", ft_itoa(mins)) : ft_itoa(mins);
	if (hrs < 10)
		ft_strjoin("0", ft_strjoin(ft_itoa(hrs), ":"));
	else
		ft_strjoin(ft_itoa(hrs), ":");
	ret = ft_strjoin(h_str, m_str);
	ft_memfree(h_str, NULL);
	ft_memfree(m_str, NULL);
	return (ret);
}

static int	heap_algorithm_min(int *A, int h)
{
	int		i;
	int		minute;
	int		ret;
	int		max;

	ret = -2147483648;
	i = 2;
	while (i < 4)
	{
		ft_swap(&A[2], &A[i]);
		minute = A[2]*10 + A[3];
		if (minute < 60)
		{
			max = h*60 + minute;
			ret = ft_max(ret, max);
		}
		ft_swap(&A[2], &A[i]);
		i++;
	}
	return (ret);
}

static int	heap_algorithm_hour(int* A)
{
	int		i;
	int		j;
	int		hour;
	int		ret;

	i = 0;
	j = 1;
	ret = -2147483648;
	while (i < 4)
	{
		ft_swap(&A[0], &A[i]);
		while (j < 4)
		{
			ft_swap(&A[1], &A[j]);
			hour = A[0]*10 + A[1];
			if (hour < 24)
				ret = ft_max(ret, heap_algorithm_min(A, hour));
			ft_swap(&A[1], &A[j]);
			j++;
		}
		ft_swap(&A[0], &A[i]);
		j = 1;
		i++;
	}
	return (ret);
}

char 		*largestTimeFromDigits(int* A, int ASize)
{
	int		nb;
	char	*ret;

	if (ASize != 4)
		return (0);
	nb = heap_algorithm_hour(A);
	if (nb == -2147483648)
	{
		if (!(ret = (char*)malloc(sizeof(char) * 1)))
			return (0);
		ret[0] = (char)NULL;
	}
	else
		ret = ft_hourtoa(nb);
	return (ret);
}
