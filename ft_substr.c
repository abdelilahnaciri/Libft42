/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abnaciri <abnaciri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 17:11:36 by abnaciri          #+#    #+#             */
/*   Updated: 2023/11/30 11:48:54 by abnaciri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*subs;
	size_t	i;
	size_t	ls;

	if (!s)
		return (0);
	ls = ft_strlen(s);
	i = 0;
	if (start > ls)
		return (ft_strdup(""));
	ls = ft_strlen(s + start);
	if (ls < len)
		len = ls;
	subs = malloc((len + 1) * sizeof(char));
	if (!subs)
		return (0);
	while (s[start] && i < len)
	{
		subs[i] = s[start];
		i++;
		start++;
	}
	subs[len] = '\0';
	return (subs);
}
