/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttunc <ttunc@student.42istanbul.com.tr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 00:45:58 by ttunc             #+#    #+#             */
/*   Updated: 2024/02/12 00:59:21 by ttunc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb) // Fonksiyonumuzda 2 adet char ve 1 adet unsigned integer tipinde parametre gönderilmesini istiyoruz.
{
	unsigned int	x; // x adında unsigned integer tipinde bir değişken tanımlıyoruz.
	unsigned int	y; // y adında unsigned integer tipinde bir değişken tanımlıyoruz.

	x = 0; // x değişkenini 0'a eşitliyoruz.
	y = 0; // y değişkenini 0'a eşitliyoruz.
	while (dest[x]) // dest değişkeninin x indeksindeki değeri varsa bu koşula giriyoruz.
	x++; // x değerini 1 arttırıyoruz.
	while (y < nb && src[y]) // y değişkeninin değeri nb değişkeninin değerinden küçükse ve src değişkeninin y değerindeki indeksi varsa bu koşula giriyoruz.
	{
		dest[x + y] = src[y]; // src değişkenin y değerindeki indeksini dest değişkeninin x ve y değerinin toplamındaki indeksine eşitliyoruz.
		y++; // y değerini 1 arttırıyoruz.
	}
	dest[x + y] = '\0'; // dest değişkeninin x ve y değerinin toplamındaki indeksini boşluğa eşitliyoruz.
	return (dest); // dest değişkeninin değerini döndürüp ekrana yazdırıyoruz.
}

int main()
{
    char dest[50] = "Hello";
    char src[] = "123456!";
    printf("1 => %s\n", ft_strncat(dest, src, 3)); // ft_strncat fonksiyonuna dest, src ve 3 değişkenlerini gönderip ekrana yazdırıyoruz.
}

// 1. İki tane unsigned integer türünde değişken (`x` ve `y`) tanımlanır ve her ikisi de sıfıra eşitlenir.
// 2. `while` döngüsü kullanılarak, hedef dizenin (`dest`) sonuna kadar (`'\0'` karakterine kadar) ilerlenir. Bu sayede, `x` değişkeni, hedef dizinin uzunluğunu tutar.
// 3. İkinci `while` döngüsü kullanılarak, kaynak dizenin (`src`) maksimum belirtilen sayıda karakteri (`nb`) veya kaynak dizenin sonuna kadar ilerlenir.
// 4. İkinci döngü içinde, her bir karakter `dest` dizisinin sonuna (`x + y` indeksine) kopyalanır ve `y` değişkeni bir arttırılır.
// 5. Döngü sona erdikten sonra, hedef dizinin sonuna NULL ('\0') karakteri eklenir.
// 6. Son olarak, hedef dizi (`dest`) geri döndürülür.
