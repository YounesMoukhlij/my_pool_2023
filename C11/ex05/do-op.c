/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_do_op.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youmoukh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 13:29:48 by youmoukh          #+#    #+#             */
/*   Updated: 2023/09/06 12:41:22 by youmoukh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "do_op.h"
#include <unistd.h>

int	operation_apollo(char *operator, int a, int b)
{
	int	r;
	int	(*func[5])(int a, int b);

	func[0] = &ft_add;
	func[1] = &ft_sub;
	func[2] = &ft_modulo;
	func[3] = &ft_division;
	func[4] = &ft_multi;
	r = 0;
	if (operator[0] == '+')
		r = func[0](a, b);
	else if (operator[0] == '-')
		r = func[1](a, b);
	else if (operator[0] == '%')
		r = func[2](a, b);
	else if (operator[0] == '/')
		r = func[3](a, b);
	else if (operator[0] == '*')
		r = func[4](a, b);
	return (r);
}

void	do_op(char *num1, char *operator, char *num2)
{
	int	num11;
	int	num22;
	int	r;

	r = 1;
	num11 = ft_atoi(num1);
	num22 = ft_atoi(num2);
	if (operator[1] != '\0')
		write(1, "0", 1);
	else if (!(operator[0] == '+' || operator[0] == '-'
			|| operator[0] == '/' || operator[0] == '%' || operator[0] == '*'))
		write(1, "0", 1);
	else if (num22 == 0 && operator[0] == '/')
		write(1, "Stop : division by zero", 23);
	else if (num22 == 0 && operator[0] == '%')
		write(1, "Stop : modulo by zero", 21);
	else
	{
		r *= operation_apollo(operator, num11, num22);
		ft_putnbr(r);
	}
	write(1, "\n", 1);
}

int	main(int ac, char *av[])
{
	if (ac == 4)
	{
		do_op(av[1], av[2], av[3]);
	}
	return (0);
}
