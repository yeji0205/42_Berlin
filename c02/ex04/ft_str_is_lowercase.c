/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yegpark <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/27 16:22:40 by yegpark           #+#    #+#             */
/*   Updated: 2023/03/27 16:59:11 by yegpark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 'a' || str[i] > 'z')
		{
			return (0);
		}
		i++;
	}
	return (1);
}

// other case of while(str[i] != '\0') is while(str[i]=='\0') which means empty
/*
int main(void)
{
    char str[4] = "";
	
    printf("%d\n", ft_str_is_lowercase("helo")); // 1
	printf("%d\n", ft_str_is_lowercase("hHw")); // 0
	printf("%d\n", ft_str_is_lowercase("h45#")); // 0
    printf("%d\n", ft_str_is_lowercase(str)); // 1
    
    return (0);
}
*/
