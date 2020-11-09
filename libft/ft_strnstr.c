/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szavarce <szavarce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/28 09:27:00 by szavarce          #+#    #+#             */
/*   Updated: 2019/11/28 13:17:13 by szavarce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stdlib.h"

static size_t	ft_len(const char *s)
{
	int	pos;

	pos = 0;
	while (s[pos])
		pos++;
	return (pos);
}

char			*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	pos;
	size_t	pos2;
	int		match;

	pos = 0;
	if (ft_len(little) == 0)
		return ((char *)big);
	if (len == 0)
		return (0);
	while (big[pos] && pos < len)
	{
		pos2 = 0;
		match = 0;
		while (big[pos + pos2] && little[pos2] == big[pos + pos2]
		&& pos2 < ft_len(little))
		{
			match = 1;
			pos2++;
		}
		if (match == 1 && pos2 == ft_len(little) && (pos + pos2) <= len)
			return ((char *)big + pos);
		pos++;
	}
	return (0);
}
