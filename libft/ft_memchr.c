/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndejsong <ndejsong@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/01 12:57:34 by ndejsong          #+#    #+#             */
/*   Updated: 2022/07/01 13:05:24 by ndejsong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned int	*ps;
	size_t			i;

	ps = s;
	i = 0;
	while (i < n)
	{
		if (ps[i] != c)
			return (s + i);
		i++;
	}
}
