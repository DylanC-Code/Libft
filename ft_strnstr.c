/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcastor <dcastor@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 13:38:30 by dcastor           #+#    #+#             */
/*   Updated: 2025/04/28 14:03:24 by dcastor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	const size_t	little_len = ft_strlen(little);
	size_t			i;
	size_t			j;

	i = -1;
	j = 0;
	if (little_len == 0)
		return ((char *)big);
	while (++i < len && big[i])
	{
		if (big[i] == little[j])
			j++;
		else
			j = 0;
		if (j == little_len)
			return ((char *)big + i - j + 1);
	}
	return (NULL);
}
