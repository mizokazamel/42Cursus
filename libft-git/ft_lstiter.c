/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkazamel <mkazamel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 22:10:15 by mkazamel          #+#    #+#             */
/*   Updated: 2024/08/15 22:32:19 by mkazamel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list	*current;

	current = lst;
	if (lst == NULL || f == NULL)
		return ;
	while (current != NULL)
	{
		f(current->content);
		current = current->next;
	}
	return ;
}
