/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rperrone <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/07 08:33:06 by rperrone          #+#    #+#             */
/*   Updated: 2017/11/02 18:08:02 by rperrone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*ret;
	size_t	i;

	if (!s)
		return (0);
	ret = ft_strnew(len);
	i = 0;
	if (!ret)
		return (0);
	while (i < len)
		ret[i++] = s[start++];
	return (ret);
}
