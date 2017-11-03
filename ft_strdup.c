/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rperrone <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/18 16:32:04 by rperrone          #+#    #+#             */
/*   Updated: 2017/11/02 17:51:39 by rperrone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *str)
{
	size_t	i;
	size_t	j;
	char	*dst;

	i = ft_strlen(str);
	dst = (char *)malloc(i + 1);
	if (!dst)
		return (0);
	j = -1;
	while (++j < i)
		dst[j] = *(str + j);
	dst[i] = '\0';
	return (dst);
}
