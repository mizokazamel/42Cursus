/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkazamel <mkazamel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/07 22:11:47 by mkazamel          #+#    #+#             */
/*   Updated: 2024/08/07 22:26:32 by mkazamel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	size_t			length;
	char			*str;

	i = 0;
	length = ft_strlen(s);
	str = malloc((length + 1) * sizeof(char));
	if (!str)
		return (NULL);
	while (s[i])
		str[i] = f(i, s[i++]);
	str[i] = '\0';
	return (str);
}
