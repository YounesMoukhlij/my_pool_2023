/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youmoukh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 09:13:58 by youmoukh          #+#    #+#             */
/*   Updated: 2023/08/27 13:06:37 by youmoukh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*tab;
	int	*result;
	int	i;
	int	size;

	i = 0;
	size = max - min;
	if (min >= max)
		return (0);
	tab = (int *)malloc(sizeof(int) * size);
	if (!tab)
		return (0);
	result = tab;
	while (i < size)
	{
		tab[i] = i + min;
		i++;
	}
	return (result);
}


#include <stdio.h>

int main(void)
{
	int *tab;
	int min = 2;
	int max = 10;
	tab = ft_range(min,max);

	int i = 0;
	while (i < (max-min))
	{
		printf("%d   ", tab[i]);
		i++;
	}
}
