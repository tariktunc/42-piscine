/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttunc <ttunc@student.42istanbul.com.tr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/17 21:09:34 by ttunc             #+#    #+#             */
/*   Updated: 2024/02/17 21:12:10 by ttunc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n) // Fonksiyonumuzda 2 adet char tipinde ve 1 adet unsigned integer tipinde parametre gönderilmesini istiyoruz.
{
	unsigned int	i; // i adında unsigned integer tipinde bir değişken oluşturuyoruz.

	i = 0; // i'nin değerini 0'a eşitliyoruz.
	while (src[i] && i < n) // src değişkeninin i değerindeki indeksi varsa ve i'nin değeri n değerinden küçükse döngüye giriyoruz.
	{
		dest[i] = src[i]; // src değişkeninin i değerindeki indeksini dest değişkeninin i değerindeki indeksine gönderiyoruz.
		i++; // i'nin değerini 1 arttırıyoruz.
	}
	while (i < n) // i değişkeninin değeri n değişkeninin değerinden küçükse döngüye giriyoruz.
	{
		dest[i] = '\0'; // dest değişkeninin i değerindeki indeksini boşluğa eşitliyoruz.
		i++; // i'nin değerini 1 arttırıyoruz.
	}
	return (dest); // dest değerini döndürüp ekrana yazdırıyoruz.
}

/*#include <stdio.h>
int	main()
{
	char src[] = "Hasan";
	char dest[] = "Kahraman01";

	printf("%s", ft_strncpy(dest, src, 2));
	printf("\n%s", ft_strncpy(dest, src, 4));
	printf("\n%s", ft_strncpy(dest, src, 6));
}*/
