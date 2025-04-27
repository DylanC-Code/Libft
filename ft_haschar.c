/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_haschar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcastor <dcastor@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 11:49:57 by dcastor           #+#    #+#             */
/*   Updated: 2025/04/27 11:03:24 by dcastor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

bool	ft_haschar(char *str, char c)
{
	size_t	i;

	i = -1;
	while (str[++i])
		if (str[i] == c)
			return (true);
	return (false);
}
