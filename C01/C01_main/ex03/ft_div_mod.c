/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttunc <ttunc@student.42istanbul.com.tr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 21:55:07 by ttunc             #+#    #+#             */
/*   Updated: 2024/02/10 17:32:35 by ttunc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

#include <stdio.h>

int main(void)
{
	int a;
	int b;
	int div;
	int mod;

	a = 23;
	b = 13;

	ft_div_mod(a, b, &div, &mod);
	printf("%d %d", div, mod);
}