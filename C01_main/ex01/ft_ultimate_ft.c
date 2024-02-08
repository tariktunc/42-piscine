/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_ft.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttunc <ttunc@student.42istanbul.com.tr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 00:02:04 by ttunc             #+#    #+#             */
/*   Updated: 2024/02/08 21:14:59 by ttunc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void ft_ultimate_ft(int *********nbr)
{
    *********nbr = 42;
}

#include <stdio.h>

int main()
{
    int value;
    int *ptr1 = &value;
    int **ptr2 = &ptr1;
    int ***ptr3 = &ptr2;
    int ****ptr4 = &ptr3;
    int *****ptr5 = &ptr4;
    int ******ptr6 = &ptr5;
    int *******ptr7 = &ptr6;
    int ********ptr8 = &ptr7;
    int *********ptr9 = &ptr8;

    ft_ultimate_ft(ptr9);
    printf("%d", value);
}