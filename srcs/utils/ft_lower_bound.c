/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lower_bound.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcastor <dcastor@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/18 22:57:54 by dcastor           #+#    #+#             */
/*   Updated: 2025/05/18 23:03:22 by dcastor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lower_bound(int arr[], size_t size, int value)
{
	size_t	i;

	i = -1;
	while (++i < size)
		if (arr[i] < value)
			return (i);
	return (-1);
}
