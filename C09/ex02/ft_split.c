/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youmoukh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 19:54:18 by youmoukh          #+#    #+#             */
/*   Updated: 2023/09/02 16:49:25 by youmoukh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	check_the_sep(char str, char *sep)
{
	int	i;

	i = 0;
	while (sep[i])
	{
		if (sep[i] == str)
			return (0);
		i++;
	}
	return (1);
}

int	count_strings(char *str, char *sep)
{
	int	count;

	count = 0;
	while (*str)
	{
		while (*str && (check_the_sep(*str, sep) == 0))
			str++;
		if (*str != '\0')
			count++;
		while (*str && check_the_sep(*str, sep))
			str++;
	}
	return (count);
}

int	ft_strlen_word(char *str, char *sep)
{
	int	i;

	i = 0;
	while (str[i] && check_the_sep(str[i], sep))
		i++;
	return (i);
}

char	*ft_create_word(char *str, char *sep)
{
	int		i;
	char	*string;
	int		length;

	i = 0;
	length = ft_strlen_word(str, sep);
	string = (char *)malloc(sizeof(char) * (length + 1));
	if (!string)
		return (0);
	while (i < length)
	{
		string[i] = str[i];
		i++;
	}
	string[i] = '\0';
	return (string);
}

char	**ft_split(char *str, char *sep)
{
	char	**d;
	char	**result;
	int		i;

	i = 0;
	d = (char **)malloc(sizeof(char *) * (count_strings(str, sep) + 1));
	if (!d)
		return (0);
	result = d;
	while (*str)
	{
		while (*str && !check_the_sep(*str, sep))
			str++;
		if (*str)
		{
			d[i] = ft_create_word(str, sep);
			i++;
		}
		while (*str && check_the_sep(*str, sep))
			str++;
	}
	d[i] = 0;
	return (result);
}
