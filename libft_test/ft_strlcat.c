/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfurtado <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 18:12:43 by gfurtado          #+#    #+#             */
/*   Updated: 2022/11/29 17:51:33 by gfurtado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	dsts;
	size_t	srcs;
	size_t	c;

	if (size == 0)
		return (ft_strlen(src));
	srcs = ft_strlen(src);
	dsts = ft_strlen(dst);
	c = dsts;
	i = 0;
	if (size <= dsts)
		return (srcs + size);
	while (src[i] && i < size - dsts - 1)
		dst[c++] = src[i++];
	dst[c] = '\0';
	return (dsts + srcs);
}
