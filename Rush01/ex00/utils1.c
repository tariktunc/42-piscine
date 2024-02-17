/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils1.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttunc <ttunc@student.42istanbul.com.tr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/17 21:09:34 by ttunc             #+#    #+#             */
/*   Updated: 2024/02/17 21:20:43 by ttunc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "utils.h"

void	fill_matrix_by_num(int **matrix, int size, int num)
{
	int	i;
	int	j;

	i = -1;
	while (++i < size)
	{
		j = -1;
		while (++j < size)
			matrix[i][j] = num;
	}
}

void	print_result(int **grid, int size)
{
	int		i;
	int		j;
	char	c;

	i = 0;
	while (++i <= size)
	{
		j = 0;
		while (++j <= size)
		{
			c = grid[i][j] + '0';
			write(1, &c, 1);
			if (j != size)
				write(1, " ", 1);
		}
		write(1, "\n", 1);
	}
}

bool	check_util(int **grid, int *arr_lr, int *arr_td, t_data *data)
{
	if (data->pos_j == data->size)
		if (!check_left_right(grid, arr_lr, data))
			return (false);
	if (!check_top_down(grid, arr_td, data))
		return (false);
	return (true);
}
