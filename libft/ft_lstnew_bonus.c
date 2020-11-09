/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szavarce <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/24 20:49:10 by szavarce          #+#    #+#             */
/*   Updated: 2019/11/24 21:44:12 by szavarce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void const *content)
{
	t_list	*ret;

	ret = malloc(sizeof(t_list));
	if (!ret)
	{
		return (NULL);
	}
	else
	{
		ret->content = (void *)content;
		ret->next = 0;
	}
	return (ret);
}
