/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttunc <ttunc@student.42istanbul.com.tr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/17 21:09:34 by ttunc             #+#    #+#             */
/*   Updated: 2024/02/17 21:11:42 by ttunc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb(void)
{
	int	a; // a adında bir integer değişken tanımlandı
	int	b; // b adında bir integer değişken tanımlandı
	int	c; // c adında bir integer değişken tanımlandı

	a = '0'; // a değişkeni 0'a eşitlendi
	while (a <= '7') // a değişkeni 7'den küçük veya eşitse döngüye gir
	{
		b = a + 1; // b değişkeni a değişkeninin bir fazlası
		while (b <= '8') // b değişkeni 8'den küçük veya eşitse döngüye gir
		{
			c = b + 1; // c değişkeni b değişkeninin bir fazlası
			while (c <= '9') // c değişkeni 9'den küçük veya eşitse döngüye gir
			{
				write(1, &a, 1); // a değişkenini ekrana yazdır
				write(1, &b, 1); // b değişkenini ekrana yazdır
				write(1, &c, 1); // c değişkenini ekrana yazdır
				if (a != '7') // eğer a değişkeni 7'ye eşit değilse
					write(1, ", ", 2); // ekrana ", " yazdır
				c++; // c değişkenini 1 arttır
			}
			b++; // b değişkenini 1 arttır
		}
		a++; // a değişkenini 1 arttır
	}
}
/*int	main(void)
{
	ft_print_comb();
	return (0);
}*/
