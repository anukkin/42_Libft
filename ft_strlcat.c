/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abasterr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 12:56:36 by abasterr          #+#    #+#             */
/*   Updated: 2022/10/27 19:14:33 by abasterr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	len_src;
	size_t	i;
	size_t	j;

	j = 0;
	i = 0;
	len_src = ft_strlen((char *)src);
	while (dst[i] != '\0' && i < dstsize)
		i++;
	while (src[j] != '\0' && i + j + 1 < dstsize)
	{
		dst[i + j] = src[j];
		j++;
	}
	if (j != 0)
		dst[i + j] = '\0';
	return (len_src + i);
}
/*
#include <string.h>
#include <stdio.h>
int main()
{
	size_t a;
	//char src[]= "hola que tal";
	char dst[15];

	a = 9;
	memset(dst, 'r', 15);
	printf("%s\n", dst);
	printf("%zu\n", ft_strlcat(dst, "lorem ipsum dolor sit amet", 5));
//	printf("%lu\n", strlcat(dst, src, a));
	printf("%s\n", dst);
}*/