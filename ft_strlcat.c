/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcastor <dcastor@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 10:36:29 by dcastor           #+#    #+#             */
/*   Updated: 2025/04/24 11:18:03 by dcastor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t siz)
{
	const size_t	initial_len_dst = ft_strlen(dst);
	const size_t	total_len = ft_strlen(src) + ft_min(siz, initial_len_dst);
	size_t			i;

	i = 0;
	if (!src)
		return (total_len);
	while (initial_len_dst + i < siz - 1 && src[i])
	{
		dst[initial_len_dst + i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (initial_len_dst);
}
