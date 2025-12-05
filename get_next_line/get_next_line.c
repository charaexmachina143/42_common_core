/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doberste <doberste@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/24 09:54:06 by doberste          #+#    #+#             */
/*   Updated: 2025/12/05 09:59:13 by doberste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char		*get_next_line(int fd);
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
	ssize_t	buff_read;
	char	*temp;

	buff_read = 1;
	while (buff_read > 0)
	{
		buff_read = read(fd, buff, BUFFER_SIZE);
		if (buff_read == -1)
		{
			free(total_line);
			return (NULL);
		}
		else if (buff_read == 0)
			break ;
		buff[buff_read] = 0;
		if (!total_line)
			ft_strdup("");
		temp = total_line;
		total_line = ft_strjoin(temp, buff);
		free(temp);
		temp = NULL;
		if (ft_strchr(buff, '\n'))
			break ;
		return (total_line);
	}
}

static char	*set_line(char *line_buff)
{
	char	*total_line;
	ssize_t	i;

	i = 0;
	while (line_buff[i] != '\n' && line_buff != '\0')
		i++;
	if (line_buff[i] == 0 || line_buff[1] == 0)
		return (NULL);
	total_line = ft_substr(line_buff, i + 1, ft_strlen(line_buff) - i);
	if (*total_line == 0)
	{
		free(total_line);
		total_line = NULL;
	}
	line_buff[i + 1] = 0;
	return (total_line);
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
