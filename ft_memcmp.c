/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abasterr <abasterr@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 17:39:10 by abasterr          #+#    #+#             */
/*   Updated: 2022/09/21 17:59:17 by abasterr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*a1;
	unsigned char	*a2;

	a1 = (unsigned char *)s1;
	a2 = (unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		if (a1[i] != a2[i])
			return (a1[i] - a2[i]);
		i++;
	}
	return (0);
}

/*int main()
{
	//char a1[20] = "Hola qua tal";
	//char a2[20] = "Hola que tal";
	//size_t a;

	//a = 14;
	printf("%d\n", ft_memcmp("t\200", "t\0", 2));
//	printf("%s %s\n", "t\200", "t\0");
//	printf("%d\n", ft_memcmp("zyxbcdefgh", "abcdefgxyz", 0));
	return (0);
}*/