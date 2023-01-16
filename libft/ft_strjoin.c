/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfurtado <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 13:32:27 by gfurtado          #+#    #+#             */
/*   Updated: 2022/11/29 14:38:30 by gfurtado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	size_t	i;
	size_t	ii;

	i = 0;
	ii = 0;
	if (!s1)
		return ((char *)s1);
	str = (char *)malloc(sizeof(char) * ft_strlen(s1) + ft_strlen(s2) + 1);
	if (!str)
		return (NULL);
	while (s1[i] != '\0')
		str[i++] = s1[ii++];
	ii = 0;
	while (s2[ii] != '\0')
		str[i++] = s2[ii++];
	str[i] = '\0';
	return (str);
}
