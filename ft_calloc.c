/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abnaciri <abnaciri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 12:15:12 by abnaciri          #+#    #+#             */
/*   Updated: 2023/12/03 16:21:05 by abnaciri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t numblock, size_t size)
{
	void			*cal;
	unsigned char	*ztocal;
	size_t			r;

	if ((long)numblock < 0 || (long)size < 0)
		return (NULL);
	cal = malloc(numblock * size);
	ztocal = cal;
	r = numblock * size;
	if (!cal)
	{
		return (0);
	}
	while (r > 0)
	{
		*ztocal = '\0';
		ztocal++;
		r--;
	}
	return (cal);
}
