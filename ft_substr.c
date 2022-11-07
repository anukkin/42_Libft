/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abasterr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 16:39:55 by abasterr          #+#    #+#             */
/*   Updated: 2022/11/07 19:39:27 by abasterr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*ptr;
	size_t	i;
	size_t	j;

	if (s == NULL)
		return (0);
	ptr = malloc(sizeof(char *) * (len + 1));
	if (!ptr)
		return (NULL);
	i = start;
	j = 0;
	while (s[i] != '\0' && j < len && ft_strlen((char *) s) > start)
	{
		ptr[j] = ((char *)s)[i];
		j++;
		i++;
	}
	ptr[j] = '\0';
	return (ptr);
}

/*
#include<stdio.h>

int main()
{
    printf("%s", ft_substr("i just wa", 10, 2));
}*/