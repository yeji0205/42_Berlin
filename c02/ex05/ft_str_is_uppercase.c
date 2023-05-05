/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yegpark <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/27 17:44:59 by yegpark           #+#    #+#             */
/*   Updated: 2023/03/27 17:55:10 by yegpark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 'A' || str[i] > 'Z')
		{
			return (0);
		}
		i++;
	}
	return (1);
}
/*
int main(void)
{
    char str[2] = "";

    printf("%d\n", ft_str_is_uppercase("HALLO")); // 1
    printf("%d\n", ft_str_is_uppercase("KhJKlo")); // 0
    printf("%d\n", ft_str_is_uppercase(str)); // 1
    printf("%d\n", ft_str_is_uppercase("12g")); // 0

    return (0);
}
*/
