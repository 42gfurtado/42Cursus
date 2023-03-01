/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunsigned.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfurtado <gfurtado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/06 16:05:50 by gfurtado          #+#    #+#             */
/*   Updated: 2023/02/23 18:53:08 by gfurtado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	get_length(unsigned int nbr)
{
	unsigned int	length;

	length = 0;
	if (nbr == 0)
		length++;
	while (nbr != 0)
	{
		length++;
		nbr /= 10;
	}
	return (length);
}

static char	*ft_utoa(unsigned int nbr)
{
	unsigned int	length;
	char			*str;

	length = get_length(nbr);
	str = (char *)malloc((length + 1) * sizeof(char));
	if (!str)
		return (NULL);
	str[length] = '\0';
	if (nbr == 0)
		str[0] = '0';
	while (nbr != 0)
	{
		str[--length] = nbr % 10 + 48;
		nbr /= 10;
	}
	return (str);
}

int	ft_putunsigned(unsigned int nbr)
{
	char	*str;
	int		length;

	str = ft_utoa(nbr);
	length = ft_putstr(str);
	free(str);
	return (length);
}
