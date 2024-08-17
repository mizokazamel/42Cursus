/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkazamel <mkazamel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/10 22:06:43 by mkazamel          #+#    #+#             */
/*   Updated: 2024/08/14 00:16:06 by mkazamel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*currentptr;

	if (*lst == NULL)
	{
		*lst = new;
		return ;
	}
	currentptr = *lst;
	while (currentptr -> next != NULL)
		currentptr = currentptr -> next;
	currentptr -> next = new;
	return ;
}
