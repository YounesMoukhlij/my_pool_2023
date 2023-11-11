/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youmoukh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/19 22:36:03 by youmoukh          #+#    #+#             */
/*   Updated: 2023/08/20 17:41:03 by youmoukh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		i++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	verificator;

	i = 0;
	verificator = 1;
	ft_strlowcase(str);
	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			if (verificator == 1)
			{
				str[i] -= 32;
			}
			verificator = 0;
		}
		else if (str[i] >= '0' && str[i] <= '9')
		{
			verificator = 0;
		}
		else
			verificator = 1;
		i++;
	}
	return (str);
}
