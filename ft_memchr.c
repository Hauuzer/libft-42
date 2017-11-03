/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rperrone <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/18 16:32:36 by rperrone          #+#    #+#             */
/*   Updated: 2017/11/02 17:44:42 by rperrone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*arg;

	arg = (unsigned char *)s;
	while (n--)
		if (*(arg++) == (unsigned char)c)
			return ((void *)arg - 1);
	return (NULL);
}
