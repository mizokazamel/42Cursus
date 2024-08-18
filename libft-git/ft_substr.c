/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkazamel <mkazamel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/04 23:02:28 by mkazamel          #+#    #+#             */
/*   Updated: 2024/08/18 12:36:38 by mkazamel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	strlen;
	char	*substring;
	size_t	i;

	i = -1;
	strlen = ft_strlen(s);
	if (start >= strlen)
		return (ft_strdup(""));
	substring = malloc(len + 1);
	if (!substring)
		return (NULL);
	while (s[start + ++i] && i < len)
		substring[i] = s[start + i];
	substring[i] = '\0';
	return (substring);
}
