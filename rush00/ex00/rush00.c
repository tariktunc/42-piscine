/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enisik <enisik@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 23:13:55 by enisik            #+#    #+#             */
/*   Updated: 2024/01/28 23:17:10 by enisik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	rush(int x, int y)
{
	char	column;
	char	row;

	row = 1;
	while (row <= y)
	{
		column = 1;
		while (column <= x)
		{
			if (((column == 1 || column == x) && (row == 1 || row == y)))
				ft_putchar('o');
			else if (column == 1 || column == x)
				ft_putchar('|');
			else if (row == 1 || row == y)
				ft_putchar('-');
			else
				ft_putchar(' ');
			column++;
		}
		ft_putchar('\n');
		row++;
	}
}
