/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttunc <ttunc@student.42istanbul.com.tr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/17 21:09:34 by ttunc             #+#    #+#             */
/*   Updated: 2024/02/17 21:13:15 by ttunc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strstr(char *str, char *to_find) // Fonksiyonumuzda 2 adet char tipinde parametre gönderilmesini istiyoruz.
{
	int	i; // i adında integer bir değişken tanımlıyoruz.
	int	j; // j adında integer bir değişken tanımlıyoruz.

	i = 0; // i değişkenini 0'a eşitliyoruz.
	if (to_find[0] == '\0') // to_find değişkeninin sıfırıncı indeksi boşluğa eşitse bu koşula giriyoruz.
		return (str); // str değişkenini döndürüp ekrana yazdırıyoruz.
	while (str[i]) // str değişkeninin i değerindeki indeksi varsa bu koşula giriyoruz.
	{
		j = 0; // j değişkenini 0'a eşitliyoruz.
		while (str[i + j] == to_find[j] && str[i]) // str değişkeninin i ve j değerlerinin toplamındaki indeksi to_find değişkeninin j değerindeki indekse eşitse ve str değişkeninin i değerindeki indeksi varsa bu koşula giriyoruz.
		{
			if (to_find[j + 1] == '\0') // to_find değişkenin j değerinin bir fazlasındaki indeksi boşluğa eşitse bu koşula giriyoruz.
				return (&str[i]); // str değişkeninin i değerindeki indeksinin karakterini döndürüp yazdırıyoruz. Bu adres, daha sonra verilen to_find dizisiyle eşleşen uygun alt diziye döndürmek için kullanılan pointerda saklanır.
			j++; // j değerini 1 arttırıyoruz.
		}
		i++; // i değerini 1 arttırıyoruz.
	}
	return (0); // 0 döndürüp ekrana yazdırıyoruz.
}

/*int	main()
{
	char str[] = "42İstanbul havuz öğrencisi Hasancan KAHRAMAN";
	char to_find[] = "Hasancan";
	printf("%s", ft_strstr(str, to_find));
}*/
