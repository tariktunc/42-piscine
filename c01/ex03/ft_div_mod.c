/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttunc <ttunc@student.42istanbul.com.tr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/17 21:09:34 by ttunc             #+#    #+#             */
/*   Updated: 2024/02/17 21:11:19 by ttunc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_div_mod(int a, int b, int *div, int *mod) // Fonksiyonumuzda 4 adet integer tipinde parametre gönderilmesini istiyoruz.
{
	if (b != 0) // Eğer b parametresinin değeri 0'a eşit değilse
	{
		*div = a / b; // a parametresinin değerinin b parametresinin değerine bölümünden çıkan değeri div değişkenine atıyoruz.
		*mod = a % b; // a parametresinin değerinin b parametresinin değerine modundan çıkan değeri mod değişkenine atıyoruz.
	}
}

/*
#include <stdio.h>

int	main(void)
{
	int a = 20;
	int b = 2;
	int *div;
	int *mod;
	
	div = &a;
	mod = &b;
	ft_div_mod(a, b, div, mod);
	printf("div:%d mod:%d", *div, *mod);
	return(0);
}
*/
