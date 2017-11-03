/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rperrone <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/18 16:30:28 by rperrone          #+#    #+#             */
/*   Updated: 2017/11/02 17:54:18 by rperrone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

typedef unsigned long long t_ull;

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	char *temp;
	void *p;

	temp = (char *)ft_memalloc((len + 1) * sizeof(char));
	if (!temp)
		return (NULL);
	if (!*little)
		return ((char *)big);
	ft_memmove(temp, big, len);
	temp[len] = '\0';
	p = ft_strstr(temp, little);
	if (!p)
		return (NULL);
	return ((char*)((t_ull)big + (t_ull)p - (t_ull)temp));
}
