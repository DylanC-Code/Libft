/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcastor <dcastor@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 11:54:00 by dcastor           #+#    #+#             */
/*   Updated: 2025/04/26 19:54:42 by dcastor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*src;
	size_t	i;

	src = (char *)s;
	i = -1;
	while (src[++i])
		if (src[i] == c)
			return (src + i);
	if (c == 0)
		return (src + i);
	return (NULL);
}
