/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rperrone <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/18 16:30:37 by rperrone          #+#    #+#             */
/*   Updated: 2017/10/01 05:19:13 by rperrone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *big, const char *little)
{
	size_t i;

	if (*little == '\0')
		return ((char *)big);
	while (*big != '\0')
	{
		i = 0;
		while (big[i] == little[i])
			if (little[++i] == '\0')
				return ((char *)big);
		big++;
	}
	return (NULL);
}
