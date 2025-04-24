/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcastor <dcastor@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 13:29:16 by dcastor           #+#    #+#             */
/*   Updated: 2025/04/24 13:37:26 by dcastor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*src1;
	unsigned char	*src2;
	size_t			i;

	src1 = (unsigned char *)s1;
	src2 = (unsigned char *)s2;
	i = 0;
	if (!src1 || !src2 || n == 0)
		return (0);
	while ((src1[i] || src2[i]) && i < n)
		if (src1[i] != src2[i])
			return (src1[i] - src2[i]);
	return (0);
}
