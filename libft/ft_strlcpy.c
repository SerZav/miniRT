/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szavarce <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/14 20:49:10 by szavarce          #+#    #+#             */
/*   Updated: 2019/11/17 20:49:12 by szavarce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	pos;
	size_t	lensrc;
	size_t	lendst;

	if (!dst || !src)
		return (0);
	lensrc = 0;
	while (src[lensrc])
		lensrc++;
	lendst = 0;
	while (dst[lendst])
		lendst++;
	if (!size)
		return (lensrc);
	pos = 0;
	if (size == 0)
		return (lensrc);
	while (src[pos] && pos < size - 1)
	{
		dst[pos] = src[pos];
		pos++;
	}
	dst[pos] = 0;
	return (lensrc);
}
