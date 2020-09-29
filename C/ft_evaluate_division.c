/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_evaluate_division.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcarrete <jcarrete@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/27 17:02:04 by jcarrete          #+#    #+#             */
/*   Updated: 2020/09/27 17:02:04 by jcarrete         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

/*
**	typedef struct		s_node
**	{
**		char	name[6];
**	}					t_node;
**
**	typedef struct		s_graph
**	{
**		int		nodes_size;
**		t_node	node_array[40];
**		double	map[40][40];
**	}					t_graph;
*/

void	check_graph_edges(t_graph *graph)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	while (i < graph->nodes_size)
	{
		j = 0;
		while (j < graph->nodes_size)
		{
			k = 0;
			while (k < graph->nodes_size)
			{
				if (graph->map[j][k] == -1 && graph->map[j][i] != -1 && graph->map[i][k] != -1)
					graph->map[j][k] = graph->map[j][i] * graph->map[i][k];
				k++;
			}
			j++;
		}
		i++;
	}
}

int		check_graph_node(t_graph *graph, char *equation)
{
	int	i;

	i = 0;
	while (i < graph->nodes_size)
	{
		if (ft_strcmp(graph->node_array[i].name, equation) == 0)
			return (i);
		i++;
	}
	ft_strcpy(graph->node_array[i].name, equation);
	graph->nodes_size += 1;
	return ((graph->nodes_size) - 1);
}

void	create_graph_map(t_graph *graph, char ***equations, int equationsSize, double *values)
{
	int		i;
	int		j;
	int		elem_a;
	int		elem_b;

	i = 0;
	while (i < 40)
	{
		j = 0;
		while (j < 40)
		{
			graph->map[i][j] = -1.0;
			j++;
		}
		i++;
	}
	i = 0;
	while (i < equationsSize)
	{
		elem_a = check_graph_node(graph, equations[i][0]);
		elem_b = check_graph_node(graph, equations[i][1]);
		graph->map[elem_a][elem_b] = values[i];
		graph->map[elem_b][elem_a] = 1 / values[i];
		i++;
	}
	check_graph_edges(graph);
}

double	check_querie_in_graph(t_graph *graph, char *elem_a, char *elem_b)
{
	int	ret_a;
	int	ret_b;

	ret_a = check_graph_node(graph, elem_a);
	ret_b = check_graph_node(graph, elem_b);
	return graph->map[ret_a][ret_b];
}

double	*calcEquation(char ***equations, int equationsSize, int *equationsColSize,
						double *values, int valuesSize,
						char ***queries, int queriesSize, int *queriesColSize,
						int *returnSize)
{
	int		i;
	t_graph	graph;
	double	*ret;

	ret = ft_calloc(sizeof(double), queriesSize);
	create_graph_map(&graph, equations, equationsSize, values);
	*returnSize = queriesSize;
	i = 0;
	while (i < queriesSize)
	{
		ret[i] = check_querie_in_graph(&graph, queries[i][0], queries[i][1]);
		i++;
	}
	return (ret);
}
