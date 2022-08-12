/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndejsong <ndejsong@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/01 17:28:54 by ndejsong          #+#    #+#             */
/*   Updated: 2022/08/13 01:59:11 by ndejsong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	value;
	int	mul;

	value = 0;
	mul = 1;
	while (ft_strchr(" \t\r\n\v\f", *str))
		str++;
	if (*str == '-')
		mul = -1;
	if (*str == '-' || *str == '+')
		str++;
	while (*str)
	{
		if (ft_isdigit(*str))
			value = (value * 10) + (*str - '0');
		else
			break ;
		str++;
	}
	return (value * mul);
}
