/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcastor <dcastor@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 17:45:53 by dcastor           #+#    #+#             */
/*   Updated: 2025/04/25 16:47:06 by dcastor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	const unsigned char	*s = src;
	unsigned char		*d;
	size_t				i;

	d = dest;
	if (s < d)
	{
		i = n;
		if (i == 0)
			return (dest);
		while (--i >= 0)
		{
			d[i] = s[i];
			if (i == 0)
				return (dest);
		}
	}
	else
	{
		i = -1;
		while (++i < n)
			d[i] = s[i];
	}
	return (dest);
}
