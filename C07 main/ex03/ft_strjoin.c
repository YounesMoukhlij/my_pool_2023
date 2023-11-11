/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youmoukh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 09:35:52 by youmoukh          #+#    #+#             */
/*   Updated: 2023/08/27 10:20:23 by youmoukh         ###   ########.fr       */
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
	int i;
	int	sep_len;
	int	word_len;
	int	FULL;

	i = 0;
	sep_len = ft_strlen(sep);
	word_len = 0;
	while (i < size)
	{
		word_len += ft_strlen(str[i]);
		sep_len += sep_len;
		i++;
	}
	FULL = word_len + sep_len;
	FULL -= sep_len;
	return (FULL);
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

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*str;
	char	*result;
	int		i;
	int		Total_length;

	i = 0;
	Total_length = ft_count_words(size, strs, sep);
	str = (char *)malloc(sizeof(char ) * (Total_length + 1));
	if (!str)
		return(0);
	result = str;
	while (i < size)
	{
		gather_together(str, strs[i]);
		str += ft_strlen(strs[i]);
		if (i < size - 1)
		{
			gather_together(str,sep);
			str += ft_strlen(sep);
		}
		i++;
	}
	str[i] = 0;
	return (result);
}

	

#include <stdio.h>


int main()
{
	char	**strs;
	int		size = 3;
	char	*sep;

	strs = (char **)malloc(sizeof(char *) * (size));

	strs[0] = (char *)malloc(sizeof(char) * (6 + 1));
	strs[1] = (char *)malloc(sizeof(char) * (4 + 1));
	strs[2] = (char *)malloc(sizeof(char) * (4 + 1));

	strs[0] = "younes";
	strs[1] = "moukh";
	strs[2] = "khouribga";

	sep = " -------- ";

	printf("FINAL RESULT =>  %s\n", ft_strjoin(size, strs, sep));
	free (strs);
	return (0);
}
