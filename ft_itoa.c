/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abasterr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 18:37:05 by abasterr          #+#    #+#             */
/*   Updated: 2022/11/07 18:43:14 by abasterr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
void	check_leaks(void)
{
	system("leaks a.out");
}*/

static int	ft_digit(int n)
{
	size_t	i;

	i = 0;
	if (n <= 0)
		i = 1;
	while (n != 0)
	{
		i++;
		n = n / 10;
	}
	return (i);
}

static void	ft_numtostr(int num, char *str, size_t i, size_t sign)
{
	str[i] = '\0';
	while (i != 0)
	{
		i--;
		str[i] = 48 + (num % 10);
		num = num / 10;
	}
	if (sign == 1)
	str[0] = '-';
}

char	*ft_itoa(int n)
{
	char	*str;
	size_t	digit;
	size_t	sign;

	digit = ft_digit(n);
	sign = 0;
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	str = (char *) malloc(sizeof(char) * (digit + 1));
	if (!str)
		return (NULL);
	if (n < 0)
	{
		n = n * (-1);
		sign = 1;
	}
	if (n == 0)
		str[0] = '0';
	ft_numtostr(n, str, digit, sign);
	return (str);
}
/*
#include <stdio.h>
int main()
{
	printf("%s\n", ft_itoa(0));
	atexit(check_leaks);
}*/