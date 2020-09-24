/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_robot_bounded_in_circle.c                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcarrete <jcarrete@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/17 11:07:16 by jcarrete          #+#    #+#             */
/*   Updated: 2020/09/17 11:07:16 by jcarrete         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

static int	check_exit(int x, int y, int dir)
{
	if (x == 0 && y == 0)
		return (1);
	else if (dir != 1)
		return (1);
	else
		return (0);
}

static void	change_dir(int *dir, char instruction)
{
	if (instruction == 'L')
	{
		*dir += 1;
		if (*dir == 5)
			*dir = 1;
	}
	else if (instruction == 'R')
	{
		*dir -= 1;
		if (*dir == 0)
			*dir = 4;
	}
}

static void	move_robot(int *x, int *y, int dir)
{
	if (dir == 1)
		*y += 1;
	else if (dir == 2)
		*x -= 1;
	else if (dir == 3)
		*y -= 1;
	else if (dir == 4)
		*x += 1;
}

int			isRobotBounded(char *instructions)
{
	int	x;
	int	y;
	int	dir;
	int i;
	int j;

	x = 0;
	y = 0;
	dir = 1;
	i = 0;
	while (i < (int)ft_strlen(instructions))
	{
		if (instructions[i] == 'G')
			move_robot(&x, &y, dir);
		else if (instructions[i] == 'L' || instructions[i] == 'R')
			change_dir(&dir, instructions[i]);
		i++;
	}
	return (check_exit(x, y, dir));
}
