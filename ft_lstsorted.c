/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsorted.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmoraled <dmoraled@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 10:28:31 by dmoraled          #+#    #+#             */
/*   Updated: 2024/12/10 10:29:39 by dmoraled         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsorted(t_list *lst, int (*less)(void *, void *))
{
	if (!lst || !less)
		return (0);
	while (lst->next)
	{
		if (!less(lst->content, lst->next->content))
			return (0);
		lst = lst->next;
	}
	return (1);
}
