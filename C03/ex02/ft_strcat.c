/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttunc <ttunc@student.42istanbul.com.tr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 00:24:03 by ttunc             #+#    #+#             */
/*   Updated: 2024/02/12 00:45:07 by ttunc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strcat(char *dest, char *src) // Fonksiyonumuzda 2 adet char tipinde parametre gönderilmesini istiyoruz.
{
	int	x; // x adında integer bir değişken tanımlıyoruz.
	int	y; // y adında integer bir değişken tanımlıyoruz.

	x = 0; // x değişkenini 0'a eşitliyoruz.
	while (dest[x]) // dest değişkeninin x değerindeki indeksi varsa bu koşula giriyoruz.
		x++; // x değerini 1 arttırıyoruz.
	y = 0; // y değişkenini 0'a eşitliyoruz.
	while (src[y]) // src değişkeninin y değerindeki indeksi varsa bu koşula giriyoruz.
	{
		dest[x + y] = src[y]; // src değişkenin y değerindeki indeksini dest değişkeninin x ve y değerinin toplamındaki indeksine eşitliyoruz.
		y++; // y değerini 1 arttırıyoruz.
	}
	dest[x + y] = '\0'; // dest değişkeninin x ve y değerinin toplamındaki indeksini boşluğa eşitliyoruz.
	return (dest); // dest değişkeninin değerini döndürüp ekrana yazdırıyoruz.
}

int main()
{
    char dest[50] = "Hello"; // dest adında 50 karakterlik bir dizi tanımlıyoruz ve içerisine "Hello" yazıyoruz.
    char src[] = "World!"; // src adında bir dizi tanımlıyoruz ve içerisine "World!" yazıyoruz.
    printf("1 => %s\n", ft_strcat(dest, src)); // ft_strcat fonksiyonuna dest ve src değişkenlerini gönderip ekrana yazdırıyoruz.
}

// Ekrana yazdırılan sonuç: HelloWorld!

// Programın çıktısı: 1 => HelloWorld!

// Programın çıktısı beklenen sonuçla aynıdır. ft_strcat fonksiyonu başarılı bir şekilde çalışmıştır.

// ft_strcat fonksiyonu, dest değişkeninin son indeksinden başlayarak src değişkeninin başlangıcına kadar olan kısmı dest değişkenine ekler ve sonrasında dest değişkeninin son indeksine '\0' karakterini ekler. Böylece dest değişkeninin son indeksinden başlayarak src değişkeninin başlangıcına kadar olan kısmı dest değişkenine eklemiş oluruz.

// ft_strcat fonksiyonu, string.h kütüphanesinde bulunan strcat fonksiyonunun aynısıdır. strcat fonksiyonu, dest değişkeninin son indeksinden başlayarak src değişkeninin başlangıcına kadar olan kısmı dest değişkenine ekler ve sonrasında dest değişkeninin son indeksine '\0' karakterini ekler. Böylece dest değişkeninin son indeksinden başlayarak src değişkeninin başlangıcına kadar olan kısmı dest değişkenine eklemiş oluruz.

