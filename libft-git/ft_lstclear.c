/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkazamel <mkazamel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/14 00:27:33 by mkazamel          #+#    #+#             */
/*   Updated: 2024/08/15 21:31:34 by mkazamel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
