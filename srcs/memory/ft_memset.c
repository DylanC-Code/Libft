/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcastor <dcastor@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 17:14:15 by dcastor           #+#    #+#             */
/*   Updated: 2025/05/22 11:59:02 by dcastor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, unsigned int n)
{
	unsigned char	*dest;
	unsigned int	i;

	dest = s;
	i = 0;
	while (i < n)
	{
		dest[i] = c;
		i++;
	}
	return (s);
}
