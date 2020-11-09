/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szavarce <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/14 20:49:10 by szavarce          #+#    #+#             */
/*   Updated: 2019/11/14 20:49:12 by szavarce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static int	ft_check(const char *x)
{
	int		pos;
	int		sign;

	sign = 0;
	pos = 0;
	while (x[pos])
	{
		if (x[pos] >= '0' && x[pos] <= '9')
			return (pos - sign);
		else if (x[pos] == '-' || x[pos] == '+')
		{
			if (sign == 0)
			{
				sign++;
				pos++;
			}
			else
				return (-1);
		}
		else if (x[pos] == ' ' || x[pos] == '0' || (x[pos] < 14 && x[pos] > 8))
			pos++;
		else
			return (-1);
	}
	return (-1);
}

int			ft_atoi(const char *nptr)
{
	int				pos;
	int				posini;
	int				sign;
	long long int	result;

	posini = ft_check(nptr);
	pos = posini;
	result = 0;
	sign = 1;
	if (pos < 0)
		return (0);
	if (nptr[pos] == '-' || nptr[pos] == '+')
	{
		sign = (nptr[pos] == '-' ? -1 : 1);
		pos++;
	}
	while (nptr[pos] != '\0' && nptr[pos] >= '0' && nptr[pos] <= '9')
	{
		result = (result * 10) + ((nptr[pos] - 48) % 10);
		if (pos - posini > 17 && result < 10)
			return (sign == 1 ? -1 * sign : 0);
		pos++;
	}
	return (result * sign);
}
