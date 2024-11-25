/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmoraled <dmoraled@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 17:25:01 by dmoraled          #+#    #+#             */
/*   Updated: 2024/10/09 18:29:55 by dmoraled         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(const char *s1, const char *s2)
{
	char	*dest;
	size_t	size;

	if (!s1 && !s2)
		return (0);
	size = ft_strlen(s1) + ft_strlen(s2) + 1;
	dest = malloc(size * sizeof(char));
	if (!dest)
		return (0);
	ft_strlcpy(dest, s1, size);
	ft_strlcat(dest, s2, size);
	return (dest);
}
