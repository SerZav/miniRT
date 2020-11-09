/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szavarce <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/14 20:49:10 by szavarce          #+#    #+#             */
/*   Updated: 2019/11/14 20:49:12 by szavarce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strchr(const char *s, int c)
{
	int pos;

	c = (unsigned char)c;
	pos = 0;
	if (c != 0)
		while (s[pos])
		{
			if (s[pos] == c)
				return ((char *)s + pos);
			pos++;
		}
	else
	{
		while (s[pos] != '\0')
			pos++;
		return ((char *)s + pos);
	}
	return (0);
}
