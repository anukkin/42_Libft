/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abasterr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 12:35:17 by abasterr          #+#    #+#             */
/*   Updated: 2022/11/07 19:14:44 by abasterr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return (0);
	while (n)
	{
		if (((char *)s)[i] == (unsigned char)c)
			return (((char *)s) + i);
		i++;
		n--;
	}
	return (0);
}
/*
#include <stdio.h>
#include <string.h>
int main()
{
	char a[10]="bonjourno";
	char c;
	int n;

	n = 5;

	c = 'a';
	printf("%s\n", a);
	printf("%s\n", ft_memchr("bonjourno", 'n', 2));
}*/