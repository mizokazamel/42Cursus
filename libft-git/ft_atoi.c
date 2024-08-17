/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkazamel <mkazamel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/28 23:24:14 by mkazamel          #+#    #+#             */
/*   Updated: 2024/07/29 01:14:42 by mkazamel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isspace(char c)
{
	if (c == 32 || (c >= 9 && c <= 13))
		return (1);
	else
		return (0);
}

int	ft_signed(char c)
{
	if (c == 45)
		return (-1);
	return (1);
}

int	ft_int_overflow(int num, int digit, int sign)
{
	if (num > (INT_MAX / 10))
	{
		if (sign == 1)
			return (INT_MAX);
		else
			return (INT_MIN);
	}
	else if (num == (INT_MAX / 10))
	{
		if ((sign == 1) && digit > (INT_MAX % 10))
			return (INT_MAX);
		else if ((sign == -1) && (digit > INT_MAX % 10))
			return (INT_MIN);
	}
	return (0);
}

int	ft_atoi(const char *str)
{
	int	i;
	int	sign;
	int	num;
	int	overflowcheck;

	i = 0;
	num = 0;
	sign = 1;
	while (ft_isspace(str[i]) == 1)
		i++;
	if (str[i] == 43 || str[i] == 45)
	{
		sign *= ft_signed(str[i]);
		i++;
	}
	while (str[i] >= 48 && str[i] <= 57)
	{
		overflowcheck = ft_int_overflow(num, str[i] - 48, sign);
		if (overflowcheck)
			return (overflowcheck);
		num = num * 10 + (str[i] - 48);
		i++;
	}
	return (sign * num);
}
