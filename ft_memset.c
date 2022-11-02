/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abasterr <abasterr@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 18:07:19 by abasterr          #+#    #+#             */
/*   Updated: 2022/09/19 17:02:19 by abasterr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t	i;

	i = 0;
	while (i < len)
	{
		((unsigned char *)b)[i] = c;
		i++;
	}
	return (b);
}
/*
#include <string.h>
#include <stdio.h>
int main ()
{
	int n;
	char str[20] = "Hol";
	unsigned char c;

	n = 5;
	c = 't';
	ft_memset(str, c, n);
	
	printf("%s\n", str);
}*/