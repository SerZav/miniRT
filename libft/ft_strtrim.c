/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szavarce <szavarce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/14 20:49:10 by szavarce          #+#    #+#             */
/*   Updated: 2019/11/28 14:14:44 by szavarce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_posini(char const *s1, char const *set)
{
	int		pos;
	int		fpos;
	int		found;

	pos = 0;
	while (s1[pos])
	{
		found = 0;
		fpos = 0;
		while (set[fpos])
		{
			if (s1[pos] == set[fpos])
				found = 1;
			fpos++;
		}
		if (!(found))
			return (pos);
		pos++;
	}
	return (pos);
}

static int		ft_posfin(char const *s1, char const *set)
{
	int		pos;
	int		fpos;
	int		found;

	pos = 0;
	pos = 0;
	pos = ft_strlen(s1);
	if (!(set[0]))
		return (pos);
	pos = pos <= 0 ? 0 : pos - 1;
	while (pos > 0)
	{
		found = 0;
		fpos = 0;
		while (set[fpos])
		{
			if (s1[pos] == set[fpos])
				found = 1;
			fpos++;
		}
		if (!(found))
			return (pos);
		pos--;
	}
	return (pos);
}

char			*ft_strtrim(char const *s1, char const *set)
{
	char		*dup;
	int			posini;
	int			posfin;
	int			pos;

	if (!s1 || !set)
		return (0);
	posini = ft_posini(s1, set);
	posfin = ft_posfin(s1, set);
	pos = 0;
	if (posfin - posini <= 0)
		posfin = posini;
	if (!(dup = malloc((sizeof(char) * (posfin - posini)) + 2)))
		return (NULL);
	while (pos <= posfin - posini)
	{
		dup[pos] = s1[pos + posini];
		pos++;
	}
	dup[pos] = '\0';
	return (dup);
}
