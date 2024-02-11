/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttunc <ttunc@student.42istanbul.com.tr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/11 22:46:55 by ttunc             #+#    #+#             */
/*   Updated: 2024/02/11 23:56:24 by ttunc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strcmp(char *s1, char *s2) // Fonksiyonumuzda 2 adet char tipinde parametre gönderilmesini istiyoruz.
{
	int	i; // i adında integer bir değişken tanımlıyoruz.

	i = 0; // i değişkenini 0'a eşitliyoruz.
	while (s1[i] == s2[i] && s1[i] && s2[i]) // s1 değişkenin i değerindeki indeksi s2 değişkeninin i değerindeki indeksine eşitse ve s1 değişkeninin i değerindeki indeksi varsa ve s2 değişkeninin i değerindeki indeksi varsa bu koşula giriyoruz.
	{
		i++; // i değerini 1 arttırıyoruz.
	}
	return (s1[i] - s2[i]); // s1 değişkeninin i değerindeki indeksinden s2 değişkeninin i değerindeki indeksinin ASCII değerlerinin karşılıklarını çıkartıp döndürüyoruz ve ekrana yazdırıyoruz.
}

int	main()
{
	printf("%d", ft_strcmp("abcc", "abcd")); // 99 - 100 = -1
	printf("\n%d", strcmp("abcd", "abcc")); // 100 - 99 = 1
}

//'c' karakterinin ASCII kodu 99'dur.
// 'd' karakterinin ASCII kodu 100'dür.

// ft_strcmp fonksiyonu, s1 ve s2 değişkenlerinin i değerindeki indekslerinin ASCII değerlerinin karşılıklarını çıkartıp döndürüyor. Eğer s1 değişkeninin i değerindeki indeksi s2 değişkeninin i değerindeki indeksinden küçükse negatif, büyükse pozitif, eşitse 0 döndürüyor.

// ft_strcmp, iki karakter dizisini (string) karşılaştırır ve farklılıkları tespit etmek için ASCII değerlerini kullanır. İki dizinin her bir karakterini sırayla karşılaştırır ve ilk farklı karakterin ASCII değerlerinin farkını döndürür. Eğer iki dize tamamen eşitse, sonuç 0 olur.