/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkazamel <mkazamel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/07 23:19:20 by mkazamel          #+#    #+#             */
/*   Updated: 2024/08/08 00:58:00 by mkazamel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	countsegments(char const *s, char c)
{
	size_t	count;
	int		insegment;

	count = 0;
	insegment = 0;
	while (*s)
	{
		while (*s == c && *s)
			s++;
		if (*s != c && insegment != 1)
		{
			insegment = 1;
			count++;
		}
		else
			insegment = 0;
		s++;
	}
	return (count);
}

char	**ft_split(char const *s, char c)
{
	char	**ptr;
	size_t	i;
	size_t	j;
	size_t	segments;

	i = 0;
	segments = 0;
	ptr = malloc((countsegments(s, c) + 1) * sizeof(char *));
	if (!ptr)
		return (NULL);
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		j = i;
		while (s[j] && s[j] != c)
			j++;
		if (segments == countsegments(s, c))
			break ;
		ptr[segments++] = ft_substr(s, i, j - i);
		i = j;
	}
	ptr[segments] = NULL;
	return (ptr);
}
