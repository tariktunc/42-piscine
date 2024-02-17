/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttunc <ttunc@student.42istanbul.com.tr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/17 21:09:34 by ttunc             #+#    #+#             */
/*   Updated: 2024/02/17 21:11:49 by ttunc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void)
{
	int	say; // say adında bir integer değişken tanımlandı

	say = 48; // 0 rakamının ascii karşılığı
	while (say <= 57) // 9 rakamının ascii karşılığı, say değişkeni bu sayıdan küçük veya eşit olduğu müddetçe bu döngüye girilecek
	{
		write(1, &say, 1); // say değişkenini ekrana yazdır
		say++; // 1 arttır
	}
}

/*int	main(void)
{
	ft_print_numbers();
	return (0);
}
*/