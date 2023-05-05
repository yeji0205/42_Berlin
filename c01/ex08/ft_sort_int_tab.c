/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yegpark <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/24 11:26:08 by yegpark           #+#    #+#             */
/*   Updated: 2023/03/24 14:53:06 by yegpark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	temp;

	i = 0;
	size--;
	while (i < size)
	{
		if (tab[i] > tab[i + 1])
		{
			temp = tab[i];
			tab[i] = tab[i + 1];
			tab[i + 1] = temp;
			i = 0;
		}
		else
		{
			i++;
		}
	}	
}
/*
int	main(void)
{
	int arr[] = {7, 9, 4, 1, 5};
	// have to make -> arr = {1, 4, 5, 7, 9}

	
	// idea: 
	//1. compare the value each other 
	//2. change the position, put it front if the value is smaller
	//3. if the position changed, compare from the beginning again 

	ft_sort_int_tab(arr, 5);	
	    
    int n;
    for(n = 0; n < 5; n++)
    {
        printf("%d\n", arr[n]);
    }
}
*/
