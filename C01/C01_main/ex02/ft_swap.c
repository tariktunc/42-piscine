/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttunc <ttunc@student.42istanbul.com.tr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 00:37:10 by ttunc             #+#    #+#             */
/*   Updated: 2024/02/10 17:28:57 by ttunc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *x, int *y)
{
	int	swap;

	swap = *x;
	*x = *y;
	*y = swap;
}

#include <stdio.h>

int main(void)
{
	int x;
	int y;

	x = 2;
	y = 11;
		
	ft_swap(&x, &y);
	printf("x %d y %d \n", x, y);
}
