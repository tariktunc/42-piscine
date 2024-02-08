/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttunc <ttunc@student.42istanbul.com.tr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 19:29:06 by ttunc             #+#    #+#             */
/*   Updated: 2024/02/08 21:48:07 by ttunc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;	
	int	swap;

	i = 0;
	while (i < (size / 2))
	{
		swap = tab[i];
		tab [i] = tab [size - 1 - i];
		tab [size - 1 - i] = swap;
		i++;
	}
}

#include <stdio.h>

int	main()
{
	int tab[] = {1, 2, 3, 4, 5};
	int size = 5;

	ft_rev_int_tab(tab, size);
	int i;
	i = 0;
	while(i < size)
	{
		printf("%d ", tab[i]);
		i++;
	}
	return (0);
}