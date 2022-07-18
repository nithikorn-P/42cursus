/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndejsong <ndejsong@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/01 17:28:54 by ndejsong          #+#    #+#             */
/*   Updated: 2022/07/05 01:57:58 by ndejsong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_trimws(char *str)
{
	while (str[0])
	{
		if ((9 <= str[0] && str[0] <= 13) || str[0] == 32)
			str++;
		else
			break ;
	}
	return (str);
}

int	ft_atoi(const char *str)
{
	char	*pstr;
	int		value;
	int		sign;

	pstr = ft_trimws((char *) str);
	value = 0;
	sign = 0;
	while (pstr[0])
	{
		if (ft_isdigit(pstr[0]))
			value = (value * 10) + (pstr[0] - '0');
		else if (pstr[0] == '+' && sign == 0)
			sign = 1;
		else if (pstr[0] == '-' && sign == 0)
			sign = -1;
		else
			break ;
		pstr++;
	}
	if (sign == 0)
		sign = 1;
	return (sign * value);
}
