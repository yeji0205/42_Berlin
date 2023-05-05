/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yegpark <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/27 18:12:50 by yegpark           #+#    #+#             */
/*   Updated: 2023/03/27 18:30:14 by yegpark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] > 96 && str[i] < 123)
		{
			str[i] = str[i] - 32;
		}
		i++;
	}
	return (str);
}

/*
	a = 97,97-32 = 65= A
	z = 122, 122-32 = 90 = Z 
*/
/*
#include <stdio.h>

int main(void)
{
    char str[] = "hello42School";

    printf("%s\n", ft_strupcase(str)); 
    
    return (0);
}
*/
