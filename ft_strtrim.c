/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abasterr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 13:44:14 by abasterr          #+#    #+#             */
/*   Updated: 2022/11/14 13:54:56 by abasterr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_check(char const *s1, char c)
{
	size_t	i;

	i = 0;
	while (s1[i])
	{
		if (s1[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*ptr;
	size_t	start;
	size_t	end;

	start = 0;
	if (!s1)
		return (0);
	end = ft_strlen((char *)s1);
	if (!set)
		return (ft_strdup(s1));
	while ((set + start) && ft_check(set, s1[start]))
		start++;
	while ((end > start) && ft_check(set, s1[end - 1]))
		end--;
	if (start == end)
		return (ft_strdup(""));
	ptr = malloc(sizeof(char) * (end - start + 1));
	if (!ptr)
		return (0);
	ft_strlcpy(ptr, s1 + start, end - start + 1);
	return (ptr);
}

/*
#include <stdio.h>
#include <unistd.h>

int main()
{
	//char *ptr;
	//ptr= ft_strtrim("", "");
	printf("%s", ft_strtrim("      ", " "));
	//write(1, &ptr[0], 1);
}
*/