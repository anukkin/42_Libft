/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abasterr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 14:33:53 by abasterr          #+#    #+#             */
/*   Updated: 2022/11/07 19:34:13 by abasterr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	size_t	len;
	char	*ptr;
	int		i;

	i = 0;
	len = ft_strlen(s1);
	if (!s1)
		return (0);
	ptr = malloc(sizeof(char) * (len + 1));
	if (!ptr)
		return (0);
	ft_strlcpy(ptr, s1, len + 1);
	return (ptr);
}
/*
#include <string.h>
#include <stdio.h>

int main()
{
	char a[20] = "hola que tal";
	char *b =  NULL;

	b=strdup(a);
	printf("%s\n", b);
	return(0);

}*/