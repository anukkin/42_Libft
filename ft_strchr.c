/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abasterr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 17:36:51 by abasterr          #+#    #+#             */
/*   Updated: 2022/11/14 16:34:16 by abasterr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	if ((char)c == '\0')
	{
		while (s[i] != '\0')
			i++;
		return (((char *)s) + i);
	}
	while (s[i])
	{
		if (s[i] == (char)c)
			return (((char *)s) + i);
		i++;
	}
	return (0);
}
/*
#include <stdio.h>
#include <string.h>
int main()
{
	char a[]="teste";
//	char c;

	//c = '\0';
	printf("%s\n", a);
	printf("%c\n", (unsigned char)1024);
	printf("%s\n", ft_strchr(a, 1024));
	printf("%s\n", strchr(a, 1024));
}*/