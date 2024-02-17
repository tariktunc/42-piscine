/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttunc <ttunc@student.42istanbul.com.tr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/17 21:09:34 by ttunc             #+#    #+#             */
/*   Updated: 2024/02/17 21:11:06 by ttunc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size) // Fonksiyonumuzda 2 adet integer tipinde parametre gönderilmesini istiyoruz.
{
	int	i; // i adında integer tipinde bir değişken oluşturuyoruz.
	int	swap; // swap adında integer tipinde bir değişken oluşturuyoruz.

	while (size >= 0) // size değişkeninin değeri 0'dan büyükse/eşitse bu döngüye giriyoruz.
	{
		i = 0; // i değerini 0'a eşitliyoruz.
		while (i < size - 1) // i değişkeninin değeri size değişkeninin değerinin 1 eksiğinden küçükse bu döngüye giriyoruz.
		{
			if (tab[i] > tab[i + 1]) // tab değişkeninin i değerindeki indeksi tab değişkeninin i değerindeki indeksinin 1 fazlasından büyükse bu koşula giriyoruz.
			{
				swap = tab[i]; // tab değişkeninin i değerindeki indeksi swap değişkenine eşitliyoruz.
				tab[i] = tab[i + 1]; // tab değişkeninin i değerindeki indeksinin 1 fazlasını tab değişkenin i değerindeki indeksine eşitliyoruz.
				tab[i + 1] = swap; // swap değişkeninin değerini tab değişkeninin i değerindeki indeksinin 1 fazlasına eşitliyoruz.
			}
			i++; // i değerini 1 arttırıyoruz.
		}
		size--; // size değerini 1 azaltıyoruz.
	}
}

/*int	main()
{
	int tab[6] = {7, 6, 3, 4, 2, 5};
	int size = 6;

	ft_sort_int_tab(tab, size);
	printf("%d, %d, %d, %d, %d, %d", tab[0], tab[1], tab[2], tab[3], tab[4], tab[5]); 
	return (0);
}*/
