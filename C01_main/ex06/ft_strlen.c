/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttunc <ttunc@student.42istanbul.com.tr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 15:53:31 by ttunc             #+#    #+#             */
/*   Updated: 2024/02/08 21:27:56 by ttunc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	length = 0;
	
	while (str[length] != '\0' )
	{
		length++;
	}
	return (length);
}

#include <stdio.h>

int main()
{
	char	text [] = "Enes";
	printf("%d", ft_strlen(text));
}
