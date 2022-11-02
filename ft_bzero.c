/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abasterr <abasterr@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 18:40:47 by abasterr          #+#    #+#             */
/*   Updated: 2022/09/19 17:00:43 by abasterr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *str, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		((unsigned char *)str)[i] = '\0';
		i++;
	}
}
/*
#include <stdio.h>
#include <string.h>
int main ()
{
	int n;
	char str[20] = "Hola que tal";

	n = 1;
	
	bzero(str, n);
	
	printf("%s\n", str);
}*/