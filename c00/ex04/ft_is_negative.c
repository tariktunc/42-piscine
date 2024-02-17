/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttunc <ttunc@student.42istanbul.com.tr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/17 21:09:34 by ttunc             #+#    #+#             */
/*   Updated: 2024/02/17 21:11:45 by ttunc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n) // Fonksiyonumuzda bir int parametresi istiyoruz
{
	if (n < 0) // İstediğimiz değere sıfırdan küçükse
		write(1, "N", 1); // Ekrana N harfi yazdır
	else
		write(1, "P", 1); // Ekrana P harfi yazdır
}

/*int	main(void)
{
	
	ft_is_negative(-5);
	return (0);
}
*/