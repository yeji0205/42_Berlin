/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yegpark <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 17:18:51 by yegpark           #+#    #+#             */
/*   Updated: 2023/03/29 19:18:31 by yegpark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;

	i = 0;
	if (size == 0)
	{
		return (0);
	}
	while (src[i] != '\0' && i < (size - 1))
	{
		dest[i] = src[i];
		i++;
	}
	while (i < size)
	{
		dest[i] = '\0';
		i++;
	}
	return (0);
}

#include <stdio.h>

int	main(void)
{
	char src[] = "it is a source code";
	char dest[] ="let's refresh the destination code";

	printf("%s\n", dest);

	ft_strlcpy(dest, src, 0);
	printf("%s\n", dest);

	ft_strlcpy(dest, src, 1);
	printf("%s\n", dest);

	ft_strlcpy(dest, src, 30);
	printf("%s\n", dest);
}

