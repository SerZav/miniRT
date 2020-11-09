/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szavarce <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/14 20:49:10 by szavarce          #+#    #+#             */
/*   Updated: 2019/11/14 20:49:12 by szavarce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned int	pos;
	char			*dup;
	size_t			lens;

	lens = 0;
	pos = 0;
	while (s[lens])
		lens++;
	dup = (char *)malloc((sizeof(*s) * len) + 1);
	if (dup && s)
	{
		pos = start;
		while (s[pos] && (pos - start) < len && start <= lens)
		{
			dup[pos - start] = s[pos];
			pos++;
		}
		dup[pos - start] = '\0';
		return (dup);
	}
	return (NULL);
}
