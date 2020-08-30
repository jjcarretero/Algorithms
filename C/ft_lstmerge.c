/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmerge.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcarrete <jcarrete@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/30 23:21:22 by jcarrete          #+#    #+#             */
/*   Updated: 2020/08/30 23:21:22 by jcarrete         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft.h"

t_list*	mergeTwoLists(t_list* lst1, t_list* lst2)
{
	if (!lst1 && !lst2)
		return (NULL);
	if (!lst1 || !lst2)
		return ((!lst1) ? lst2 : lst1);
	if (lst1->content <= lst2->content)
	{
		lst1->next = mergeTwoLists(lst1->next, lst2);
		return (lst1);
	}
	return (mergeTwoLists(lst2, lst1));
}
