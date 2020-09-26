/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_teemo_attacking.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcarrete <jcarrete@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/26 12:39:48 by jcarrete          #+#    #+#             */
/*   Updated: 2020/09/26 12:39:48 by jcarrete         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	findPoisonedDuration(int *timeSeries, int timeSeriesSize, int duration)
{
	int	ret;
	int	i;
	int	poison;

	if (timeSeriesSize == 0 || duration == 0)
		return (0);
	else if (timeSeriesSize == 1)
		return (duration);
	else
	{
		ret = duration;
		i = 1;
		while (i < timeSeriesSize)
		{
			poison = ft_min(timeSeries[i] - timeSeries[i - 1], duration);
			ret += poison;
			i++;
		}
		return (ret);
	}
}
