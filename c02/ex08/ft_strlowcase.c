/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yegpark <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/27 18:32:15 by yegpark           #+#    #+#             */
/*   Updated: 2023/04/01 17:00:52 by yegpark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] > 64 && str[i] < 91)
		{
			str[i] += 32;
		}
		i++;
	}
	return (str);
}

#include <stdio.h>

int main(void)
{
    char str[] = "HELLO24World";
    printf("%s\n", ft_strlowcase(str));
	printf("%p\n", ft_strlowcase(str));
    return (0);
}

