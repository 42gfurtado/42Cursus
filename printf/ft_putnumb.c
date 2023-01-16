/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnumb.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfurtado <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/04 20:46:54 by gfurtado          #+#    #+#             */
/*   Updated: 2023/01/06 16:23:56 by gfurtado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnumb(int n)
{
	int		len;
	char	*str;

	str = ft_itoa(n);
	len = ft_putstr(str);
	free(str);
	return (len);
}
