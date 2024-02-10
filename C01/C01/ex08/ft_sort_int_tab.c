/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttunc <ttunc@student.42istanbul.com.tr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 19:29:40 by ttunc             #+#    #+#             */
/*   Updated: 2024/02/10 18:58:34 by ttunc            ###   ########.fr       */
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
