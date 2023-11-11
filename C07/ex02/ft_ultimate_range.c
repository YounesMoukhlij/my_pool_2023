/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youmoukh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 09:22:20 by youmoukh          #+#    #+#             */
/*   Updated: 2023/08/27 13:08:33 by youmoukh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	*tab;
	int	i;
	int	size;

	i = 0;
	size = max - min;
	if (min >= max)
		return (0);
	tab = (int *)malloc(sizeof(int) * size);
	if (!tab)
		return (0);
	*range = tab;
	while (i < size)
	{
		tab[i] = min + i;
		i++;
	}
	return (size);
}
