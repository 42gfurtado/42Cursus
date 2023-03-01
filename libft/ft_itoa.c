/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfurtado <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 15:01:53 by gfurtado          #+#    #+#             */
/*   Updated: 2022/12/06 15:20:39 by gfurtado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	size(int n)
{
	int	len;

	len = 0;
	if (n <= 0)
		++len;
	while (n != 0)
	{
		++len;
		n = n / 10;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		len;
	long	num;

	num = n;
	len = size(n);
	str = malloc(sizeof(char) * (len +1));
	if (str == NULL)
		return (NULL);
	str[len] = '\0';
	if (num < 0)
	{
		str[0] = '-';
		num = num * -1;
	}
	else if (num == 0)
		str[0] = '0';
	while (num != 0)
	{
		--len;
		str[len] = (num % 10) + '0';
		num = num / 10;
	}
	return (str);
}
