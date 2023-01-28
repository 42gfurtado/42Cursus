/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfurtado <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 15:04:16 by gfurtado          #+#    #+#             */
/*   Updated: 2023/01/16 17:56:14 by gfurtado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int	verifyn(char *s)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (s[j] != '\0')
		j++;
	while (!(s[i] == '\n') && s[i])
		i++;
	if (s[i] == j)
		return (-1);
	return (i);
}

void	join(char *src, char *dst)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while(src[i] != '\0')
		i++;
	while(dst[i] != '\0')
		j++;
	dst = (char *)malloc(sizeof(char) * i + j + 1);
	while (i < j)
		dst[i++] = src[i];
	dst[i] = '\0';
}

int	
