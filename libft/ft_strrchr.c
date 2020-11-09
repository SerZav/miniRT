/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szavarce <szavarce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/14 20:49:10 by szavarce          #+#    #+#             */
/*   Updated: 2019/11/28 10:59:36 by szavarce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrchr(const char *s, int c)
{
	int pos;
	int lastpos;

	pos = 0;
	lastpos = -1;
	if (c != 0)
		while (s[pos])
		{
			if (s[pos] == c)
				lastpos = pos;
			pos++;
		}
	else
	{
		while (s[pos] != '\0')
			pos++;
		return ((char *)s + pos);
	}
	if (lastpos >= 0)
		return ((char *)s + lastpos);
	return (0);
}
