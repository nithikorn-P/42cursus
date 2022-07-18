/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndejsong <ndejsong@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/01 05:05:47 by ndejsong          #+#    #+#             */
/*   Updated: 2022/07/06 02:00:43 by ndejsong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*pdst;
	char	*psrc;
	size_t	i;

	pdst = (char *) dst;
	psrc = (char *) src;
	if (pdst == psrc || len == 0)
		return (dst);
	i = 0;
	while (i < len)
	{
		if (pdst < psrc)
			pdst[i] = psrc[i];
		else
			pdst[len - i - 1] = psrc[len - i - 1];
		i++;
	}
	return (dst);
}
