/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkazamel <mkazamel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/05 00:08:21 by mkazamel          #+#    #+#             */
/*   Updated: 2024/08/05 00:20:25 by mkazamel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		slen1;
	int		slen2;
	char	*ptr;
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	slen1 = ft_strlen(s1);
	slen2 = ft_strlen(s2);
	ptr = malloc(slen1 + slen2 + 1);
	if (!ptr)
		return (NULL);
	while (i < slen1 && s1[i])
		ptr[i] = s1[i++];
	while (i + j < slen1 + slen2 && s2[j])
		ptr[i + j] = s2[j++];
	ptr[i + j] = '\0';
	return (ptr);
}
