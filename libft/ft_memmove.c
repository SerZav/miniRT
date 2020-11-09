/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szavarce <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/14 20:49:10 by szavarce          #+#    #+#             */
/*   Updated: 2019/11/14 20:49:12 by szavarce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t			pos;
	char			*x;
	const char		*y;
	char			t[n];

	pos = 0;
	x = dest;
	y = src;
	if (!((char *)dest) && (!(char *)src) && n > 0)
		return (x);
	pos = 0;
	while (pos < n)
	{
		t[pos] = y[pos];
		pos++;
	}
	pos = 0;
	while (pos < n)
	{
		x[pos] = t[pos];
		pos++;
	}
	return (x);
}
