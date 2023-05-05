/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yegpark <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/05 00:28:15 by yegpark           #+#    #+#             */
/*   Updated: 2023/04/05 00:28:18 by yegpark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	while (str[i])
	{
		j = 0;
		k = 0;
		while ((str[i] == to_find[j]) && (j < ft_strlen(to_find)))
		{
			if (k == (ft_strlen(to_find) - 1))
			{
				i = i - (ft_strlen(to_find) - 1);
				return (&str[i]);
			}
			j++;
			k++;
			i++;
		}
		i = i - (k - 1);
	}
	return (0);
}
/* 
#include <stdio.h>
#include <string.h>

int	main()
{
	char s1[] = "helloschen ";
	char s2[] = "osc";

	printf("%s\n", strstr(s1, s2));
	printf("%s\n", ft_strstr(s1, "el"));
} */