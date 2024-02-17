/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttunc <ttunc@student.42istanbul.com.tr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/17 21:09:34 by ttunc             #+#    #+#             */
/*   Updated: 2024/02/17 21:20:09 by ttunc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

extern void ft_putchar(char c);
 
void ft_printline(int length, int first, int middle, int last)
{
    int i;
    i= 1;

    while(i <= length)
    {
        if(i == 1)
            ft_putchar(first);

        else if(i == length)
            ft_putchar(last);

        else
            ft_putchar(middle);
        i++;
    }
    
    ft_putchar('\n');
}

void rush(int x, int y)
{
    int i;
    i = 1;
    if(x> 0 && y> 0)
    {
        while( i <= y)
        {
            if(i == 1 )
                ft_printline(x, 'A', 'B', 'A');
            if( i == y)
                ft_printline(x, 'C', 'B', 'C');
            else
                ft_printline(x, 'B', ' ', 'B');
            i++;
        }
    }

}
