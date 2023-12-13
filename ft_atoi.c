/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abnaciri <abnaciri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 12:09:48 by abnaciri          #+#    #+#             */
/*   Updated: 2023/12/03 16:30:28 by abnaciri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	check_atoi(int s, const char *str, long r, int i)
{
	long	t;

	while (str[i] >= 48 && str[i] <= 57)
	{
		t = r;
		r = (r * 10) + (str[i] - 48);
		if (t != r / 10 && s == 1)
			return (-1);
		else if (t != r / 10 && s == -1)
			return (0);
		i++;
	}
	return (s * r);
}

int	ft_atoi(const char *str)
{
	int		i;
	int		s;
	long	r;

	i = 0;
	s = 1;
	r = 0;
	while ((str[i] >= 9 && str[i] <= 13) || (str[i] == 32))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			s *= -1;
		i++;
	}
	return (check_atoi(s, str, r, i));
}
