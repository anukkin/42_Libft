/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abasterr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 12:10:12 by abasterr          #+#    #+#             */
/*   Updated: 2022/11/07 19:16:31 by abasterr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	len;

	len = ft_strlen((char *)s);
	if (c == '\0')
		return (((char *)s) + len);
	while (len >= 0)
	{
		if (s[len] == (unsigned char)c)
			return (((char *)s) + len);
		len--;
	}
	return (0);
}
/*
#include <stdio.h>
#include <string.h>
int main()
{
	char a[10]="hola Juan";
	char c;

	c = 'h';
	printf("%s\n", a);
	printf("%s\n", strrchr(a, c));
}*/