/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yegpark <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 18:58:05 by yegpark           #+#    #+#             */
/*   Updated: 2023/03/24 14:43:07 by yegpark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
/*
int	main(void)
{
	int a = 30;
	int b = 5;

	int *ptr1, *ptr2, div, mod;
	
	ptr1 = &div;
	ptr2 = &mod;
	
	ft_div_mod(a, b, ptr1, ptr2);
	printf("%d\n", div);
	printf("%d\n", mod);
}
*/
