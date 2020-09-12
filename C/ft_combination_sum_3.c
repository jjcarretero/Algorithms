/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_combination_sum_3.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcarrete <jcarrete@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/12 23:01:39 by jcarrete          #+#    #+#             */
/*   Updated: 2020/09/12 23:01:39 by jcarrete         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**	typedef struct		s_traverse
**	{
**		int **ret;
**		int	ret_index;
**		int	*current;
**		int	current_index;
**	}					t_traverse;
*/

static void	traverse_single(int k, int n, t_traverse *trav, int start)
{
	if (start > n || n > 9)
		return ;
	else
	{
		(trav->current)[trav->current_index] = n;
		trav->ret = realloc(trav->ret, sizeof(int *) * (trav->ret_index + 1));
		(trav->ret)[trav->ret_index] = malloc(sizeof(int) *\
										(trav->current_index + 1));
		ft_memcpy((trav->ret)[trav->ret_index], trav->current, sizeof(int) *\
								(trav->current_index + 1));
		trav->ret_index += 1;
		return ;
	}
}

static void	traverse(int k, int n, t_traverse *trav, int start)
{

	int i;

	if (k == 1)
	{
		traverse_single(k , n, trav, start);
		return ;
	}
	else
	{
		i = start;
		while (i <= (n / k) && i <= 9)
		{
			(trav->current)[trav->current_index] = i;
			trav->current_index += 1;
			if ((i + 1) * (k - 1) <= (n - i))
				traverse(k - 1, n - i, trav, i + 1);
			trav->current_index -= 1;
			i++;
		}
	}
}

static void	initiate_struct(t_traverse *trav, int k)
{
	trav->ret = NULL;
	trav->ret_index = 0;
	trav->current = malloc(sizeof(int) * k);
	trav->current_index = 0;
}

int			**combinationSum3(int k, int n,\
					int *returnSize, int **returnColumnSizes)
{
	t_traverse	trav;
	int			i;

	*returnSize = 0;
	initiate_struct(&trav, k);
	traverse(k, n, &trav, 1);
	*returnSize = trav.ret_index;
	if (trav.ret_index > 0)
	{
		(*returnColumnSizes) = malloc(sizeof(int) * trav.ret_index);
		i = 0;
		while (i < trav.ret_index)
		{
			(*returnColumnSizes)[i] = k;
			i++;
		}
	}
	free(trav.current);
	return (trav.ret);
}
