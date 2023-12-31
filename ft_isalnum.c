/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abnaciri <abnaciri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 11:54:00 by abnaciri          #+#    #+#             */
/*   Updated: 2023/11/11 15:12:09 by abnaciri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum( int c )
{
	if (((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) || 
		(c >= '0' && c <= '9'))
		return (1);
	else
		return (0);
}
