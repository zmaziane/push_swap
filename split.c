/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   split.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmaziane <zmaziane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/01 23:43:41 by zmaziane          #+#    #+#             */
/*   Updated: 2022/04/01 23:44:07 by zmaziane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	len;

	i = 0;
	len = ft_strlen(src);
	if (dstsize == 0)
		return (len);
	while (src[i] != '\0' && i < dstsize - 1)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (len);
}

int	word_count(char const *s, char c)
{
	unsigned int	i;
	int				n;

	i = 0;
	n = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i])
			n++;
		while (s[i] && s[i] != c)
			i++;
	}
	return (n);
}

char	*ft_allocate(char **strs, const char *s, size_t n)
{
	char	*copy;

	copy = (char *)malloc(sizeof(char) * (n + 1));
	if (!copy)
	{
		while ((*strs)--)
			free(*strs);
		free(strs);
		return (0);
	}
	ft_strlcpy(copy, s, (n + 1));
	return (copy);
}

char	**ft_split(char const *s, char c)
{
	char	**splited_strs;
	int		i;
	int		j;
	int		k;

	if (!s)
		return (0);
	splited_strs = (char **)malloc(sizeof(char *) * (word_count(s, c) + 1));
	if (!splited_strs)
		return (0);
	i = 0;
	k = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		j = i;
		while (s[i] && s[i] != c)
			i++;
		if (i > j)
			splited_strs[k++] = ft_allocate(splited_strs, s + j, i - j);
	}
	splited_strs[k] = 0;
	return (splited_strs);
}
