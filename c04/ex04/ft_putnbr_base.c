/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yegpark <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/04 16:00:36 by yegpark           #+#    #+#             */
/*   Updated: 2023/04/04 16:00:42 by yegpark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
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

int	ft_is_valid(char *base)
{
	int	i;
	int	j;

	i = 0;
	if (base[i] == '\0' || ft_strlen(base) == 1)
	{
		return (1);
	}
	while (base[i])
	{
		j = i + 1;
		while (j < ft_strlen(base))
		{
			if (base[i] == base[j] || base[i] == '-' || base[i] == '+')
			{
				return (1);
			}
			j++;
		}
		i++;
	}
	return (0);
}

void	ft_putnbr(int nbr, char *base, int base_len)
{
	long	long_nbr;

	long_nbr = nbr;
	if (long_nbr < 0)
	{
		long_nbr = -long_nbr;
		ft_putchar('-');
	}
	if (long_nbr >= base_len)
	{
		ft_putnbr((long_nbr / base_len), base, base_len);
		ft_putnbr((long_nbr % base_len), base, base_len);
	}
	else
	{
		ft_putchar(base[long_nbr]);
	}
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	base_len;

	base_len = ft_strlen(base);
	if (ft_is_valid(base) == 1)
	{
		return ;
	}
	ft_putnbr(nbr, base, base_len);
}
/*
** Error handling:
	if base is empty or size 1 -> return (0)
	if base contains the same character twice -> return (0)
	if base contains + or -> return (0)
1. with ft_strlen, finding out which system
2. calculating the number based on the system
*/
/* int	main(void)
{
	ft_putnbr_base(10, "01");
	write(1, "\n", 1);
	ft_putnbr_base(20, "01234567");
	write(1, "\n", 1);
	ft_putnbr_base(20, "0123456789");
	write(1, "\n", 1);
	ft_putnbr_base(30, "0123456789ABCDEF");
	write(1, "\n", 1);
	ft_putnbr_base(-10, "01");
	write(1, "\n", 1);
	ft_putnbr_base(30, "0");
	write(1, "\n", 1);
	ft_putnbr_base(30, "01+222");
	write(1, "\n", 1);
	ft_putnbr_base(30, "01222");
}	 */