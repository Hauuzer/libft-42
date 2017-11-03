/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rperrone <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/18 16:30:58 by rperrone          #+#    #+#             */
/*   Updated: 2017/11/02 18:05:44 by rperrone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	char *ret;

	ret = (char *)str;
	while (*ret != '\0' && *ret != (char)c)
		ret++;
	if (*ret != (char)c)
		return (NULL);
	else
		return ((char *)ret);
}
