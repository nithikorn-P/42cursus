/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndejsong <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/01 05:05:47 by ndejsong          #+#    #+#             */
/*   Updated: 2022/07/01 05:22:58 by ndejsong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned int	*pdst;
	unsigned int	*psrc;
	size_t			i;

	pdst = dst;
	psrc = src;
	i = 0;
	while (i < len)
	{
		if (dst < src)
			pdst[len - i] = psrc[len - i];
		else
			pdst[i] = psrc[i];
		i++;
	}
	return (dst);
}
