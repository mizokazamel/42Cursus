/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkazamel <mkazamel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/05 23:13:48 by mkazamel          #+#    #+#             */
/*   Updated: 2024/08/06 00:41:10 by mkazamel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	checkchr(char c, char const *set)
{
	size_t	i;

	i = 0;
	while (set[i] != '\0')
	{
		if (set[i++] == c)
			return (1);
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	startposition;
	size_t	endposition;
	size_t	i;
	int		strlength;
	char	*ptr;

	strlength = ft_strlen(s1);
	i = 0;
	startposition = 0;
	endposition = strlength;
	if (!s1)
		return (NULL);
	if (strlength == 0)
		return (ft_strdup(""));
	while (startposition < strlength && checkchr(s1[startposition], set))
		startposition++;
	while (endposition > 0 && checkchr(s1[endposition - 1], set))
		endposition--;
	strlength = endposition - startposition;
	ptr = ft_calloc(strlength + 1, 1);
	if (!ptr)
		return (NULL);
	while (startposition + i != endposition)
		ptr[i] = s1[startposition + i++];
	return (ptr);
}
