/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkazamel <mkazamel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/04 12:57:52 by mkazamel          #+#    #+#             */
/*   Updated: 2024/08/04 13:03:53 by mkazamel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*ptr;
	int		strlen;

	strlen = ft_strlen(s1);
	ptr = malloc(strlen + 1);
	if (ptr == NULL)
		return (NULL);
	ft_strlcpy(ptr, s1, strlen + 1);
	return (ptr);
}
