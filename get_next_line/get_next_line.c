/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfurtado <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 15:04:03 by gfurtado          #+#    #+#             */
/*   Updated: 2023/01/16 19:00:50 by gfurtado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*get_next_line(int fd)
{
	char	*str;
	int		readed;

	str = (char *) malloc(sizeof(char) * 1024);
	readed = read(fd, str, 1024);
	return (str);
}

int	main(void)
{
	int fd;

	fd = open("file.txt", O_RDONLY);
	printf("%s", get_next_line(fd));
	return (0);
}
