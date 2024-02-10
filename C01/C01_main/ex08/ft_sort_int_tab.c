/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttunc <ttunc@student.42istanbul.com.tr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 19:29:40 by ttunc             #+#    #+#             */
/*   Updated: 2024/02/10 17:50:27 by ttunc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	x;
	int	y;
	int	swp;

	x = 1;
	while (x < size)
	{
		swp = tab[x];
		y = x - 1;
		while (y >= 0 && tab[y] > swp)
		{
			tab[y + 1] = tab[y];
			y = y - 1;
		}
		tab[y + 1] = swp;
		x++;
	}
}

#include <stdio.h>

int main(void)
{
	int nums [] = {9, 5, 3, 7};

	ft_sort_int_tab(nums, 7);

	int i;
	
	i = 0;
	while(i < 7)
	{
		printf("%d ", nums[i]);
		i++;
	}
}