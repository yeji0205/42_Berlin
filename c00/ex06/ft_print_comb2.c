/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yegpark <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 19:05:57 by yegpark           #+#    #+#             */
/*   Updated: 2023/03/22 19:43:47 by yegpark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char a, char b, char c, char d)
{
	while (d <= 57)
	{
		write(1, &a, 1);
		write(1, &b, 1);
		write(1, " ", 1);
		write(1, &c, 1);
		write(1, &d, 1);
		if (a != 57 || b != 56 || c != 57 || d != 57)
		{
			write(1, ", ", 2);
		}
		d++;
	}
}

void	ft_print_comb2(void)
{
	char	a;
	char	b;
	char	c;
	char	d;

	a = 48;
	b = 48;
	while (a <= 57)
	{
		while (b <= 57)
		{
			c = a;
			d = b + 1;
			while (c <= 57)
			{
				ft_putchar(a, b, c, d);
				d = 48;
				c++;
			}
			b++;
		}
		b = 48;
		a++;
	}
}

/*
int	main(void)
{
	ft_print_comb2();
}
*/
