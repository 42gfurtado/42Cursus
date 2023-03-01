/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexadecimal.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfurtado <gfurtado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/06 16:06:49 by gfurtado          #+#    #+#             */
/*   Updated: 2023/02/23 18:52:18 by gfurtado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static	int	ft_hexlength(unsigned int nbr)
{
	int	length;

	length = 0;
	if (nbr == 0)
		length++;
	while (nbr > 0)
	{
		nbr /= 16;
		length++;
	}
	return (length);
}

static void	ft_printhex(unsigned int nbr, char format)
{
	if (nbr >= 16)
	{
		ft_printhex(nbr / 16, format);
		ft_printhex(nbr % 16, format);
	}
	else
	{
		if (nbr <= 9)
		{
			ft_putchar(nbr + '0');
		}
		else
		{
			if (format == 'x')
				ft_putchar(nbr - 10 + 'a');
			else
				ft_putchar(nbr - 10 + 'A');
		}
	}
}

int	ft_puthexadecimal(unsigned int nbr, char format)
{
	ft_printhex(nbr, format);
	return (ft_hexlength(nbr));
}
