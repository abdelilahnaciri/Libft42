/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abnaciri <abnaciri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 18:11:04 by abnaciri          #+#    #+#             */
/*   Updated: 2023/11/28 16:28:59 by abnaciri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	ldest;
	size_t	lsrc;
	size_t	totlen;
	int		i;

	totlen = 0;
	ldest = 0;
	lsrc = ft_strlen(src);
	if (size == 0)
		return (lsrc);
	while (dest[ldest] && ldest < size)
		ldest++;
	totlen = ldest + lsrc;
	i = 0;
	if (ldest < size)
	{
		while (src[i] && ldest < (size - 1))
		{
			dest[ldest] = src[i];
			i++;
			ldest++;
		}
		dest[ldest] = '\0';
	}
	return (totlen);
}
