/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndejsong <ndejsong@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/01 10:58:06 by ndejsong          #+#    #+#             */
/*   Updated: 2022/07/06 17:13:24 by ndejsong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*ps;
	size_t	i;

	ps = (char *) s;
	i = ft_strlen(s);
	while (i)
	{
		if (ps[i] == (char) c)
			return (ps + i);
		i--;
	}
	if (ps[i] == (char) c)
		return (ps + i);
	return (NULL);
}
