/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjones <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/25 06:53:44 by tjones            #+#    #+#             */
/*   Updated: 2018/06/27 11:52:46 by tjones           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static char		*biggerbuf(int const fd, char *buf, int *ret)
{
	char		tmp[BUFF_SIZE + 1];
	char		*tmp2;

	*ret = read(fd, tmp, BUFF_SIZE);
	if (*ret < BUFF_SIZE && tmp[*ret - 1] != '\n')
	{
		tmp[*ret] = '\n';
		tmp[*ret + 1] = '\0';
	}
	else
		tmp[*ret] = '\0';
	tmp2 = buf;
	buf = ft_strjoin(buf, tmp);
	ft_strdel(&tmp2);
	return (buf);
}

int				get_next_line(int const fd, char **line)
{
	static char			*buf = NULL;
	int					ret;
	char				*str;

	if (!line || fd < 0)
		return (-1);
	ret = 1;
	if (!buf)
		buf = ft_strnew(0);
	while (ret > 0)
	{
		if ((str = ft_strchr(buf, '\n')) != NULL)
		{
			*str = 0;
			*line = ft_strdup(buf);
			ft_memmove(buf, str + 1, ft_strlen(str + 1) + 1);
			return (1);
		}
		buf = biggerbuf(fd, buf, &ret);
	}
	if (ret == 0)
		*line = ft_strnew(0);
	return (ret);
}
