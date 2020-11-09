/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: serzav <serzav@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/01 23:43:00 by serzav            #+#    #+#             */
/*   Updated: 2019/12/02 00:17:21 by serzav           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static t_list		*ft_lstlast_2(t_list *lst)
{
	t_list	*ret;

	ret = lst;
	while (lst)
	{
		ret = lst;
		lst = lst->next;
	}
	return (ret);
}

void				ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last;

	if (lst)
	{
		if (*lst == NULL)
			*lst = new;
		else
		{
			last = ft_lstlast_2(*(lst));
			last->next = new;
		}
	}
}
