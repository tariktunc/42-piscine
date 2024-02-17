/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttunc <ttunc@student.42istanbul.com.tr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/17 21:09:34 by ttunc             #+#    #+#             */
/*   Updated: 2024/02/17 21:14:04 by ttunc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_sqrt(int nb) // Fonksiyonumuzda 1 adet integer tipinde parametre gönderilmesini istiyoruz.
{
	long	index; // index adında long tipinde bir değişken tanımlıyoruz.
	long	b;  // b adında long tipinde bir değişken tanımlıyoruz.

	b = nb; // nb değişkeninin değerini b değişkenine eşitliyoruz.
	if (b <= 0) // b değişkeninin değeri 0'dan küçükse/eşitse bu koşula giriyoruz.
	{
		return (0); // 0 döndürüp ekrana yazdırıyoruz.
	}
	if (b == 1) // b değişkeninin değeri 1'e eşitse bu koşula giriyoruz.
	{
		return (1); // 1 döndürüp ekrana yazdırıyoruz.
	}
	index = 2; // index değerini 2'ye eşitliyoruz.
	if (b >= 2) // b değişkeninin değeri 2'den büyükse/eşitse bu koşula giriyoruz.
	{
		while (index * index <= b) // index değişkeninin değerinin kendiyle çarpımı b değerinden küçükse/eşitse bu döngüye giriyoruz.
		{
			if (index * index == b) // index değişkeninin değerinin kendiyle çarpımı b'ye eşitse bu koşula giriyoruz.
			{
				return (index); // index değerini döndürüp ekrana yazdırıyoruz.
			}
			index++; // index değerini 1 arttırıyoruz.
		}
	}
	return (0); // 0 döndürüp ekrana yazdırıyoruz.
}

/*int    main(void)
{
	printf("sqrt of %d is %d\n", -20, ft_sqrt(-20));
	printf("sqrt of %d is %d\n", 0, ft_sqrt(0));
	printf("sqrt of %d is %d\n", 1, ft_sqrt(1));
	printf("sqrt of %d is %d\n", 2, ft_sqrt(2));
	printf("sqrt of %d is %d\n", 20, ft_sqrt(20));
    return (0);
}*/
