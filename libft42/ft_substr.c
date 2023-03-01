/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfurtado <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 12:18:55 by gfurtado          #+#    #+#             */
/*   Updated: 2022/11/29 13:30:40 by gfurtado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	i;

	i = 0;
	if (!s)
		return (NULL);
	str = (char *) malloc(len + 1);
	if (!str)
		return (NULL);
	while (i < len && start <= ft_strlen(s))
		str[i++] = s[start++];
	str[i] = '\0';
	return (str);
}
