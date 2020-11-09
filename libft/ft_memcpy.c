/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szavarce <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/14 20:49:10 by szavarce          #+#    #+#             */
/*   Updated: 2019/11/14 20:49:12 by szavarce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned int	pos;
	char			*x;
	const char		*y;

	pos = 0;
	x = dest;
	y = src;
	if (!((char *)dest) && (!(char *)src) && n > 0)
		return (x);
	while (pos < n)
	{
		x[pos] = y[pos];
		pos++;
	}
	return (x);
}
