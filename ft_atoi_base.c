/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmoraled <dmoraled@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 17:13:54 by dmoraled          #+#    #+#             */
/*   Updated: 2025/02/25 11:33:42 by dmoraled         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi_base(const char *str, const char *base)
{
	int		result;
	int		i;
	int		base_len;
	char	*base_ptr;

	base_len = ft_strlen(base);
	i = 0;
	result = 0;
	while ((str[i] >= '\t' && str[i] <= '\r') || str[i] == ' ')
		++i;
	base_ptr = ft_strchr(base, str[i]);
	while (str[i] && base_ptr)
	{
		result = (result * base_len) + (int)(base_ptr - base);
		++i;
		base_ptr = ft_strchr(base, str[i]);
	}
	return (result);
}
