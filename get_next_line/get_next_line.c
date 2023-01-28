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

char	*get_line(int fd)
{
	char	*buff;
	size_t	readed;
	static char	*junk;
	char	*line;

	buff = (char *)malloc(sizeof(char) * BUFFER_SIZE);
	while (verifyn(buff) == )
	{
		readed = read(fd, buff, BUFFER_SIZE);
		join(buff, junk);
		printf("%s", buff);
		printf("%s", junk);
	}
	line = (char *)malloc(sizeof(buff) + sizeof(junk));
	line = buff;
	return (line);
}

char	*get_next_line(int fd)
{
	char	*line;
	static char	*res;

	line = get_line(fd);
	res = line;
	return (res);
}

int	main(void)
{
	int fd;
	
	fd = open("file.txt", O_RDONLY);
	printf("%s", get_next_line(fd));
	return (0);
}
