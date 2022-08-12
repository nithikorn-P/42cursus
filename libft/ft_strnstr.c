/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndejsong <ndejsong@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/01 17:14:58 by ndejsong          #+#    #+#             */
/*   Updated: 2022/08/13 01:00:10 by ndejsong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	n_len;

	n_len = ft_strlen(needle);
	if (n_len == 0 || haystack == needle)
		return ((char *) haystack);
	while (*haystack && len - n_len)
	{
		if (!ft_strncmp(haystack, needle, n_len))
			return ((char *) haystack);
		haystack++;
		len--;
	}
	return (NULL);
}
