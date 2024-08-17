/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkazamel <mkazamel@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/27 11:09:15 by mkazamel          #+#    #+#             */
/*   Updated: 2024/07/27 12:20:03 by mkazamel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	hi;
	size_t	ni;

	// if (!haystack || !needle)
	// 	return (NULL);
	if (*needle == '\0')
		return ((char *)haystack);
	hi = 0;
	while (haystack[hi] != '\0' && hi < len)
	{
		ni = 0;
		while ((hi + ni) < len
			&& needle[ni] != '\0'
			&& needle[ni] == haystack[hi + ni])
			ni++;
		if (needle[ni] == '\0')
			return ((char *)(haystack + hi));
		hi++;
	}
	return (NULL);
}
