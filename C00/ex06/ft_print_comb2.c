/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttunc <ttunc@student.42istanbul.com.tr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 20:10:03 by ttunc             #+#    #+#             */
/*   Updated: 2024/02/01 17:52:49 by ttunc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(int a, int b)
{
	char	c;

	c = '0' + (a / 10);
	write(1, &c, 1);
	c = '0' + (a % 10);
	write(1, &c, 1);
	write(1, " ", 1);
	c = '0' + (b / 10);
	write(1, &c, 1);
	c = '0' + (b % 10);
	write(1, &c, 1);
	if (a != 98 && a != 99)
		write(1, ",", 1);
	write(1, " ", 1);
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
			ft_putchar(a, b);
			b++;
		}
		a++;
		b = a + 1;
	}
}

int	main(void)
{
	ft_print_comb2();
	return (0);
}
