/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttunc <ttunc@student.42istanbul.com.tr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/04 17:52:32 by ttunc             #+#    #+#             */
/*   Updated: 2024/02/04 20:57:35 by ttunc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
    if(nb < 0)
    {
        if(nb == -2147483648)
        {
            ft_putchar(-(nb / 10));
            ft_putchar('0');
        }
        else
        {
            ft_putchar(-nb);
        }
    }
    else
    {
        if(nb >= 10)
        {
            ft_putnbr(nb / 10);
            ft_putchar((nb % 10) + '0');
        }
        else
        {
            ft_putchar(nb + '0');
        }
    }
}

int main(void)
{
    ft_putnbr(-483648);
    return 0;
}

