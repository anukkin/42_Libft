/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abasterr <abasterr@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 14:45:49 by abasterr          #+#    #+#             */
/*   Updated: 2022/09/27 18:39:34 by abasterr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	j;

	if (dst == 0 && src == 0)
		return (0);
	if (dst > src)
	{
		while (len > 0)
		{
			((char *)dst)[len - 1] = ((char *)src)[len - 1];
			len--;
		}
	}
	else
	{
		j = 0;
		while (j < len)
		{
			((char *)dst)[j] = ((char *)src)[j];
			j++;
		}
	}
	return (dst);
}
/*
#include <string.h>
{
	size_t a;
	char src[30]= "hola que tal juan";
//	char dst[15]= "Se acabaron";

	a = 17;

	printf("%s\n", src);
	printf("%s\n", memmove(src+3, src, 6));
	printf("%s\n", src);
}*/