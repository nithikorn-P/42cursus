/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndejsong <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/01 04:55:50 by ndejsong          #+#    #+#             */
/*   Updated: 2022/07/01 05:01:28 by ndejsong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char	*pdst;
	char	*psrc;
	size_t	i;

	pdst = (char *) dst;
	psrc = (char *) src;
	i = 0;
	while (i < n)
	{
		pdst[i] = psrc[i];
		i++;
	}
	return (pdst);
}
