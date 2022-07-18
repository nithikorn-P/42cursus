/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndejsong <ndejsong@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/01 18:04:15 by ndejsong          #+#    #+#             */
/*   Updated: 2022/07/05 12:15:54 by ndejsong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*p;
	size_t	memsize;

	memsize = count * size;
	if (memsize < count || memsize < size)
		return (NULL);
	if (count == 0 || size == 0)
		memsize = 1;
	p = malloc(memsize);
	if (p)
		ft_bzero(p, memsize);
	return (p);
}
