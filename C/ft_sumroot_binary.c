/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sumroot_binary.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcarrete <jcarrete@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/08 15:17:34 by jcarrete          #+#    #+#             */
/*   Updated: 2020/09/08 15:17:34 by jcarrete         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft.h"

/* typedef struct	s_treenode
** {
** 	int					val;
** 	struct s_treenode	*left;
** 	struct s_treenode	*right;
** }				t_treenode;
*/

void				depth_first_search(t_treenode *root, int val, int *sum)
{
	if (!root)
		return ;
	val = val * 2 + root->val;
	if (!root->left && !root->right)
		*sum += val;
	depth_first_search(root->left, val, sum);
	depth_first_search(root->right, val, sum);
}

int				sumRootToLeaf(t_treenode *root)
{
	int	sum;

	sum = 0;
	depth_first_search(root, 0, &sum);
	return (sum);
}
