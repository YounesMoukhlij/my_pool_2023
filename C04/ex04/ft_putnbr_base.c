/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youmoukh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 11:06:26 by youmoukh          #+#    #+#             */
/*   Updated: 2023/08/31 11:22:11 by youmoukh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen_base(char *base)
{
	int	i;

	i = 0;
	while (base[i])
	{
		i++;
	}
	return (i);
}

int	check_the_base(char *base)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (base[i] == '\0')
		return (0);
	while (base[i])
	{
		if (base[i] <= 32 || base[i] == '-' || base[i] == '+' || base[i] == 127)
			return (0);
		j = i + 1;
		while (base[j])
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	if (i < 2)
		return (0);
	return (i);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int			length_base;
	long long	a;

	a = nbr;
	length_base = check_the_base(base);
	if (length_base != 0)
	{
		if (a < 0)
		{
			a *= -1;
			write(1, "-", 1);
		}
		if (a >= length_base)
		{
			ft_putnbr_base (a / length_base, base);
			ft_putnbr_base (a % length_base, base);
		}
		if (a < length_base)
			write(1, &base[a], 1);
	}
}
