/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doberste <doberste@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/24 09:54:06 by doberste          #+#    #+#             */
/*   Updated: 2025/11/28 15:21:30 by doberste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*get_next_line(int fd);
static char	*_fill_line_buffer(int fd, char *total_line, char *buffer);

char	*get_next_line(int fd)
{
	char	*buff;
	char	*line;
	char	*total_line;

	if (fd < 0 || BUFFER_SIZE <= 0 || read(fd, 0, 0) < 0)
	{
		free(buff);
		free(total_line);
		total_line = NULL;
		buff = NULL;
		return (NULL);
	}
	buff = (char *)malloc(sizeof(char) * (BUFFER_SIZE + 1));
	if (!buff)
		return (NULL);

    line = fill_line(fd, total_line, buff);
    free(buff);
    buff = NULL;
    if (!line)
        return (NULL);
    total_line = set_line(line);
	return (line);
}
static char	*fill_line(int fd, char *total_line, char *buff)
{
    //filling the buffer with read()
}

static char *set_line(char *line_buffer)
{
    //function to set total_line
}
int	main(int argc, char **argv)
{
	int	fd;

	fd = open(argv[1], O_RDONLY);
	if (argc > 1 || fd < 0)
		return (-1);
	get_next_line(fd);
	return (0);
}
