/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abasterr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 18:04:27 by abasterr          #+#    #+#             */
/*   Updated: 2022/11/10 19:32:22 by abasterr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_word_count(char const *str, char c)
{
	size_t	i;
	size_t	count;

	count = 0;
	i = 0;
	if (!str)
		return (0);
	while (str[i])
	{
		while (str[i] && str[i] == c)
			i++;
		if (!str[i])
			break ;
		count++;
		while (str[i] && str[i] != c)
			i++;
	}
	return (count);
}

static char	**ft_str_memory(char const *str, char c)
{
	size_t	count;
	char	**ptr;

	if (!str)
		return (0);
	count = ft_word_count(str, c);
	ptr = malloc(sizeof(char *) * (count + 1));
	if (!ptr)
		return (0);
	ptr[count] = NULL;
	return (ptr);
}

static char	**ft_free_array(char **str)
{
	size_t	i;

	i = 0;
	if (str == NULL)
		return (NULL);
	while (str[i] != NULL)
	{
		free (str[i]);
		i++;
	}
	free (str);
	return (str);
}

char	**ft_split(char const *s, char c)
{
	size_t	start;
	size_t	j;
	size_t	i;
	char	**ptr;

	ptr = ft_str_memory(s, c);
	i = 0;
	j = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (!s[i])
			break ;
		start = i;
		ptr[j++] = ft_substr(s, start, i - start);
		if (ptr [j - 1] == NULL)
			return (ft_free_array(ptr));
	}
	return (ptr);
	free (ptr);
}

/*
#include <stdio.h>
int main()
{
	char **ptr;
	char a[]="lorem ipsum dolor sit amet, consectetur adipiscing elit. 
	Sed non risus. Suspendisse";
	char c;
	int count;
	int i;

	i = 0;
	c = ' ';
	count = ft_word_count(a, c);
	ptr = ft_split(a, c);
	while(count--)
	{
		printf("%s\n", ptr[i]);
		i++;
	}
}*/