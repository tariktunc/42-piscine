/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttunc <ttunc@student.42istanbul.com.tr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 00:53:31 by ttunc             #+#    #+#             */
/*   Updated: 2024/02/06 01:16:22 by ttunc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
    char x = 0;

    while(*str != "\0")
    {
        write(1, x, 1);
        x++;
    }
}

int main() {
	char myString[] = "Merhaba, dunya!";
	ft_strlen(myString);
	return 0;
}
