/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndejsong <ndejsong@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/17 21:56:06 by ndejsong          #+#    #+#             */
/*   Updated: 2022/08/13 01:11:23 by ndejsong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_digit(int n)
{
	size_t	digit;

	digit = 1;
	while (n > 9 || n < -9)
	{
		n /= 10;
		digit++;
	}
	return (digit);
}

char	*ft_itoa(int n)
{
	char	*str;
	size_t	digit;

	digit = ft_digit(n);
	str = (char *) ft_calloc(digit + 1 + (n < 0), sizeof(char));
	if (!str)
		return (NULL);
	if (n < 0)
	{
		str[0] = '-';
		digit++;
	}
	str[digit - 1] = '0';
	while (n)
	{
		if (n >= 0)
			str[digit - 1] = '0' + (n % 10);
		else
			str[digit - 1] = '0' + (n % -10) * -1;
		n /= 10;
		digit--;
	}
	return (str);
}
