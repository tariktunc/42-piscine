/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttunc <ttunc@student.42istanbul.com.tr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 22:34:27 by ttunc             #+#    #+#             */
/*   Updated: 2024/02/08 21:26:24 by ttunc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putstr(char *str) {
    int i;

    i = 0;
    while (str[i] != '\0')
	{
        write(1, &str[i], 1);
        i++;
    }
}

int main()
{
    char    text [] = "merhaba";
    ft_putstr(text);
}
