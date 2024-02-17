/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_ft.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttunc <ttunc@student.42istanbul.com.tr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/17 21:09:34 by ttunc             #+#    #+#             */
/*   Updated: 2024/02/17 21:11:28 by ttunc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_ultimate_ft(int *********nbr) // Fonksiyonumuzda 1 adet integer tipinde parametre gönderilmesini istiyoruz.
{
	*********nbr = 42; // 9. pointer nbr (yani nbr değişkeninin adresinin, adresinin, adresinin, adresinin, adresinin, adresinin, adresinin, adresinin, adresi) değerini 42 yapıyoruz.
}
/*
#include <stdio.h>

int	main(void)
{
	int n;
	int *nbr3;
	int **nbr2;
	int ***nbr1;
	int ****nbr;

	n = 21;
	
	nbr3 = &n;
	nbr2 = &nbr3;
	nbr1 = &nbr2;
	nbr = &nbr1;

	ft_ultimate_ft(nbr);
	printf("%d",n);
	return (0);	
}
*/