/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcastor <dcastor@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 13:38:30 by dcastor           #+#    #+#             */
/*   Updated: 2025/04/24 13:48:30 by dcastor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (!big || !little)
		return (NULL);
	while (i < len && big[i])
	{
		if (big[i] == big[j])
			j++;
		else
			j = 0;
		if (j == len - 1)
			return (&big[i - j]);
		i++;
	}
	return (NULL);
}
