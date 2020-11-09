/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szavarce <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/14 20:49:10 by szavarce          #+#    #+#             */
/*   Updated: 2019/11/14 20:49:12 by szavarce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*ret;
	int		pos;

	if (!s || !f)
		return (0);
	if (!(ret = (char *)malloc((sizeof(char) * ft_strlen(s)) + 1)))
		return (0);
	pos = 0;
	while (s[pos])
	{
		ret[pos] = f(pos, s[pos]);
		pos++;
	}
	ret[pos] = '\0';
	return (ret);
}
