/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttunc <ttunc@student.42istanbul.com.tr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/17 21:09:34 by ttunc             #+#    #+#             */
/*   Updated: 2024/02/17 21:20:31 by ttunc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdbool.h>
#include "utils.h"

int	main(int argc, char **argv)
{
	int		**input_nums;
	t_size	data_size;

	if (argc != 2)
	{
		write(1, "Error\n", 6);
		return (1);
	}
	input_nums = check_input(argv[1], &data_size);
	if (!input_nums)
	{
		write(1, "Error\n", 6);
		return (2);
	}
	if (!solve_puzzle(input_nums, &data_size))
	{
		write(1, "Solution does not exist!\n", 25);
		free_int_matrix(input_nums, data_size.i);
		return (3);
	}
	free_int_matrix(input_nums, data_size.i);
	return (0);
}
