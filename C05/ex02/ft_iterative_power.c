/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youmoukh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 14:58:03 by youmoukh          #+#    #+#             */
/*   Updated: 2023/08/28 11:48:34 by youmoukh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	r;
	int	i;

	r = 1;
	i = 1;
	if (power == 0)
		return (1);
	if (power < 0)
		return (0);
	while (power >= i)
	{
		r *= nb;
		i++;
	}
	return (r);
}
