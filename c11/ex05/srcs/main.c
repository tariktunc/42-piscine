/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttunc <ttunc@student.42istanbul.com.tr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/17 21:09:34 by ttunc             #+#    #+#             */
/*   Updated: 2024/02/17 21:17:05 by ttunc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "op.h"

void	call_func_by_operator(int a, int b, char op)
{
	int	res;
	int	(*f_arr[5])(int, int);

	f_arr[0] = add;
	f_arr[1] = subtract;
	f_arr[2] = mul;
	f_arr[3] = div;
	f_arr[4] = mod;
	if (op == '+')
		res = (*f_arr[0])(a, b);
	if (op == '-')
		res = (*f_arr[1])(a, b);
	if (op == '*')
		res = (*f_arr[2])(a, b);
	if (op == '/')
		res = (*f_arr[3])(a, b);
	if (op == '%')
		res = (*f_arr[4])(a, b);
	ft_putnbr(res);
}

int	main(int argc, char **argv)
{
	char	op;
	int		a;
	int		b;

	if (argc != 4)
		return (0);
	op = argv[2][0];
	if (op == '+' || op == '-' || op == '*' || op == '/' || op == '%')
	{
		a = ft_atoi(argv[1]);
		b = ft_atoi(argv[3]);
		if (b == 0 && (op == '/' || op == '%'))
		{
			if (op == '/')
				write(1, "Stop : division by zero\n", 24);
			if (op == '%')
				write(1, "Stop : modulo by zero\n", 22);
			return (0);
		}
		call_func_by_operator(a, b, op);
		write (1, "\n", 1);
	}
	else
		write (1, "0\n", 2);
	return (0);
}