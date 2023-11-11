/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youmoukh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 09:35:52 by youmoukh          #+#    #+#             */
/*   Updated: 2023/09/04 12:42:18 by youmoukh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

int	ft_count_words(int size, char **str, char *sep)
{
	int	i;
	int	sep_len;
	int	word_len;
	int	full;

	i = 0;
	sep_len = ft_strlen(sep);
	word_len = 0;
	while (i < size)
	{
		word_len += ft_strlen(str[i]);
		sep_len += sep_len;
		i++;
	}
	full = word_len + sep_len;
	full -= sep_len;
	return (full);
}

char	*gather_together(char *to, char *from)
{
	int	i;

	i = 0;
	while (from[i])
	{
		to[i] = from[i];
		i++;
	}
	to[i] = '\0';
	return (to);
}

char	*ft_create(int size, char *str, char **strs, char *sep)
{
	int		i;
	char	*result;

	i = 0;
	result = str;
	while (i < size)
	{
		gather_together(str, strs[i]);
		str += ft_strlen(strs[i]);
		if (i < size - 1)
		{
			gather_together(str, sep);
			str += ft_strlen(sep);
		}
		i++;
	}
	str[i] = 0;
	return (result);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*str;
	int		i;
	int		total_length;

	i = 0;
	if (size == 0)
		return (malloc(sizeof(char)));
	total_length = ft_count_words(size, strs, sep);
	str = (char *)malloc(sizeof(char) * (total_length + 1));
	if (!str)
		return (0);
	str = ft_create(size, str, strs, sep);
	return (str);
}

#include <unistd.h>
#include <string.h>
#include <stdio.h>
int main()
{
	char **str;
	int size = 3;
	str = malloc(sizeof(char *) * size );
	str[0] = "younes";
	str[1] = "1337";
	str[2] = 0;
	write(1, str[2], 1);
	char *sep;
	sep = "--";
	//char *s;
	//s = ft_strjoin(size, str, sep);
	//write(1, s, strlen(s));
	//printf("%s\n", ft_strjoin(size, str,sep));

}
