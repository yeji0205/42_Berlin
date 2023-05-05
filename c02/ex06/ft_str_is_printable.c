/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yegpark <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/27 17:57:44 by yegpark           #+#    #+#             */
/*   Updated: 2023/03/27 18:11:02 by yegpark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 32 || str[i] > 126)
		{
			return (0);
		}
		i++;
	}
	return (1);
}
/*
#include <stdio.h>

int main(void)
{
    char str[4] = "";

    printf("%d\n", ft_str_is_printable("he@#$^lo")); // 1
    printf("%d\n", ft_str_is_printable("'\n'")); // 0
    printf("%d\n", ft_str_is_printable(str)); // 1
    
    return (0);
}
*/
