/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttunc <ttunc@student.42istanbul.com.tr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/17 21:09:34 by ttunc             #+#    #+#             */
/*   Updated: 2024/02/17 21:14:10 by ttunc            ###   ########.fr       */
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

int	ft_find_next_prime(int nb) // Fonksiyonumuzda 1 adet integer tipinde parametre gönderilmesini istiyoruz.
{
	if (nb < 2) // nb değişkeninin değeri 2'den küçükse bu koşula giriyoruz.
		return (2); // 2 döndürüp ekrana yazdırıyoruz.
	while (nb >= 2) // nb değişkeninin değeri 2'den büyükse/eşitse bu döngüye giriyoruz.
	{
		if (ft_is_prime(nb) == 1) // ft_is_prime fonksiyonuna nb değerini gönderiyoruz, çıkan sonuç 1'e eşitse bu koşula giriyoruz.
			return (nb); // nb değişkeninin değerini döndürüp ekrana yazdırıyoruz.
		nb++; // nb'yi 1 arttırıyoruz.
	}
	return (0); // 0 döndürüp ekrana yazdırıyoruz.
}

/*int main (void)
{
	printf("%d -> %d\n", -2316, ft_find_next_prime(-2316));
	printf("%d -> %d\n", 0, ft_find_next_prime(0));
	printf("%d -> %d\n", 1, ft_find_next_prime(1));
	printf("%d -> %d\n", 2, ft_find_next_prime(2));
	printf("%d -> %d\n", 7853, ft_find_next_prime(7853));
	printf("%d -> %d\n", 78989, ft_find_next_prime(78989));
	printf("%d -> %d\n", 2147483643, ft_find_next_prime(2147483643));
	printf("%d -> %d\n", 2147483645, ft_find_next_prime(2147483645));
	printf("%d -> %d\n", 2147483646, ft_find_next_prime(2147483646));
	printf("%d -> %d\n", 2147483647, ft_find_next_prime(2147483647));
	return (0);
}*/
