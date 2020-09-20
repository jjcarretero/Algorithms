/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unique_paths_3.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcarrete <jcarrete@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/20 16:45:37 by jcarrete          #+#    #+#             */
/*   Updated: 2020/09/20 16:45:37 by jcarrete         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

typedef struct	s_grid
{
	int	**grid_ref;
	int	x_size;
	int	y_size;
	int	path_count;
	int	zero_count;
	int	start_x;
	int	start_y;
}				t_grid;

static int		is_valid_path(int x, int y, int x_size, int y_size)
{
	if (x < 0 || y < 0 || x >= x_size || y >= y_size)
		return (1);
	return (0);
}

static void		depth_first_search(t_grid *map, int x, int y, int zero_check)
{
	int	temp;

	if ((is_valid_path(x, y, map->x_size, map->y_size)) != 0)
		return ;
	else if ((map->grid_ref[y][x] == -1)\
		|| ((map->grid_ref[y][x] == 2) && (zero_check != map->zero_count)))
		return ;
	if ((map->grid_ref[y][x] == 2) && (zero_check == map->zero_count))
	{
		map->path_count += 1;
		return ;
	}
	temp = map->grid_ref[y][x];
	map->grid_ref[y][x] = -1;
	depth_first_search(map, x, y - 1, zero_check + 1);
	depth_first_search(map, x, y + 1, zero_check + 1);
	depth_first_search(map, x - 1, y, zero_check + 1);
	depth_first_search(map, x + 1, y, zero_check + 1);
	map->grid_ref[y][x] = temp;
}

static void		initiate_struct(int **grid, int grid_size,\
							int *grid_col_size, t_grid *map)
{
	int		i;
	int		j;

	map->grid_ref = grid;
	map->y_size = grid_size;
	map->x_size = grid_col_size[0];
	map->zero_count = 0;
	map->path_count = 0;
	i = 0;
	while (i < grid_size)
	{
		j = 0;
		while (j < grid_col_size[0])
		{
			if (grid[i][j] == 0)
				map->zero_count += 1;
			if (grid[i][j] == 1)
			{
				map->start_x = j;
				map->start_y = i;
			}
			j++;
		}
		i++;
	}
}

int				uniquePathsIII(int **grid, int gridSize, int *gridColSize)
{
	t_grid	map;
	int		zero_check;

	initiate_struct(grid, gridSize, gridColSize, &map);
	zero_check = -1;
	depth_first_search(&map, map.start_x, map.start_y, zero_check);
	return (map.path_count);
}
