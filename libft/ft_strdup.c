/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndejsong <ndejsong@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/01 18:13:35 by ndejsong          #+#    #+#             */
/*   Updated: 2022/07/08 00:18:20 by ndejsong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	size_t	len;
	char	*pstr;

	len = ft_strlen(s1) + 1;
	pstr = malloc(len * sizeof(char));
	ft_strlcpy(pstr, s1, len);
	return (pstr);
}
