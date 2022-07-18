/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndejsong <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/01 04:41:00 by ndejsong          #+#    #+#             */
/*   Updated: 2022/07/01 04:55:16 by ndejsong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*pb;
	size_t			i;

	pb = b;
	i = 0;
	while (i < len)
	{
		pb[i] = (unsigned char) c;
		i++;
	}
	return (pb);
}
