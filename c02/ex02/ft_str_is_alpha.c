/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yegpark <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/24 18:16:38 by yegpark           #+#    #+#             */
/*   Updated: 2023/03/27 16:04:29 by yegpark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] < 'a' || str[i] > 'z') && (str[i] < 'A' || str[i] > 'Z'))
		{
			return (0);
		}
		i++;
	}
	return (1);
}
/*
// if any value of the array is non-alphabetical, then return 0
// other than that return 1
// alphabetical or empty
// other case of while(str[i] != '\0') is while(str[i]=='\0') which means empty
int main(void)
{
	char str[2] = "";

	printf("%d\n", ft_str_is_alpha("helo")); // 1
	printf("%d\n", ft_str_is_alpha("h1#lo")); // 0
	printf("%d\n", ft_str_is_alpha(str)); // 1
    
	return (0);
}
*/
