/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yegpark <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/27 16:05:12 by yegpark           #+#    #+#             */
/*   Updated: 2023/03/27 16:17:45 by yegpark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < '0' || str[i] > '9')
		{
			return (0);
		}		
		i++;
	}
	return (1);
}
/*
// if any value of the array is non-digit, then return 0
// other than that return 1
int main(void)
{
    char str[2] = "";

    printf("%d\n", ft_str_is_numeric("123460")); // 1
    printf("%d\n", ft_str_is_numeric("sd234")); // 0
    printf("%d\n", ft_str_is_numeric(str)); // 1
    
    return (0);
}
*/
