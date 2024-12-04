/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstidx.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmoraled <dmoraled@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/04 11:33:24 by dmoraled          #+#    #+#             */
/*   Updated: 2024/12/04 11:52:24 by dmoraled         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstidx(t_list *lst, unsigned int idx)
{
	if (!lst)
		return (0);
	while (idx > 0 && lst)
	{
		lst = lst->next;
		--idx;
	}
	if (!lst)
		return (0);
	return (lst);
}
