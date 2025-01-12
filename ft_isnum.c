/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isnum.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmoraled <dmoraled@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 11:44:55 by dmoraled          #+#    #+#             */
/*   Updated: 2025/01/12 15:13:46 by dmoraled         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isnum(const char *s)
{
	int	foundn;

	foundn = 0;
	while (*s)
	{
		if (!ft_isspace(*s) && !ft_isdigit(*s) && *s != '-' && *s != '+')
			return (0);
		if ((*s == '-' || *s == '+') && !ft_isdigit(s[1]))
			return (0);
		if (ft_isdigit(*s))
			foundn = 1;
		++s;
	}
	return (foundn);
}
