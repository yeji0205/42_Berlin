/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yegpark <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 19:09:57 by yegpark           #+#    #+#             */
/*   Updated: 2023/03/24 14:45:38 by yegpark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div;
	int	mod;

	div = *a / *b;
	mod = *a % *b;
	*a = div;
	*b = mod;
}
/*
int	main(void)
{
	int var1, var2, *ptrA, *ptrB;

	var1 = 13;
	var2 = 5;
		
	ptrA = &var1;
	ptrB = &var2;

	int div, mod;
	
	ft_ultimate_div_mod(ptrA, ptrB);


	printf("%d\n", *ptrA);
	printf("%d\n", *ptrB);	
}
*/
