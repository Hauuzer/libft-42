/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rperrone <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/18 16:31:24 by rperrone          #+#    #+#             */
/*   Updated: 2017/11/02 17:58:46 by rperrone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *s1, const char *s2, size_t n)
{
	char	*ret;
	size_t	i;

	i = -1;
	ret = s1;
	while (*ret)
		ret++;
	while (++i < n && *s2)
		*(ret++) = *(s2++);
	*ret = 0;
	return (s1);
}
