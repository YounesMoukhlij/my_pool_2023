/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youmoukh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 09:22:20 by youmoukh          #+#    #+#             */
/*   Updated: 2023/08/27 09:35:22 by youmoukh         ###   ########.fr       */
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
	return(size);
}



#include <stdio.h>

int main()
{
	int *tab;
	int min = 2;    int max = 10;    int i = 0;
	int size = max - min;  
	
	printf( " %d\n" , ft_ultimate_range(&tab, min, max));
	while (i < size)
	{
		printf("%d,   ", tab[i]);
		i++;
	}
}
