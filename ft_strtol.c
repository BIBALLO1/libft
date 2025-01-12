/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtol.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmoraled <dmoraled@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/12 14:20:34 by dmoraled          #+#    #+#             */
/*   Updated: 2025/01/12 14:29:12 by dmoraled         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

long	ft_strtol(const char *str, const char **endptr)
{
	long	result;

	result = ft_atol(str);
	while (ft_isspace(*str))
		++str;
	if (*str == '+' || *str == '-')
		++str;
	while (ft_isdigit(*str))
		++str;
	while (ft_isspace(*str))
		++str;
	if (endptr)
		*endptr = str;
	return (result);
}
