/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttunc <ttunc@student.42istanbul.com.tr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 22:03:48 by ttunc             #+#    #+#             */
/*   Updated: 2024/02/08 21:21:59 by ttunc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void    ft_ultimate_div_mod(int *a, int *b)
{
	int div;
	int mod;

	div = *a / *b;
	mod = *a % *b;
	*a = div;
	*b = mod;
}

#include <stdio.h>
int main()
{
	int x;
	int y;
	x = 7;
	y = 8;

	ft_ultimate_div_mod(&x, &y);
	printf("%d %d", x, y);
}