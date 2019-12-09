/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngale <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/04 13:45:40 by ngale             #+#    #+#             */
/*   Updated: 2019/10/07 20:06:14 by ngale            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static int	read_line(char **static_line, char **line)
{
	int		i;
	char	*tmp;

	i = 0;
	while ((*static_line)[i] != '\n' && (*static_line)[i] != '\0')
		i++;
	if ((*static_line)[i] == '\n')
	{
		*line = ft_strsub(*static_line, 0, i);
		tmp = ft_strdup(&((*static_line)[i + 1]));
		free(*static_line);
		*static_line = tmp;
		if ((*static_line)[0] == '\0')
			ft_strdel(static_line);
	}
	else
	{
		*line = ft_strdup(*static_line);
		ft_strdel(static_line);
	}
	return (1);
}

int			get_next_line(const int fd, char **line)
{
	int			ret;
	char		*tmp;
	static char	*static_line[13000];
	char		buff[BUFF_SIZE + 1];

	if (fd < 0 || line == NULL || BUFF_SIZE <= 0)
		return (-1);
	while ((ret = read(fd, buff, BUFF_SIZE)) > 0)
	{
		buff[ret] = '\0';
		if (static_line[fd] == NULL)
			static_line[fd] = ft_strdup(buff);
		else
		{
			tmp = ft_strjoin(static_line[fd], buff);
			free(static_line[fd]);
			static_line[fd] = tmp;
		}
		if (ft_strchr(static_line[fd], '\n'))
			break ;
	}
	if (ret < 0)
		return (-1);
	return (!static_line[fd] ? 0 : read_line(&static_line[fd], line));
}
