/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttunc <ttunc@student.42istanbul.com.tr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/17 21:09:34 by ttunc             #+#    #+#             */
/*   Updated: 2024/02/17 21:14:06 by ttunc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_is_prime(int nb) // Fonksiyonumuzda 1 adet integer tipinde parametre gönderilmesini istiyoruz.
{
	int	i; // i adında integer bir değişken tanımlıyoruz.

	i = 2; // i değişkeninin değerini 2'ye eşitliyoruz
	if (nb <= 1) // nb değişkeninin değeri 1'den küçükse/eşitse bu koşula giriyoruz.
		return (0); // 0 döndürüp ekrana yazdırıyoruz.
	while (i <= (nb / 2)) // i değişkeninin değeri nb değişkeninin değerinin 2'ye bölümünden küçükse/eşitse bu döngüye giriyoruz.
	{
		if (!(nb % i)) // nb değişkeninin değerinin i değişkeninin değerine modundan kalan varsa bu koşula giriyoruz.
			return (0); // 0 döndürüp ekrana yazdırıyoruz.
		else
			i += 1; // i'nin değerini 1 arttırıyoruz.
	}
	return (1); // 1 döndürüp ekrana yazdırıyoruz.
}

/*int main (void)
{
	printf("%d -> %d\n", -3965, ft_is_prime(-3965));
	printf("%d -> %d\n", -12, ft_is_prime(-12));
	printf("%d -> %d\n", 0, ft_is_prime(0));
	printf("%d -> %d\n", 1, ft_is_prime(1));
	printf("%d -> %d\n", 2, ft_is_prime(2));
	printf("%d -> %d\n", 4219, ft_is_prime(4219));
	printf("%d -> %d\n", 7853, ft_is_prime(7853));
	printf("%d -> %d\n", 78989, ft_is_prime(78989));
	printf("%d -> %d\n", 2147483647, ft_is_prime(2147483647));
	return (0);
}*/
