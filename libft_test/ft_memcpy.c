/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfurtado <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 14:21:15 by gfurtado          #+#    #+#             */
/*   Updated: 2022/11/29 17:27:44 by gfurtado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t		i;
	const char	*str;
	char		*res;

	res = dest;
	str = src;
	i = 0;
	if (!dest && !src)
		return (dest);
	while (i < n)
	{
		res[i] = str[i];
		i++;
	}
	return (res);
}
