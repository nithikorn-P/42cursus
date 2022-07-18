/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndejsong <ndejsong@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 10:57:07 by ndejsong          #+#    #+#             */
/*   Updated: 2022/07/18 11:14:44 by ndejsong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	if (n < 0)
		ft_putchar_fd('-', fd);
	if (n >= 0)
	{
		if (n > 9)
			ft_putnbr_fd(n / 10, fd);
		ft_putchar_fd('0' + (n % 10), fd);
	}
	else
	{
		if (n < -9)
			ft_putnbr_fd(n / -10, fd);
		ft_putchar_fd('0' + (n % -10) * -1, fd);
	}
}
