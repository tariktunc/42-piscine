/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttunc <ttunc@student.42istanbul.com.tr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/17 21:09:34 by ttunc             #+#    #+#             */
/*   Updated: 2024/02/17 21:12:26 by ttunc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_numeric(char *str) // Fonksiyonumuzda 1 adet char tipinde parametre gönderilmesini istiyoruz.
{
	int	i; // i adında integer bir değişken tanımlıyoruz.

	i = 0; // i değerini 0'a eşitliyoruz.
	while (str[i]) // str değişkeninin i değerindeki indeksi varsa bu döngüye giriyoruz.
	{
		if (!(str[i] >= 48 && str [i] <= 57)) // str değişkeninin i indeksindeki değeri ASCII tablosundaki 48 değerinden büyük/eşit değilse ve 57 değerinden küçük/eşit değilse döngüye giriyoruz.
		{
			return (0); // 0 döndürüp ekrana yazdırıyoruz.
		}
		i++; // i değerini 1 arttırıyoruz.
	}
	return (1); // 1 döndürüp ekrana yazdırıyoruz.
}
/*
int	main()
{
	printf("%d", ft_str_is_numeric("05092000"));
	printf("\n%d", ft_str_is_numeric("0509hasan2000"));
	printf("\n%d", ft_str_is_numeric(".(hasan05kahra_?"));
    printf("\n%d", ft_str_is_numeric(""));
}
*/
