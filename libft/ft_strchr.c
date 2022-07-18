/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndejsong <ndejsong@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/01 10:48:38 by ndejsong          #+#    #+#             */
/*   Updated: 2022/07/01 10:51:34 by ndejsong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*ps;
	size_t	i;

	ps = (char *) s;
	i = 0;
	while (ps[i])
	{
		if (ps[i] == (char) c)
			return (ps + i);
		i++;
	}
	if (c == 0)
		return (ps + i);
	return (NULL);
}
