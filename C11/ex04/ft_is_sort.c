/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youmoukh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 12:55:45 by youmoukh          #+#    #+#             */
/*   Updated: 2023/09/06 11:37:30 by youmoukh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int	i;
	int	mretba;

	i = 0;
	mretba = 1;
	while (i < length - 1 && mretba == 1)
	{
		if ((*f)(tab[i], tab[i + 1]) < 0)
			mretba = 0;
		i++;
	}
	if (mretba != 1)
	{
		i = 0;
		while (i < length - 1)
		{
			if ((*f)(tab[i], tab[i + 1]) > 0)
				return (0);
			i++;
		}
	}
	return (1);
}
