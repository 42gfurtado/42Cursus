/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexadecial.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfurtado <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/06 16:06:49 by gfurtado          #+#    #+#             */
/*   Updated: 2023/01/06 16:07:09 by gfurtado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_hexlen(unsigned int num)
{
	int	length;

	length = 0;
	while (num != 0)
	{
		num = num / 16;
		length++;
	}
	return (length);
}

void	ft_printhex(unsigned int num, const char format)
{
	if (num >= 16)
	{
		ft_printhex(num / 16, format);
		ft_printhex(num % 16, format);
	}
	else
	{
		if (num <= 9)
			ft_putchar((num + '0'));
		else
		{
			if (format == 'x')
				ft_putchar((num - 10 + 'a'));
			if (format == 'X')
				ft_putchar((num - 10 + 'A'));
		}
	}
}

int	ft_puthexadecimal(unsigned int num, const char type)
{
	if (num == 0)
		return (write(1, "0", 1));
	else
		ft_printhex(num, type);
	return (ft_hexlen(num));
}
