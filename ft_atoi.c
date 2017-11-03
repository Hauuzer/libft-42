/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rperrone <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/18 16:29:55 by rperrone          #+#    #+#             */
/*   Updated: 2017/11/02 18:06:50 by rperrone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(const char *str)
{
	int	i;
	int neg;

	i = 0;
	neg = 0;
	while (ft_isspace(*str))
		++str;
	if (*str == '+')
		++str;
	else if (*str == '-')
	{
		neg = 1;
		++str;
	}
	while (*str != '\0' && ft_isdigit(*str))
	{
		i = i * 10 + (*str - '0');
		++str;
	}
	if (neg == 1)
		return (-i);
	else
		return (i);
}
