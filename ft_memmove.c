/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abnaciri <abnaciri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 19:43:15 by abnaciri          #+#    #+#             */
/*   Updated: 2023/12/03 16:54:49 by abnaciri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char		*dp;
	const unsigned char	*sp;
	size_t				i;

	dp = dst;
	sp = src;
	if ((!dst && !src) || src == dst)
		return (dst);
	if (dp > sp)
	{
		while (len-- > 0)
		{
			dp[len] = sp[len];
		}
	}
	else
	{
		i = 0;
		while (i < len)
		{
			*dp++ = *sp++;
			i++;
		}
	}
	return (dst);
}
