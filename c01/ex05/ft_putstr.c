/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttunc <ttunc@student.42istanbul.com.tr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/17 21:09:34 by ttunc             #+#    #+#             */
/*   Updated: 2024/02/17 21:11:10 by ttunc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str) // Fonksiyonumuzda 1 adet char tipinde bir str parametresi gönderilmesini istiyoruz. Char tipindeki bu parametre pointer'lı olduğu için string halini alabiliyor.
{
	int	n; // n adında integer tipinde bir değişken oluşturuyoruz.

	n = 0; // n'in değerini 0'a eşitliyoruz.
	while (str[n] != '\0') // Eğer str değişkeninin n değerindeki indeksini boşluğa eşit değilse bir döngüye giriyoruz.
	{
		write (1, &str[n], 1); // str değişkeninin n değerindeki indeksini ekrana yazdırıyoruz.
		n++; // n değişkeninin değerini 1 arttırıyoruz.
	}	
}

/*#include <stdio.h>
int	main()
{
	char *str = "42İstanbul\n";
	ft_putstr(str);
}
*/
