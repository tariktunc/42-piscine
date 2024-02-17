/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttunc <ttunc@student.42istanbul.com.tr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/17 21:09:34 by ttunc             #+#    #+#             */
/*   Updated: 2024/02/17 21:11:14 by ttunc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_ultimate_div_mod(int *a, int *b) // Fonksiyonumuzda 2 adet integer tipinde parametre gönderilmesini istiyoruz.
{
	int	div; // div adında integer tipinde bir değişken oluşturuyoruz.
	int	mod; // mod adında integer tipinde bir değişken oluşturuyoruz.

	div = *a / *b; // a parametresinin değerinin b parametresinin değerine bölümünden çıkan değeri div değişkenine atıyoruz.
	mod = *a % *b; // a parametresinin değerinin b parametresinin değerine modundan çıkan değeri mod değişkenine atıyoruz.
	*a = div; // div değişkenindeki değeri a değişkenine atıyoruz.
	*b = mod; // mod değişkenindeki değeri b değişkenine atıyoruz.
}

/*#include <stdio.h>

int main()
{
	int x;
	int	y;

	x = 20;
	y = 2;
	ft_ultimate_div_mod(&x, &y);
	printf("%d | %d", x, y);
}*/
