/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkazamel <mkazamel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/14 00:27:33 by mkazamel          #+#    #+#             */
/*   Updated: 2024/08/17 19:17:11 by mkazamel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*current;
	t_list	*nextnode;

	if (*lst == NULL || del == NULL)
		return ;
	current = *lst;
	while (current != NULL)
	{
		nextnode = current->next;
		del(current->content);
		free(current);
		current = nextnode;
	}
	*lst = NULL;
	return ;
}
