/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szavarce <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/14 20:49:10 by szavarce          #+#    #+#             */
/*   Updated: 2019/11/14 20:49:12 by szavarce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	int		pos;
	int		pos2;
	char	*dup;

	pos = 0;
	while (s[pos])
	{
		pos++;
	}
	dup = malloc((sizeof(*s) * pos) + 1);
	if (dup)
	{
		pos2 = 0;
		while (pos2 <= pos)
		{
			dup[pos2] = s[pos2];
			pos2++;
		}
		return (dup);
	}
	return (NULL);
}
