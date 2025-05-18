/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lis_len.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcastor <dcastor@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/18 23:05:15 by dcastor           #+#    #+#             */
/*   Updated: 2025/05/18 23:21:44 by dcastor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_lis_len(int arr[], size_t size)
{
	int		lower_bound_index;
	int		*tmp_arr;
	size_t	i;
	size_t	j;

	tmp_arr = malloc(sizeof(int) * size);
	if (!tmp_arr)
		return (0);
	i = -1;
	j = 0;
	while (++i < size)
	{
		if (arr[i] > tmp_arr[j])
		{
			tmp_arr[++j] = arr[i];
			continue ;
		}
		lower_bound_index = ft_lower_bound(tmp_arr, j + 1, arr[i]);
		if (lower_bound_index < 0)
			tmp_arr[0] = arr[i];
		else
			tmp_arr[lower_bound_index] = arr[i];
	}
	return (j);
}
