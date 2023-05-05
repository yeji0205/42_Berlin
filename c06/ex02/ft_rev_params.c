/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yegpark <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/05 15:32:28 by yegpark           #+#    #+#             */
/*   Updated: 2023/04/05 15:32:30 by yegpark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	main(int argc, char *argv[])
{
	int	c_argv;
	int	c_argc;

	c_argc = argc - 1;
	while (0 < c_argc)
	{
		c_argv = 0;
		while (argv[c_argc][c_argv] != '\0')
		{
			write (1, &argv[c_argc][c_argv], 1);
			c_argv++;
		}
		write (1, "\n", 1);
		c_argc--;
	}
	return (0);
}

/*
./a.out test1 test2 test3

argc : number of the arguments
argv[i][j]: except argv[0][i], actual values of the arguments 
col_row[4][4] = {{a, ., o, u, t, \0}, 
                 {t, e, s, t, 1, \0}, 
                 {t, e, s, t, 2, \0}, 
                 {t, e, s, t, 3, \0}};
*/
