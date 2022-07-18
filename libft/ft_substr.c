/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndejsong <ndejsong@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 02:08:59 by ndejsong          #+#    #+#             */
/*   Updated: 2022/07/07 14:39:01 by ndejsong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	size_t	n;

	if (!s)
		return (0);
	if (start > ft_strlen(s))
		return (ft_calloc(1, 1));
	n = ft_strlen(s + start);
	if (n < len)
		len = n;
	substr = (char *) ft_calloc(len + 1, sizeof(char));
	ft_strlcpy(substr, s + start, len + 1);
	return (substr);
}
