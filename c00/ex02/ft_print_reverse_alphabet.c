/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttunc <ttunc@student.42istanbul.com.tr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/17 21:09:34 by ttunc             #+#    #+#             */
/*   Updated: 2024/02/17 21:11:53 by ttunc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_alphabet(void)
{
	char	say; // say adında bir integer değişken tanımlandı.

	say	=	97; // z harfinin ascii karşılığı
	while (say <= 122) // a harfinin ascii karşılığı, say değişkeni bu sayıdan büyük veya eşit olduğu müddetçe bu döngüye girilecek
	{
		write (1, &say, 1); // say değişkenini ekrana yazdır
		say--; // 1 azalt
	}
}
/*
int main()
{
	ft_reverse_alphabet();
}
*/