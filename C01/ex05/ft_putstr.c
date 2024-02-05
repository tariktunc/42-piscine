/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttunc <ttunc@student.42istanbul.com.tr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 22:34:27 by ttunc             #+#    #+#             */
/*   Updated: 2024/02/05 23:36:22 by ttunc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putstr(char *str) {
	while (*str != '\0') {
		write(1, str, 1);
		str++;
	}
	write(1, "\n", 1);
}

int main() {
	char myString[] = "Merhaba, dunya!";
	ft_putstr(myString);
	return 0;
}

