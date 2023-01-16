/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfurtado <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/26 13:54:43 by gfurtado          #+#    #+#             */
/*   Updated: 2022/11/26 13:58:15 by gfurtado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*mem_alloc;

	mem_alloc = malloc(nmemb * size);
	if (!mem_alloc)
		return (0);
	ft_bzero(mem_alloc, nmemb * size);
	return (mem_alloc);
}
