/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rperrone <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/18 16:31:32 by rperrone          #+#    #+#             */
/*   Updated: 2017/11/02 18:02:32 by rperrone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		find_length(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char			*ft_strcat(char *dest, const char *src)
{
	int length;
	int i;

	i = 0;
	length = find_length(dest);
	while (src[i] != '\0')
	{
		dest[i + length] = src[i];
		i++;
	}
	dest[i + length] = '\0';
	return (dest);
}
