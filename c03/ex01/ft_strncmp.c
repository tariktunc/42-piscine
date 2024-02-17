/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttunc <ttunc@student.42istanbul.com.tr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/17 21:09:34 by ttunc             #+#    #+#             */
/*   Updated: 2024/02/17 21:13:05 by ttunc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int    ft_strncmp(char *s1, char *s2, unsigned int n)
{
    unsigned int    i;

    if (n == 0)
        return (0);
    i = 0;
    while (s1[i] && s2[i] && s1[i] == s2[i] && i < n - 1)
        i++;
    return (s1[i] - s2[i]);
}
/*int	main()
{
	printf("%d\n", ft_strncmp("HsanK", "HasanK", 5));
	printf("%d\n", ft_strncmp("HasanK", "hasan K", 5));
	printf("%d\n", ft_strncmp("hasanK", "hasanK", 5));
	
	printf("%d\n", strncmp("HsanK", "HasanK", 5));
	printf("%d\n", strncmp("HasanK", "hasan K", 5));
	printf("%d", strncmp("hasanK", "hasanK", 5));
}*/
