/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yegpark <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/04 11:52:08 by yegpark           #+#    #+#             */
/*   Updated: 2023/04/04 11:52:12 by yegpark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	result;
	int	i;
	int	sign;

	sign = 1;
	result = 0;
	i = 0;
	while (str[i] && str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
	{
		i++;
	}
	while (str[i] && str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
		{
			sign *= -1;
		}
		i++;
	}
	while (str[i] && (str[i] >= '0' && str[i] <= '9'))
	{
		result = result * 10 + (str[i] - '0');
		i++;
	}
	return (sign * result);
}

/*
#include <stdlib.h>
#include <stdio.h>

isspace()
      checks for white-space characters.  In the "C" and "POSIX" locales,
      these are: space, form-feed ('\f'), newline ('\n'), carriage return
      ('\r'), horizontal tab ('\t'), and vertical tab ('\v').

int	main()
{
	printf("%d\n", ft_atoi(" ---+--234ab567"));	
	printf("%d\n", ft_atoi("42"));	
} 
*/