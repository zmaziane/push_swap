/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmaziane <zmaziane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/16 23:56:41 by zmaziane          #+#    #+#             */
/*   Updated: 2022/04/16 23:56:58 by zmaziane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

char	*ft_strdup(char *str)
{
	char	*line;
	int		i;

	i = 0;
	while (str[i])
		i++;
	line = malloc(i + 1);
	if (!line)
		exit(1);
	i = 0;
	while (str[i])
	{
		line[i] = str[i];
		i++;
	}
	line[i] = 0;
	return (line);
}

void	ft_bzero(void *s, size_t n)
{
	size_t	i;
	char	*ps;

	ps = (char *)s;
	i = 0;
	while (n)
	{
		ps[i] = 0;
		i++;
		n--;
	}
}

char	*get_next_line(int fd)
{
	char	line[100];
	int		ret;
	char	c;
	int		i;

	i = 0;
	ret = 1;
	ft_bzero(line, 100);
	while ((ret > 0))
	{
		ret = read(fd, &c, 1);
		line[i++] = c;
		if (c == '\n')
			break ;
	}
	if (line[0] == 0)
		return (NULL);
	return (ft_strdup(line));
}
