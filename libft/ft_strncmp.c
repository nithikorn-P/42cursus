/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndejsong <ndejsong@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/01 12:53:33 by ndejsong          #+#    #+#             */
/*   Updated: 2022/07/01 12:57:21 by ndejsong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t		i;
	unsigned char	diff;

	i = 0;
	while (i < n && (s1[i] || s2[i]))
	{
		diff = (unsigned char) s1[i] - (unsigned char) s2[i];
		if (diff != 0)
			return (diff);
		i++;
	}
	return (0);
}
