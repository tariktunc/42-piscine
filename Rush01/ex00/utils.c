/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttunc <ttunc@student.42istanbul.com.tr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/17 21:09:34 by ttunc             #+#    #+#             */
/*   Updated: 2024/02/17 21:20:38 by ttunc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

unsigned int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		++i;
	return (i);
}

int	**make_int_matrix(int i, int j)
{
	int		**matrix;
	int		k;

	matrix = (int **)malloc(sizeof(int *) * i);
	if (!matrix)
		return (NULL);
	k = -1;
	while (++k < i)
	{
		matrix[k] = (int *)malloc(sizeof(int) * j);
		if (!matrix)
		{
			j = -1;
			while (++j < k)
				free(matrix[j]);
			free(matrix);
			return (NULL);
		}
	}
	return (matrix);
}

void	free_str_matrix(char **matrix, int alloc_count)
{
	int	i;

	i = 0;
	while (i < alloc_count)
	{
		free(matrix[i]);
		++i;
	}
	free(matrix);
}

void	free_int_matrix(int **matrix, int alloc_count)
{
	int	i;

	i = 0;
	while (i < alloc_count)
	{
		free(matrix[i]);
		++i;
	}
	free(matrix);
}

void	ft_rev_int_tab(int *tab, int size)
{
	int		start;
	int		end;
	int		tmp;

	start = 0;
	end = size - 1;
	while (start < end)
	{
		tmp = tab[start];
		tab[start] = tab[end];
		tab[end] = tmp;
		++start;
		--end;
	}
}
