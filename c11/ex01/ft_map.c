/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttunc <ttunc@student.42istanbul.com.tr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/17 21:09:34 by ttunc             #+#    #+#             */
/*   Updated: 2024/02/17 21:17:19 by ttunc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_map(int *tab, int length, int (*f)(int))
{
	int	*ret_arr;
	int	i;

	if (!tab || !f)
		return (NULL);
	ret_arr = (int *)malloc(sizeof(int) * length);
	if (!ret_arr)
		return (NULL);
	i = -1;
	while (++i < length)
		ret_arr[i] = f(tab[i]);
	return (ret_arr);
}

/*
#include <stdio.h>

int	power_2(int i)
{
	return (i * i);
}

int main()
{
	int arr[] = {1, 2, 3, 4, 5};
	int *ret_arr = ft_map(arr, 5, &power_2);
	for (int i = 0; i < 5; ++i)
		printf("number = %d\n", ret_arr[i]);
}
*/