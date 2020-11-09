/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szavarce <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/14 20:49:10 by szavarce          #+#    #+#             */
/*   Updated: 2019/11/14 20:49:12 by szavarce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned int	pos;
	const char		*x;
	const char		*y;

	x = s1;
	y = s2;
	pos = 0;
	while (pos < n)
	{
		if ((unsigned char)x[pos] != (unsigned char)y[pos])
		{
			return ((unsigned char)x[pos] - (unsigned char)y[pos]);
		}
		pos++;
	}
	return (0);
}
