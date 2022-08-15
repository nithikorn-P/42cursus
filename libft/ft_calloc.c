/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndejsong <ndejsong@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/01 18:04:15 by ndejsong          #+#    #+#             */
/*   Updated: 2022/08/15 19:56:24 by ndejsong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*mall;

	if (count * size < count && count * size < size)
		return (0);
	mall = malloc(count * size);
	if (mall == 0)
		return (0);
	ft_bzero(mall, count * size);
	return (mall);
}
