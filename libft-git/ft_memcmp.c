/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkazamel <mkazamel@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 22:50:06 by mkazamel          #+#    #+#             */
/*   Updated: 2024/08/17 19:13:22 by mkazamel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*src1;
	const unsigned char	*src2;

	src1 = (const unsigned char *)s1;
	src2 = (const unsigned char *)s2;
	while (n--)
	{
		if (*src1 != *src2)
			return (*src1 - *src2);
		src1++;
		src2++;
	}
	return (0);
}
