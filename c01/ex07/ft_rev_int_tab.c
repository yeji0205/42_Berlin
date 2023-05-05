/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yegpark <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 20:59:52 by yegpark           #+#    #+#             */
/*   Updated: 2023/03/24 14:51:06 by yegpark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	temp;

	size--;
	i = 0;
	while (i < size)
	{
		temp = tab[i];
		tab[i] = tab[size];
		tab[size] = temp;
		size--;
		i++;
	}
}
// the function takes the size of the array
// reverse the values of the array
/*
int main(void)
{
	int arr[5] = {0, 1, 2, 3, 4};
	// we have to make now arr[5] = {4, 3, 2, 1, 0}
	
	int size = 5;
	
	ft_rev_int_tab(arr, size);
		
	int n;
	for(n=0; n < 5; n++)
	{
		printf("%d\n", arr[n]);
	}
}
*/
