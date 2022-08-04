/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndejsong <ndejsong@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 03:37:21 by ndejsong          #+#    #+#             */
/*   Updated: 2022/08/04 20:37:12 by ndejsong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*ps;
	size_t	i;

	ps = (char *) ft_calloc(ft_strlen(s) + 1, sizeof(char));
	if (!ps)
		return (NULL);
	i = 0;
	while (s[i])
	{
		ps[i] = f(i, s[i]);
		i++;
	}
	return (ps);
}
