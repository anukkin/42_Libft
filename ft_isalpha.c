/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abasterr <abasterr@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 12:18:14 by abasterr          #+#    #+#             */
/*   Updated: 2022/09/26 19:09:21 by abasterr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	if (c < 'A' || (c > 'Z' && c < 'a') || c > 'z')
		return (0);
	else
		return (1);
}
/*
#include <stdio.h>
#include <ctype.h>
int main()
{
	char	a;

    a = '3';
	
	printf("%d\n",ft_isalpha(a));
    printf("%d\n",isalpha(a));
	return 0;
}*/