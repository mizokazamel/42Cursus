/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkazamel <mkazamel@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/27 23:24:45 by mkazamel          #+#    #+#             */
/*   Updated: 2024/08/17 19:13:51 by mkazamel         ###   ########.fr       */
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
		if ((*--end == (char)c))
			return ((char *)end);
	}
	if ((*end == (char)c))
		return ((char *)end);
	return (0);
}
