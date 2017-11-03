/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rperrone <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/07 08:33:41 by rperrone          #+#    #+#             */
/*   Updated: 2017/11/02 17:59:18 by rperrone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	char			*str;
	size_t			str_len;
	unsigned int	i;

	str_len = ft_numlen(n);
	i = n;
	if (n < 0)
	{
		i = -n;
		str_len++;
	}
	if (!(str = ft_strnew(str_len)))
		return (NULL);
	str[--str_len] = i % 10 + '0';
	while (i /= 10)
		str[--str_len] = i % 10 + '0';
	if (n < 0)
		*(str + 0) = '-';
	return (str);
}
