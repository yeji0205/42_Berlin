/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yegpark <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 17:02:15 by yegpark           #+#    #+#             */
/*   Updated: 2023/03/24 14:41:55 by yegpark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

void	ft_swap(char *a, char *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

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

void swap_strings(char *str1, char *str2) {
	// swap characters until the end of the shorter string
	int	i;

	i = 0;
	while (str1[i] && str2[i])
	{
	char temp = str1[i];
        str1[i] = str2[i];
        str2[i] = temp;
	i++;
    	}
    	// if one string is longer than the other, append '\0' to the shorter one
    	if (str1[ft_strlen(str1)]!= '\0') 
    	{
        	str2[ft_strlen(str1)] = '\0';
	} 
	else if (str2[strlen(str2)]!= '\0') 
	{
		str1[strlen(str2)] = '\0';
	}
}

int main(void)
{
/* 	int a = ;
	int b = 33;

	int *ptrA;
	int *ptrB;

 	ptrA = &a;
	ptrB = &b;

	ft_swap(ptrA, ptrB);
	printf("%d\n", *ptrA);
	printf("%d\n", *ptrB); */
	
	char a[] = "first sentence";
	char b[] = "second sentence";
	
	swap_strings(a, b);
	printf("%s, %s\n", a, b);
}