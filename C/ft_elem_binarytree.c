/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_elem_binarytree.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcarrete <jcarrete@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/05 15:46:49 by jcarrete          #+#    #+#             */
/*   Updated: 2020/09/05 15:46:49 by jcarrete         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

int *merge_trees(int *tree1, int ind1, int *tree2, int ind2)
{
	int	*ret;
	int	indret;
	int	i;
	int	j;

	if(!(ret = malloc(sizeof(int) * (ind1 + ind2))))
		return (NULL);
	i = 0;
	j = 0;
	indret = 0;
	while(i < ind1 && j < ind2)
	{
		ret[indret++] = ft_min(tree1[i], tree2[j]);
		tree1[i] <= tree2[j] ? i++ : j++;
	}
	while (i < ind1)
		ret[indret++] = tree1[i++];
	while (j < ind2)
		ret[indret++] = tree2[j++];
	return (ret);
}

void inorder_tree(struct TreeNode *root, int *tree, int *ind)
{
	if (!root)
		return ;
	inorder_tree(root->left, tree, ind);
	tree[(*ind)++] = root->val;
	inorder_tree(root->right, tree, ind);
}

int *getAllElements(struct TreeNode *root1, struct TreeNode *root2, int *returnSize)
{
	int	tree1[5000];
	int	tree2[5000];
	int	ind1;
	int	ind2;

	ft_bzero(tree1, sizeof(tree1));
	ft_bzero(tree2, sizeof(tree2));
	ind1 = 0;
	ind2 = 0;
	inorder_tree(root1, tree1, &ind1);
	inorder_tree(root2, tree2, &ind2);
	*returnSize = ind1 + ind2;
	return (merge_trees(tree1, ind1, tree2, ind2));
}
