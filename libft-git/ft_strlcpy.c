/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkazamel <mkazamel@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 22:54:59 by mkazamel          #+#    #+#             */
/*   Updated: 2024/07/24 23:17:32 by mkazamel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *restrict dst, const char *restrict src, size_t dstsize)
{
	int	len;
	int	i;

	len = ft_strlen(src);
	if (dstsize == 0)
		return (len);
	i = 0;
	if ((size_t)len < dstsize)
	{
		while (i < len)
			dst[i] = src[i++];
	}
	else
	{
		while (i < ((int)dstsize - 1))
			dst[i] = src[i++];
	}
	dst[i] = '\0';
	return (len);
}
