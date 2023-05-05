/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yegpark <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 18:43:45 by yegpark           #+#    #+#             */
/*   Updated: 2023/03/28 18:46:06 by yegpark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

char	dec_to_hex(int dec)
{
	char	hex[2];
	char	*lookup;

	lookup = "0123456789abcdef";
	hex[0] = lookup[dec / 16];
	hex[1] = lookup[dec % 16];
	return (write (1, hex, 2));
}

void	ft_putstr_non_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 32 || str[i] == 127)
		{
			ft_putchar('\\');
			dec_to_hex(str[i]);
		}
		else
		{
			ft_putchar(str[i]);
		}
		i++;
	}
}

/*
Not printable characters: 
Codes 0 through 31 and 127 (decimal) are unprintable control characters.
it recognize the non-printable characters
1. find out how to change the decimal to hexidecial (\n will be 10 -> 0A)
2. looping every part of the array, 
	if it has non-printable part -> print hex for that part
	otherwise print what it is
*/

#include <stdio.h>

int	main(void)
{	
	char a[] = "Coucou\ntu vas bien ?";
	char f[] = "we 9are 78\familly x1F rgfenf";

	ft_putstr_non_printable(a);
	printf("\n");
	ft_putstr_non_printable(f);
}

