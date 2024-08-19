/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkazamel <mkazamel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/04 12:57:52 by mkazamel          #+#    #+#             */
/*   Updated: 2024/08/19 22:35:28 by mkazamel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char		*ptr;
	size_t		strlength;

	strlength = ft_strlen(s1);
	ptr = malloc(strlength + 1);
	if (ptr == NULL)
		return (NULL);
	ft_memcpy(ptr, s1, strlength + 1);
	return (ptr);
}
