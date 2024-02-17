/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttunc <ttunc@student.42istanbul.com.tr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/17 21:09:34 by ttunc             #+#    #+#             */
/*   Updated: 2024/02/17 21:12:32 by ttunc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_uppercase(char *str) // Fonksiyonumuzda 1 adet char tipinde parametre gönderilmesini istiyoruz.
{
	int	i; // i adında integer bir değişken tanımlıyoruz.

	i = 0; // i değerini 0'a eşitliyoruz.
	while (str[i]) // str değişkeninin i değerindeki indeksi varsa bu döngüye giriyoruz.
	{
		if (!(str[i] >= 'A' && str[i] <= 'Z')) // str değişkeninin i değerindeki indeksi büyük A harfinden büyük/eşit değilse ve büyük Z harfinden küçük/eşit değilse bu koşula giriyoruz.
		{
			return (0); // 0 döndürüp ekrana yazdırıyoruz.
		}
		i++; // i değerini 1 arttırıyoruz.
	}
	return (1); // 1 döndürüp ekrana yazdırıyoruz.
}

/*int main()
{
	printf("%d", ft_str_is_uppercase("ABCDEFGH"));
    printf("\n%d", ft_str_is_uppercase("ABCDEFGHaI"));
    printf("\n%d", ft_str_is_uppercase("-_134556ABCDEFGaH67"));
}*/
