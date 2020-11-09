/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szavarce <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/24 20:49:10 by szavarce          #+#    #+#             */
/*   Updated: 2019/11/24 21:44:12 by szavarce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_isdigit(int c)
{
	if (c < -1)
		c = (unsigned char)c;
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
