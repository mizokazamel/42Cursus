/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkazamel <mkazamel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/06 21:10:47 by mkazamel          #+#    #+#             */
/*   Updated: 2024/08/06 22:09:51 by mkazamel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_numdigits(long n)
{
	size_t	length;

	length = 0;
	if (n == 0)
		return (1);
	while (n)
	{
		n /= 10;
		length++;
	}
	return (length);
}

char	*assignzero(void)
{
	char	*ptr;

	ptr = ft_calloc(2, 1);
	if (!ptr)
		return (NULL);
	ptr [0] = '0';
	return (ptr);
}

void	convert_to_string(char *ptr, long n, size_t length, int isnegative)
{
	int		remainder;

	while (n != 0)
	{
		remainder = n % 10;
		n /= 10;
		ptr[length - 1] = remainder + '0';
		length--;
	}
	if (isnegative == 1)
		ptr[length] = '-';
}

char	*ft_itoa(int n)
{
	size_t	length;
	char	*ptr;
	int		isnegative;
	long	n_long;

	if (n == 0)
		return (assignzero());
	isnegative = 0;
	if (n < 0)
	{
		isnegative = 1;
		n_long = -(long)n;
	}
	else
		n_long = n;
	length = ft_numdigits(n_long);
	if (isnegative)
		length++;
	ptr = ft_calloc(length + 1, 1);
	if (!ptr)
		return (NULL);
	convert_to_string(ptr, n_long, length, isnegative);
	return (ptr);
}
