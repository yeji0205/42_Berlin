/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yegpark <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/04 20:23:16 by yegpark           #+#    #+#             */
/*   Updated: 2023/04/04 20:23:19 by yegpark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] && s2[i])
	{
		if (s1[i] != s2[i])
		{	
			return (s1[i] - s2[i]);
		}
		i++;
	}
	return (s1[i] - s2[i]);
}
/*
(1) str1 < str2 = -
(2) str1 > str2 = +
(3) str1 == str2 = 0
*/
/* #include <stdio.h>
#include <string.h>

int	main(void)
{
	char str1[] = "abcd";
	char str2[] = "abCd";
	char str3[] = "abcd";

	printf("%d\n", ft_strcmp(str1, str2)); // 32
	printf("%d\n", ft_strcmp(str1, str3)); // 0
	printf("%d\n", strcmp(str1, str2)); // 32
	printf("%d\n", strcmp(str1, str3)); // 0
}
 */