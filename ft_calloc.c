/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcastor <dcastor@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 14:23:37 by dcastor           #+#    #+#             */
/*   Updated: 2025/04/24 14:57:53 by dcastor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	unsigned char	*mptr;
	size_t			i;

	if (nmemb * size > INT_MAX)
		return (0);
	if (!nmemb || !size)
	{
		mptr = malloc(0);
		return (mptr);
	}
	i = 0;
	mptr = malloc(sizeof(size) * nmemb);
	while (i < size * nmemb)
	{
		mptr[i] = '\0';
		i++;
	}
	return (mptr);
}
