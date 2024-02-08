/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttunc <ttunc@student.42istanbul.com.tr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 21:55:07 by ttunc             #+#    #+#             */
/*   Updated: 2024/02/08 21:20:09 by ttunc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void ft_div_mod(int a, int b, int *div, int *mod)
{
    *div = a / b;
    *mod = a % b;
}

#include <stdio.h>

int main()
{
    int x;
    int y;
    int mod;
    int div;

    x = 7;
    y = 5;

    ft_div_mod(x, y, &mod, &div);
    printf("%d %d", mod, div);
}