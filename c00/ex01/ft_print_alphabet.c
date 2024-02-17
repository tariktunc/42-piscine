/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttunc <ttunc@student.42istanbul.com.tr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/17 21:09:34 by ttunc             #+#    #+#             */
/*   Updated: 2024/02/17 21:11:59 by ttunc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_alphabet(void)
{
	char	say; // say diye bir char değişkeni tanımlandı

	say = 97; // a harfinin ascii karşılığı
	while (say <= 122) // z harfinin ascii karşılığı, say değişkeni bu sayıdan küçük veya eşit olduğu müddetçe bu döngüye girilecek
	{
		write (1, &say, 1); // say değişkenini ekrana yazdır
		say++;  // 1 arttır
	}
}
/*
int main()
{
	ft_print_alphabet();
}
*/