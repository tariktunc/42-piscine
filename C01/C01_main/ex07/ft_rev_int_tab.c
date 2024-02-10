/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttunc <ttunc@student.42istanbul.com.tr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 19:29:06 by ttunc             #+#    #+#             */
/*   Updated: 2024/02/10 17:47:38 by ttunc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void ft_rev_int_tab(int *tab, int size)
{
    int left = 0;
    int right = size - 1;
    int temp;

    while (left < right) {
        temp = tab[left];
        tab[left] = tab[right];
        tab[right] = temp;

        left++;
        right--;
    }
}

#include <stdio.h>

int main(void)
{
	int nums [] = {10, 25, 3, 61, 90};

	ft_rev_int_tab(nums, 5);

	int i;
	
	i = 0;
	while(i < 5)
	{
		printf("%d ", nums[i]);
		i++;
	}
}