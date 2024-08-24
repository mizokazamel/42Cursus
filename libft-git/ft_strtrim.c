/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkazamel <mkazamel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/05 23:13:48 by mkazamel          #+#    #+#             */
/*   Updated: 2024/08/24 14:19:04 by mkazamel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_startindex(char const *s1, char const *set)
{
	size_t	startposition;
	size_t	setposition;

	startposition = 0;
	while (s1[startposition])
	{
		setposition = 0;
		while (set[setposition])
		{
			if (s1[startposition] == set[setposition])
			{
				startposition++;
				break ;
			}
			else
				setposition++;
		}
		if (!set[setposition])
			break ;
	}
	return (startposition);
}

size_t	ft_endindex(char const *s1, char const *set)
{
	int		endposition;
	size_t	setposition;

	endposition = ft_strlen(s1) - 1;
	while (endposition >= 0)
	{
		setposition = 0;
		while (set[setposition])
		{
			if (s1[endposition] == set[setposition])
			{
				endposition--;
				break ;
			}
			else
				setposition++;
		}
		if (!set[setposition])
			break ;
	}
	if (endposition < 0)
		return (0);
	else
		return ((size_t)endposition);
}

char	*ft_mtstr(void)
{
	char	*mtstr;

	mtstr = ft_calloc(1, sizeof(char));
	if (!mtstr)
		return (NULL);
	else
		return (mtstr);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	sp;
	size_t	ep;
	char	*rtnstr;

	if (!s1 || !set)
		return (NULL);
	sp = ft_startindex(s1, set);
	ep = ft_endindex(s1, set);
	if (*s1 == '\0' || sp > ep)
		return (ft_mtstr());
	rtnstr = ft_calloc((ep - sp + 2), sizeof(char));
	if (!rtnstr)
		return (NULL);
	ft_strlcpy(rtnstr, &s1[sp], (ep - sp + 2));
	return (rtnstr);
}
