/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: serzav <serzav@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/01 23:25:02 by serzav            #+#    #+#             */
/*   Updated: 2019/12/01 23:45:58 by serzav           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list		*ft_lstlast(t_list *lst)
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
