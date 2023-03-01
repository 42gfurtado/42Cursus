/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfurtado <gfurtado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 19:05:41 by gfurtado          #+#    #+#             */
/*   Updated: 2023/03/01 19:09:22 by gfurtado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

char	*ft_read(int fd, char *str)
{
	char	*array;
	int		count;

	array = malloc((BUFFER_SIZE + 1) * sizeof(char));
	if (!array)
		return (NULL);
	count = -1;
	while (!ft_strchr(str, '\n') && count != 0)
	{
		count = read(fd, array, BUFFER_SIZE);
		if (count == -1)
		{
			free(str);
			free(array);
			return (NULL);
		}
		array[count] = '\0';
		str = ft_free_join(str, array);
	}
	free(array);
	return (str);
}

char	*get_next_line(int fd)
{
	char			*line;
	static char		*s[OPEN_MAX];

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	s[fd] = ft_read(fd, s[fd]);
	if (!s[fd])
		return (NULL);
	line = ft_get_line(s[fd]);
	s[fd] = ft_new_line(s[fd]);
	return (line);
}
