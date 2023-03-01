/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfurtado <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 14:39:20 by gfurtado          #+#    #+#             */
/*   Updated: 2022/12/06 14:57:16 by gfurtado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_clean(void)
{
	char	*str;

	str = malloc(sizeof(char) * 1);
	if (!str)
		return (NULL);
	str[0] = '\0';
	return (str);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	int		i;
	int		j;
	int		n;

	if (!s1 || !set)
		return (NULL);
	i = 0;
	j = ft_strlen(s1) - 1;
	while (ft_strchr(set, s1[i]) && s1[i])
		i++;
	if (s1[i] == '\0')
		return (ft_clean());
	while (ft_strchr(set, s1[j]) && j > i)
		j--;
	n = j - i;
	str = malloc(sizeof(char) * (n + 2));
	if (!str)
		return (NULL);
	j = 0;
	while (j <= n)
		str[j++] = s1[i++];
	str[j] = '\0';
	return (str);
}
