/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkazamel <mkazamel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/04 23:02:28 by mkazamel          #+#    #+#             */
/*   Updated: 2024/08/19 23:27:01 by mkazamel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substring;
	int		i;
	int		copylength;

	if (!s)
		return (NULL);
	if (*s == '\0' || (start > ft_strlen(s) - 1) || len == 0)
		return (ft_strdup(""));
	if (len > (ft_strlen(s) - start))
		copylength = ft_strlen(s) - start;
	else
		copylength = len;
	substring = malloc((copylength + 1) * sizeof(char));
	if (!substring)
		return (NULL);
	i = 0;
	while (i < copylength)
	{
		substring[i] = s[start + i];
		i++;
	}
	substring[i] = '\0';
	return (substring);
}
