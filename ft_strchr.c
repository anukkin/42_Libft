/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abasterr <abasterr@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 17:36:51 by abasterr          #+#    #+#             */
/*   Updated: 2022/09/27 19:20:38 by abasterr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	if (c == '\0')
	{
		while (s[i] != '\0')
			i++;
		return (((char *)s) + i);
	}
	while (s[i] != '\0')
	{
		if (s[i] == c)
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
	char a[]="tripouille";
//	char c;

	//c = '\0';
	printf("%s\n", a);
	printf("%s\n", ft_strchr(a, 't' + 256));
}*/