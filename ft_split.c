/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abasterr <abasterr@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 14:16:39 by abasterr          #+#    #+#             */
/*   Updated: 2022/10/13 17:44:17 by abasterr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//#include <stdio.h>

char **ft_split(char const *s, char c)
{
	size_t	i;
	size_t	j;
	size_t	k;
	size_t	count;
	char	**ptr;

	i = 0;
	j = 0;
	k = 0;
	count = 0;

	while(s[i] == c)
		i++;
	while (s[i] != '\0')
	{
		if (s[i] != c)
		{
			if (s[i + 1] == c || s[i + 1] == '\0')
				count++;
		}
		i++;
	}
//	printf("número de cadenas: %zu\n", count);
	ptr = malloc(sizeof(char **) * (count + 1));
	if (ptr == NULL)
		return (ptr);
	i = 0;
	while (s[i] == c)
		i++;
	while (s[i] != '\0')
	{
		if (s[i] != c)
		{
			k++;
			if (s[i + 1] == c || s[i + 1] == '\0')
			{
				ptr[j] = malloc(sizeof(char *) * (k + 1));
				k = 0;
				j++;
			}
		}
		i++;
	}
	i = 0;
	j = 0;
	k = 0;
	while (s[i] == c)
		i++;
	while (s[i] != '\0')
	{
		if (s[i] != c)
		{
			ptr[j][k] = s[i];
			k++;
			if (s[i + 1] == c || s[i + 1] == '\0')
			{
				ptr[j][k] = '\0';
				k = 0;
				j++;
			}
		}
		i++;
	}
	return (ptr);
	free (ptr);
}
/*
#include <stdio.h>
int main()
{
	char **ptr;
//	char a[]="hooola queotal";
	char c;

	c = 'o';
	ptr = ft_split("lorem ipsum dolor sit amet, consectetur adipiscing elit. Sed non risus. Suspendisse", ' ');
	while()
	printf("%s\n%s\n", ptr[0], ptr[1]);
}*/