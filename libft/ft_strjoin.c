/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szavarce <szavarce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/14 20:49:10 by szavarce          #+#    #+#             */
/*   Updated: 2019/11/29 14:25:06 by szavarce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	unsigned int	pos;
	unsigned int	totlen;
	char			*dup;

	if (!s1 || !s2)
		return (0);
	pos = 0;
	while (s1[pos])
		pos++;
	totlen = pos;
	pos = 0;
	while (s2[pos])
		pos++;
	totlen = totlen + pos;
	if (!(dup = (char *)malloc((sizeof(char) * totlen) + 1)))
		return (NULL);
	totlen = 0;
	pos = 0;
	while (s1[pos])
		dup[totlen++] = s1[pos++];
	pos = 0;
	while (s2[pos])
		dup[totlen++] = s2[pos++];
	dup[totlen] = '\0';
	return (dup);
}
