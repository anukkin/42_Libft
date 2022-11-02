/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abasterr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 14:33:53 by abasterr          #+#    #+#             */
/*   Updated: 2022/10/27 19:00:16 by abasterr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	size_t	len;
	char	*ptr;
	int		i;

	i = 0;
	len = ft_strlen((char *)s1);
	ptr = (char *)malloc(sizeof(char *) * (len + 1));
	if (ptr == NULL)
		return (0);
	while (s1[i] != '\0')
	{
		ptr[i] = s1[i];
		i++;
	}
	ptr[i] = '\0';
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