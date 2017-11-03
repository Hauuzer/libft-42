/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rperrone <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/29 20:03:08 by rperrone          #+#    #+#             */
/*   Updated: 2017/11/02 17:51:53 by rperrone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int c, int fd)
{
	if (c < 0)
	{
		ft_putchar_fd('-', fd);
		c = -c;
	}
	if (c == -2147483648)
	{
		ft_putchar_fd('2', fd);
		c %= 1000000000;
		c = -c;
	}
	if (c >= 10)
	{
		ft_putnbr_fd(c / 10, fd);
		ft_putnbr_fd(c % 10, fd);
	}
	else
		ft_putchar_fd(c + '0', fd);
}
