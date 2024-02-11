/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttunc <ttunc@student.42istanbul.com.tr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 20:10:03 by ttunc             #+#    #+#             */
/*   Updated: 2024/02/07 14:19:57 by ttunc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	write_n(int a, int b)
{
	char	c;

	c = '0' + (a / 10);
	ft_putchar(c);
	c = '0' + (a % 10);
	ft_putchar(c);
	write(1, " ", 1);
	c = '0' + (b / 10);
	ft_putchar(c);
	c = '0' + (b % 10);
	ft_putchar(c);
	if (a != 98)
		write(1, ", ", 2);
}

void	ft_print_comb2(void)
{
	int	a;
	int	b;

	a = 0;
	b = 1;
	while (a <= 98)
	{
		while (b <= 99)
		{
			write_n(a, b);
			b++;
		}
		a++;
		b = a + 1;
	}
}
