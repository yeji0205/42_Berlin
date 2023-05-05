/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yegpark <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/05 00:31:22 by yegpark           #+#    #+#             */
/*   Updated: 2023/04/05 00:31:25 by yegpark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	dest_len;
	unsigned int	src_len;

	dest_len = ft_strlen(dest);
	src_len = ft_strlen(src);
	if (dest_len <= size)
	{
		return (dest_len + src_len);
	}
	i = 0;
	while (i < size && src[i])
	{
		dest[dest_len] = src[i];
		i++;
		dest_len++;
	}
	dest[dest_len] = '\0';
	return (dest_len);
}
/*
dest_len <  size : src_len + dest_len을 반환
dest_len > size : src_len + size를 반환
strlcat() functions return 
	the total length of the string they tried to create
*/
/* #include <stdio.h>
#include <string.h>

int	main()
{
	char dest[15] = "Hello";
	char src[] = ", world!";

	printf("%d\n", ft_strlcat(dest, src, 20)); // 13
	printf("%d\n", ft_strlcat(dest, src, 1)); // 6
} */