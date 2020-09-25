/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_largest_number.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcarrete <jcarrete@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/25 17:34:43 by jcarrete          #+#    #+#             */
/*   Updated: 2020/09/25 17:34:43 by jcarrete         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static int		next_ten_pow(int i)
{
	int j;

	if (i == 0)
		return (10);
	j = 1;
	while (i != 0)
	{
		i /= 10;
		j *= 10;
	}
	return (j);
}

static int		sort_comparison(int i, int j)
{
	int i_power;
	int j_power;

	if (j == 0)
		return (1);
	if (i == 0)
		return (0);
	i_power = next_ten_pow(i);
	j_power = next_ten_pow(j);
	if (((long long)j_power * i + j) >= ((long long)i_power * j + i))
		return (1);
	return (0);
}

static char		*largest_nb_string(int *nums, int nums_size)
{
	int		index;
	int		i;
	char	*ret;
	int		current_nb;

	index = 0;
	i = 0;
	ret = (char*)malloc(sizeof(char) * 1000);
	while (i < nums_size)
	{
		current_nb = next_ten_pow(nums[i]);
		while (current_nb > 1)
		{
			ret[index] = ((nums[i] % current_nb) / (current_nb / 10)) + '0';
			current_nb /= 10;
			index++;
		}
		i++;
	}
	ret[index] = '\0';
	return (ret);
}

char			*largestNumber(int *nums, int numsSize)
{
	char	*ret;
	int		i;
	int		j;

	i = 0;
	while (i < numsSize)
	{
		j = i + 1;
		while (j < numsSize)
		{
			if (sort_comparison(nums[i], nums[j]) == 0)
				ft_swap_int(&nums[i], &nums[j]);
			j++;
		}
		i++;
	}
	if (nums[0] == 0 || numsSize == 0)
	{
		ret = (char*)malloc(sizeof(char) * 2);
		ret[0] = '0';
		ret[1] = '\0';
	}
	else
		ret = largest_nb_string(nums, numsSize);
	return (ret);
}
