/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkazamel <mkazamel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 22:25:08 by mkazamel          #+#    #+#             */
/*   Updated: 2024/08/23 22:27:33 by mkazamel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	forwardmove(unsigned char *d, unsigned char *s, size_t len)
{
	size_t	count;

	count = 0;
	while (count < len)
	{
		d[count] = s[count];
		count++;
	}
	return ;
}

void	backmove(unsigned char *d, unsigned char *s, size_t len)
{
	size_t	count;

	count = len;
	while (count > 0)
	{
		count--;
		d[count] = s[count];
	}
	return ;
}

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*d;
	unsigned char	*s;

	d = (unsigned char *)dst;
	s = (unsigned char *)src;
	if (!dst || !src)
		return (NULL);
	if (len == 0)
		return (dst);
	if (src < dst && dst < src + len)
		backmove(d, s, len);
	else
		forwardmove(d, s, len);
	return (dst);
}
