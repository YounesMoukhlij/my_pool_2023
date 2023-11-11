/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_string_tab.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youmoukh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 15:39:28 by youmoukh          #+#    #+#             */
/*   Updated: 2023/09/05 20:37:06 by youmoukh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(char **a, char **b)
{
	char	*swap;

	swap = *a;
	*a = *b;
	*b = swap;
}

int	ft_strcmp_string(char *a, char *b)
{
	int	i;

	i = 0;
	while (a[i] && b[i] && a[i] == b[i])
	{
		i++;
	}
	return (a[i] - b[i]);
}

void	ft_sort_string_tab(char **tab)
{
	int	i;
	int	k;

	k = 0;
	i = 0;
	while (tab[k])
	{
		i = 0;
		while (tab[i])
		{
			if (tab[i + 1] && ft_strcmp_string(tab[i], tab[i + 1]) > 0)
			{
				ft_swap(&tab[i], &tab[i + 1]);
				i = 0;
			}
			i++;
		}
		k++;
	}
}
