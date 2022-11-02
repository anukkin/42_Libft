/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abasterr <abasterr@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 13:02:30 by abasterr          #+#    #+#             */
/*   Updated: 2022/09/27 16:52:10 by abasterr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	j;
	size_t	i;

	if (needle[0] == 0)
		return ((char *)haystack);
	i = 0;
	while (haystack[i] != '\0' && i < len - 1 && len)
	{
		j = 0;
		if (haystack[i] == needle[j])
		{
			while (haystack[i + j] == needle[j] && i + j < len)
			{
				j++;
				if (needle[j] == '\0')
					return ((char *)haystack + i);
			}
		}
		i++;
	}
	return (0);
}
/*
#include <stdio.h>
#include <string.h>
int main()
{
	char a1[20] = "AAAAAAAAAAAAA";
	char a2[20] = "AAAAAAAAAAAAA";
	int n;

	n = 12;

	printf("%s\n", strnstr(a1, a2, 13));
}*/