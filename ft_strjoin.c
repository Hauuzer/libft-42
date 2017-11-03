/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rperrone <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/04 02:12:44 by rperrone          #+#    #+#             */
/*   Updated: 2017/11/02 18:02:58 by rperrone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*newstr;
	int		sl1;
	int		sl2;

	if (!s1 || !s2)
		return (0);
	sl1 = ft_strlen(s1);
	sl2 = ft_strlen(s2);
	newstr = ft_strnew(sl1 + sl2);
	if (!newstr)
		return (0);
	ft_strcat(newstr, s1);
	ft_strcat(newstr, s2);
	return (newstr);
}
