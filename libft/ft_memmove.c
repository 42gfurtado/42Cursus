/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfurtado <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 15:30:39 by gfurtado          #+#    #+#             */
/*   Updated: 2022/11/29 17:50:31 by gfurtado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	const char	*old;
	char		*new;

	new = dest;
	old = src;
	if (!src && !dest)
		return (NULL);
	if (dest < src)
		ft_memcpy(new, old, n);
	else
	{
		while (n-- != 0)
			new[n] = old[n];
	}
	return (new);
}
