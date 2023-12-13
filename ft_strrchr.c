/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abnaciri <abnaciri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 13:53:20 by abnaciri          #+#    #+#             */
/*   Updated: 2023/11/11 14:55:31 by abnaciri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	ls;

	ls = ft_strlen(s);
	while ((s[ls] != (char)c) && (ls > 0))
	{
		ls--;
	}
	if (s[ls] == (char)c)
	{
		return ((char *)s + ls);
	}
	return (0);
}
