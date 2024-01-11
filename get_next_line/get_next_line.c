/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andalvar <andalvar@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 19:43:44 by andalvar          #+#    #+#             */
/*   Updated: 2024/01/11 14:57:01 by andalvar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*frees(char **str)
{
	free(*str);
	*str = NULL;
	return (NULL);
}

char	*ft_get_line(char *buff)
{
	char	*line;
	char	*ptr;
	int		len;

	ptr = ft_strchr(buff, '\n');
	len = (ptr - buff) + 1;
	line = ft_substr(buff, 0, len);
	if (!line)
		return (NULL);
	return (line);
}

char	*next_line(char *buff)
{
	char	*buff2;
	char	*ptr;
	int		len;

	ptr = ft_strchr(buff, '\n');
	if (!ptr)
	{
		buff2 = NULL;
		return (frees(&buff));
	}
	else
		len = (ptr - buff) + 1;
	if (!buff[len])
		return (frees(&buff));
	buff2 = ft_substr(buff, len, ft_strlen(buff) - len);
	frees(&buff);
	if (!buff2)
		return (NULL);
	return (buff2);
}

char	*ft_read_content(int fd, char *buff)
{
	int		content;
	char	*buffer;

	content = 1;
	buffer = malloc(sizeof(char) * (BUFFER_SIZE + 1));
	if (!buffer)
		return (frees(&buff));
	buffer[0] = '\0';
	while (content > 0 && !ft_strchr(buffer, '\n'))
	{
		content = read (fd, buffer, BUFFER_SIZE);
		if (content > 0)
		{
			buffer[content] = '\0';
			buff = ft_strjoin(buff, buffer);
		}
	}
	free(buffer);
	if (content == -1)
		return (frees(&buff));
	return (buff);
}

char	*get_next_line(int fd)
{
	static char	*buff = {0};
	char		*line;

	if (fd < 0)
		return (NULL);
	if ((buff && !ft_strchr(buff, '\n')) || !buff)
		buff = ft_read_content (fd, buff);
	if (!buff)
		return (NULL);
	line = ft_get_line(buff);
	if (!line)
		return (frees(&buff));
	buff = next_line(buff);
	return (line);
}
