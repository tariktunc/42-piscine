/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttunc <ttunc@student.42istanbul.com.tr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 22:03:48 by ttunc             #+#    #+#             */
/*   Updated: 2024/02/05 22:33:15 by ttunc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void    ft_ultimate_div_mod(int *a, int *b)
{
    int div;
    int mod;

    div = *a / *b;
    mod = *a % *b;
    *a = div;
    *b = mod;
}

int main()
{
	int a;
	int b;
	
	a = 111;
	b = 25;

	printf("1 => a : %d, b : %d\n", a, b);

	ft_ultimate_div_mod(&a, &b);

	printf("2 => a : %d, b : %d\n", a, b);	
}