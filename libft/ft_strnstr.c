/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndejsong <ndejsong@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/01 17:14:58 by ndejsong          #+#    #+#             */
/*   Updated: 2022/07/07 01:45:45 by ndejsong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	char	*phaystack;
	size_t	needle_len;
	size_t	i;

	phaystack = (char *) haystack;
	needle_len = ft_strlen(needle);
	if (needle_len == 0 || haystack == needle)
		return (phaystack);
	i = 0;
	while (i + needle_len <= len && phaystack[i])
	{
		if (ft_strncmp(phaystack + i, needle, needle_len) == 0)
			return (phaystack + i);
		i++;
	}
	return (NULL);
}
