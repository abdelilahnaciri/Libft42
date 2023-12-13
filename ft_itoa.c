/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abnaciri <abnaciri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 16:57:34 by abnaciri          #+#    #+#             */
/*   Updated: 2023/12/01 17:31:50 by abnaciri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	digit_cnt(long n)
{
	int	digit;

	digit = 0;
	if (n < 0)
	{
		digit++;
		n *= -1;
	}
	while (n > 9)
	{
		n /= 10;
		digit++;
	}
	if (digit == 0 && n == 0)
	{
		digit++;
		return (digit);
	}
	digit += 1;
	return (digit);
}

char	*ft_itoa(int n)
{
	char	*res;
	int		dcnt;
	long	nb;

	if (!n)
		return (ft_strdup("0"));
	nb = n;
	dcnt = digit_cnt(nb);
	res = malloc(dcnt + 1);
	if (!res)
		return (NULL);
	if (nb < 0)
	{
		res[0] = '-';
		nb *= -1;
	}
	res[dcnt] = '\0';
	while (nb > 0)
	{
		res[--dcnt] = (nb % 10) + 48;
		nb /= 10;
	}
	return (res);
}
