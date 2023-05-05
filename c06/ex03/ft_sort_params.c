/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yegpark <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/05 16:37:18 by yegpark           #+#    #+#             */
/*   Updated: 2023/04/05 16:37:20 by yegpark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] && s2[i])
	{
		if (s1[i] != s2[i])
		{	
			return (s1[i] - s2[i]);
		}
		i++;
	}
	return (s1[i] - s2[i]);
}

void	ft_swap_string(char **s1, char **s2)
{
	char	*temp;

	temp = *s1;
	*s1 = *s2;
	*s2 = temp;
}

void	ft_print(int argc, char *argv[])
{
	int	c_argc;
	int	c_argv;

	c_argc = 1;
	while (c_argc < argc)
	{
		c_argv = 0;
		while (argv[c_argc][c_argv] != '\0')
		{
			write (1, &argv[c_argc][c_argv], 1);
			c_argv++;
		}
		write (1, "\n", 1);
		c_argc++;
	}
}

int	main(int argc, char *argv[])
{
	int	c_argc;

	c_argc = 1;
	while (c_argc < argc - 1)
	{
		if (ft_strcmp(argv[c_argc], argv[c_argc + 1]) > 0)
		{
			ft_swap_string(&argv[c_argc], &argv[c_argc + 1]);
			c_argc = 1;
		}
		else
		{
			c_argc ++;
		}
	}
	ft_print(argc, argv);
	return (0);
}

/*
1. compare single strings/ compare each element 
	1.1 if same number, go next and compare
2. if smaller number found, swap (strcmp < 0, swap)
3. compare from the beginning again
swap
strcmp
*/