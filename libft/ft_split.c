/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szavarce <szavarce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/14 20:49:10 by szavarce          #+#    #+#             */
/*   Updated: 2019/11/29 14:01:47 by szavarce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_alloc_lines(char **tabla, char *s, char c)
{
	int		posline;
	int		poscol;
	int		pos;

	pos = 0;
	posline = -1;
	poscol = 0;
	while ((unsigned int)pos < ft_strlen(s))
	{
		if (s[pos] == c || posline == -1)
		{
			while (s[pos] == c)
				pos++;
			posline++;
			poscol = 0;
		}
		else
		{
			poscol++;
			pos++;
		}
		tabla[posline] = (char *)malloc((sizeof(char) * poscol) + 1);
	}
	tabla[++posline] = (char *)malloc((sizeof(char) * 1));
	return (0);
}

static char		**ft_split_l(char **ret, char *s, char c, int posl)
{
	size_t				pos;
	int					posc;

	pos = 0;
	posc = 0;
	while (s[pos])
	{
		if (s[pos] != c)
		{
			ret[posl][posc++] = s[pos];
		}
		if (s[pos] == c || pos + 1 == ft_strlen(s))
		{
			if (posc > 0)
			{
				ret[posl++][posc] = 0;
				posc = 0;
			}
		}
		pos++;
	}
	ret[posl] = 0;
	return (ret);
}

char			**ft_split(char const *s, char c)
{
	char				**tab;

	if (s == NULL)
		return (NULL);
	if (!(tab = (char **)malloc((sizeof(char *) * (ft_strlen(s) + 1)))))
		return (NULL);
	ft_alloc_lines(tab, (char *)s, c);
	return (ft_split_l(tab, (char *)s, c, 0));
}
