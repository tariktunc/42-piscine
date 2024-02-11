/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttunc <ttunc@student.42istanbul.com.tr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 01:08:54 by ttunc             #+#    #+#             */
/*   Updated: 2024/02/12 01:26:38 by ttunc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

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

int main()
{
    char str[] = "Hello World"; 
    char to_find[] = "Wor";
    printf("%s", ft_strstr(str, to_find));
}

// Bu fonksiyon, str dizisinde to_find dizisinin alt dizisini bulur. Eğer bulursa, str dizisinin to_find dizisinin alt dizisini bulduğu indeksi döndürür. Eğer bulamazsa, 0 döndürür.