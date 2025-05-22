/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcastor <dcastor@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 13:20:58 by dcastor           #+#    #+#             */
/*   Updated: 2025/05/22 12:00:20 by dcastor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	*ft_memchr(const void *s, int c, unsigned int n)
{
	unsigned char	*src;
	unsigned int	i;

	i = -1;
	src = (unsigned char *)s;
	while (++i < n)
		if (src[i] == (unsigned char)c)
			return (src + i);
	return (NULL);
}
