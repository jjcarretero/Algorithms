/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_largest_overlap.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcarrete <jcarrete@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/06 16:51:54 by jcarrete          #+#    #+#             */
/*   Updated: 2020/09/06 16:51:54 by jcarrete         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**	typedef struct	s_square
**	{
**		int	**square;
**		int	size;
**	}				t_square;
*/

#include "../includes/libft.h"

int				sliding_array(t_square sq_a, t_square sq_b, int i, int j)
{
	int	up;
	int	left;
	int	down;
	int	right;
	int	ret;

	up = ft_max(i, sq_a.size - 1);
	down = ft_min(i + sq_a.size - 1, 2 * sq_a.size - 2);
	ret = 0;
	while (up <= down)
	{
		left = ft_max(j, sq_a.size - 1);
		right = ft_min(j + sq_a.size - 1, 2 * sq_a.size - 2);
		while (left <= right)
		{
			if (sq_a.square[up - i][left - j] == 1)
				if (sq_a.square[up - i][left - j] ==\
				sq_b.square[up - (sq_a.size - 1)][left - (sq_a.size - 1)])
					ret++;
			left++;
		}
		up++;
	}
	return (ret);
}

int				largestOverlap(int **A, int ASize, int *AColSize,\
					int **B, int BSize, int *BColSize)
{
	t_square	sq_a;
	t_square	sq_b;
	int			ret;
	int			i;
	int			j;

	sq_a.square = A;
	sq_a.size = ASize;
	sq_b.square = B;
	sq_b.size = BSize;
	ret = 0;
	i = 0;
	while (i < (2 * sq_a.size) - 1)
	{
		j = 0;
		while (j < (2 * sq_a.size) - 1)
		{
			ret = ft_max(sliding_array(sq_a, sq_b, i, j), ret);
			j++;
		}
		i++;
	}
	return (ret);
}

/*
**	int main(void)
**	{
**		int *A[] = {(int[]){1,1,0},(int[]){0,1,0},(int[]){0,1,0}};
**		int *B[] = {(int[]){0,0,0},(int[]){0,1,1},(int[]){0,0,1}};
**		int Asize = 3;
**		int Bsize = 3;
**
**		int ret = largestOverlap(A, Asize, &Asize, B, Bsize, &Bsize);
**		printf("ret es %d", ret);
**		return 0;
**	}
*/
