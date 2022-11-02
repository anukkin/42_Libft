/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abasterr <abasterr@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 17:53:50 by abasterr          #+#    #+#             */
/*   Updated: 2022/10/25 18:59:18 by abasterr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{	
	t_list	*tmp;

	if (*lst && new)
	{
		tmp = lst[0];
		while (tmp->next)
			tmp = tmp->next;
		tmp->next = new;
	}
	else if (new)
		*lst = new;
}
