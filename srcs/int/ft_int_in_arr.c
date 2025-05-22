/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_int_in_arr.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcastor <dcastor@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/19 11:06:52 by dcastor           #+#    #+#             */
/*   Updated: 2025/05/22 11:58:53 by dcastor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_int_in_array(int *arr, unsigned int size, int value)
{
	unsigned int	i;

	i = -1;
	while (++i < size)
		if (arr[i] == value)
			return (true);
	return (false);
}
