/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkazamel <mkazamel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 23:25:51 by mkazamel          #+#    #+#             */
/*   Updated: 2024/08/16 00:11:24 by mkazamel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstmap_add_node(t_list **newlsthead,
		t_list *newnode, t_list **lastnewnode)
{
	if (*newlsthead == NULL)
	{
		*newlsthead = newnode;
		*lastnewnode = newnode;
	}
	else
	{
		(*lastnewnode)->next = newnode;
		*lastnewnode = newnode;
	}
}

t_list	*ft_lstmap(t_list *lst, void (*f)(void *), void (*del)(void *))
{
	t_list	*currentlst;
	t_list	*newlsthead;
	t_list	*newnode;
	t_list	*lastnewnode;

	currentlst = lst;
	newlsthead = NULL;
	while (currentlst != NULL)
	{
		newnode = ft_lstnew(f(currentlst->content));
		if (newnode == NULL)
		{
			ft_lstclear(&newlsthead, del);
			return (NULL);
		}
		ft_lstmap_add_node(&newlsthead, newnode, &lastnewnode);
		currentlst = currentlst->next;
	}
	return (newlsthead);
}
