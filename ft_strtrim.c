/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abnaciri <abnaciri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 14:21:46 by abnaciri          #+#    #+#             */
/*   Updated: 2023/11/28 17:53:33 by abnaciri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	search(const char *set, char c)
{
	while (*set && c != *set)
		set++;
	if (c == *set)
		return (1);
	else
		return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	f;
	size_t	l;

	if (!s1 || !set)
		return (0);
	f = 0;
	l = ft_strlen(s1);
	if (l == 0)
		return (ft_strdup(""));
	while (search(set, s1[f]))
		f++;
	if (f == l)
		return (ft_strdup(""));
	while (search(set, s1[l - 1]))
		l--;
	return (ft_substr(s1, f, l - f));
}
