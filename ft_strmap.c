/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rperrone <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/07 08:31:53 by rperrone          #+#    #+#             */
/*   Updated: 2017/11/02 17:53:03 by rperrone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char	*new_str;
	int		i;

	i = 0;
	if (!s)
		return (0);
	new_str = ft_strnew(ft_strlen(s));
	if (!new_str)
		return (0);
	while (s[i])
	{
		new_str[i] = (*f)(s[i]);
		i++;
	}
	return (new_str);
}
