/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abasterr <abasterr@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 12:29:24 by abasterr          #+#    #+#             */
/*   Updated: 2022/09/19 17:02:38 by abasterr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	unsigned int	i;
	unsigned int	c;

	i = 0;
	c = 0;
	if (dstsize != 0)
	{
		while (src[i] != '\0' && i < dstsize - 1)
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	while (src[c] != '\0')
		c++;
	return (c);
}
/*
#include <string.h>
#include <stdio.h>
int main()
{
	size_t a;
	char src[20]= "hola que tal";
	char dst[20]= "Se acabaron";

	a = 7;

	printf("%s\n", dst);
	printf("%lu\n", ft_strlcpy(dst, src, a));
	printf("%s\n", dst);
}*/