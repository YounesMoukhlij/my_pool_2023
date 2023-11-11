/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youmoukh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 10:53:22 by youmoukh          #+#    #+#             */
/*   Updated: 2023/08/30 15:30:39 by youmoukh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	check_the_base(char *base)
{
	int	i;
	int	j;
	int	length;

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
	length = i;
	return (length);
}

int	look_for_the_case(char c, char *base)
{
	int	nb;

	nb = 0;
	while (base[nb])
	{
		if (base[nb] == c)
			return (nb);
		nb++;
	}
	return (-1);
}

int	check_white_spaces(char *str, int *position)
{
	int	i;
	int	sign;

	sign = 1;
	i = 0;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	*position = i;
	return (sign);
}

int	ft_atoi_base(char *str, char *base)
{
	int	i;
	int	result;
	int	length;
	int	n;
	int	sign;

	i = 0;
	sign = 1;
	result = 0;
	length = check_the_base(base);
	sign = check_white_spaces(str, &i);
	if (length >= 2)
	{
		n = look_for_the_case(str[i], base);
		while (n != -1)
		{
			result = result * length + n;
			i++;
			n = look_for_the_case(str[i], base);
		}
		return (result * sign);
	}
	return (0);
}
