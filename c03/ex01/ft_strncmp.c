/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yegpark <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/04 20:48:34 by yegpark           #+#    #+#             */
/*   Updated: 2023/04/04 20:48:39 by yegpark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	if (n == 0)
	{
		return (0);
	}
	i = 0;
	while (s1[i] && s2[i] && s1[i] == s2[i] && (i < n - 1))
	{
		i++;
	}
	return (s1[i] - s2[i]);
}
/* #include <stdio.h>
#include <string.h>

int main()
{
	char str1[15] = "abcdef";
	char str2[15] = "abcdEF";
	char str3[15] = "abcdef";

	int	i = 0;
	for (i = 0; i < 10; i++)
	{
		printf("i: %d, Your test: %d\n", i, ft_strncmp(str1, str2, i)); 
		printf("i: %d, Your test: %d\n", i,ft_strncmp(str1, str3, i));
		printf("i: %d, Original test: %d\n", i,strncmp(str1, str2, i));
		printf("i: %d, Original test: %d\n", i,strncmp(str1, str3, i));	
	}
} */