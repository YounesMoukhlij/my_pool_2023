/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youmoukh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 17:08:26 by youmoukh          #+#    #+#             */
/*   Updated: 2023/08/28 11:53:16 by youmoukh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	r;

	r = 2;
	if (nb == 1)
		return (1);
	if (nb == 0 || nb < 0)
		return (0);
	while (r * r <= nb)
	{
		if (r * r == nb)
			return (r);
		if (r == 46340)
			return (0);
		r++;
	}
	return (0);
}
