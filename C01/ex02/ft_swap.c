/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttunc <ttunc@student.42istanbul.com.tr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 00:37:10 by ttunc             #+#    #+#             */
/*   Updated: 2024/02/05 21:53:55 by ttunc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void ft_swap(int *a, int *b)
{
    int swap = *a;
    *a = *b;
    swap = *b;
}

int main()
{
    int a;
    int b;

    int *ptra;
    int *ptrb;

    a = 1;
    b = 2;

    ptra = &a;
    ptrb = &b;

    ft_swap(ptra, ptrb);

    printf("a : %d, b : %d\n", a, b);
}
