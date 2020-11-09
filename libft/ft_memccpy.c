/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szavarce <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/14 20:49:10 by szavarce          #+#    #+#             */
/*   Updated: 2019/11/14 20:49:12 by szavarce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	unsigned int	pos;
	char			*x;
	const char		*y;
	char			cc;

	cc = (unsigned char)c;
	pos = 0;
	x = dest;
	y = src;
	while (pos < n)
	{
		x[pos] = y[pos];
		if (y[pos] == cc)
			return (&x[pos + 1]);
		pos++;
	}
	return (0);
}
