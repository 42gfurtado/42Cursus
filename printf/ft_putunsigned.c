/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunsigned.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfurtado <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/06 16:05:50 by gfurtado          #+#    #+#             */
/*   Updated: 2023/01/06 16:07:24 by gfurtado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_length_num(unsigned int num)
{
	int	len;

	len = 0;
	while (num != 0)
	{
		len++;
		num /= 10;
	}
	return (len);
}

char	*ft_utoa(unsigned int n)
{
	char	*num;
	int		len;

	len = ft_length_num(n);
	num = (char *)malloc((len + 1) * sizeof(char *));
	if (!num)
		return (NULL);
	num[len] = '\0';
	while (n != 0)
	{
		num[len - 1] = n % 10 + 48;
		n = n / 10;
		len--;
	}
	return (num);
}

int	ft_putunsigned(unsigned int n)
{
	int		len;
	char	*num;

	len = 0;
	if (n == 0)
		len += write (1, "0", 1);
	else
	{
		num = ft_utoa(n);
		len += ft_putstr(num);
		free(num);
	}
	return (len);
}