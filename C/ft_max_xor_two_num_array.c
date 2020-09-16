/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_max_xor_two_num_array.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcarrete <jcarrete@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/16 19:04:33 by jcarrete          #+#    #+#             */
/*   Updated: 2020/09/16 19:04:33 by jcarrete         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

/*
**	typedef struct		s_node
**	{
**		struct s_node	*left;
**		struct s_node	*right;
**	}					t_node;
*/

t_node				*new_node(void)
{
	t_node	*ret;

	ret = (t_node *)malloc(sizeof(t_node));
	ret->left = NULL;
	ret->right = NULL;
	return (ret);
}

static void			insert_node(int num_value, t_node *head)
{
	t_node	*curr_node;
	int		i;
	int		temp;

	curr_node = head;
	i = 31;
	while (i >= 0)
	{
		temp = (num_value >> i) & 1;
		if (temp == 0)
		{
			if (!(curr_node->left))
				curr_node->left = new_node();
			curr_node = curr_node->left;
		}
		else
		{
			if (!curr_node->right)
				curr_node->right = new_node();
			curr_node = curr_node->right;
		}
		i--;
	}
}

static void			calculate_xor(t_node **curr_node, int i,\
										int num_value, int *ret)
{
	int temp;

	temp = num_value >> i & 1;
	if (temp == 0)
	{
		if ((*curr_node)->right != NULL)
		{
			(*curr_node) = (*curr_node)->right;
			*ret += ft_pow(2, i);
		}
		else
			(*curr_node) = (*curr_node)->left;
	}
	else
	{
		if ((*curr_node)->left != NULL)
		{
			(*curr_node) = (*curr_node)->left;
			*ret += ft_pow(2, i);
		}
		else
			(*curr_node) = (*curr_node)->right;
	}
}

static int			find_node(int num_value, t_node *head)
{
	t_node	*curr_node;
	int		i;
	int		ret;

	curr_node = head;
	ret = 0;
	i = 31;
	while (i >= 0)
	{
		calculate_xor(&curr_node, i, num_value, &ret);
		i--;
	}
	return (ret);
}

int					findMaximumXOR(int *nums, int numsSize)
{
	t_node	*head;
	int		i;
	int		ret;

	ret = -2147483648;
	head = new_node();
	if (numsSize <= 1)
		return (0);
	else if (numsSize == 2)
		return (nums[0] ^ nums[1]);
	i = 0;
	while (i < numsSize)
	{
		insert_node(nums[i], head);
		i++;
	}
	i = 0;
	while (i < numsSize)
	{
		ret = ft_max(ret, find_node(nums[i], head));
		i++;
	}
	return (ret);
}
