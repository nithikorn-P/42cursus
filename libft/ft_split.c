/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndejsong <ndejsong@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 00:17:31 by ndejsong          #+#    #+#             */
/*   Updated: 2022/07/17 22:48:36 by ndejsong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_next(char const *s, char c)
{
	size_t	i;

	i = 0;
	while (s[i])
	{
		if (s[i] == c)
			break ;
		i++;
	}
	if (c == 0)
		i++;
	return (i + 1);
}

size_t	ft_count(char const *s, char c)
{
	size_t	offset;
	size_t	len;
	size_t	n;

	offset = 0;
	n = 0;
	while (offset < ft_strlen(s))
	{
		len = ft_next(s + offset, c);
		if (len > 1)
			n++;
		offset += len;
	}
	return (n);
}

char	**ft_split(char const *s, char c)
{
	char	**arr;
	size_t	words;
	size_t	len;
	size_t	offset;
	size_t	i;

	words = ft_count(s, c);
	arr = (char **) ft_calloc(words + 1, sizeof(char *));
	offset = 0;
	i = 0;
	while (i < words)
	{
		len = ft_next(s + offset, c);
		if (len > 1)
		{
			arr[i] = ft_substr(s, offset, len - 1);
			i++;
		}
		offset += len;
	}
	return (arr);
}
