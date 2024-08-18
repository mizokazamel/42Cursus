/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkazamel <mkazamel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/27 23:24:45 by mkazamel          #+#    #+#             */
/*   Updated: 2024/08/18 12:29:12 by mkazamel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	const char	*end;

	end = s;
	while (*end)
		end++;
	if (c == '\0')
		return ((char *)end);
	while (end != s)
	{
		end--;
		if (*end == (char)c)
			return ((char *)end);
	}
	if ((*end == (char)c))
		return ((char *)end);
	return (0);
}
