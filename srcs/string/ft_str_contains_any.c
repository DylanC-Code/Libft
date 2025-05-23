/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_contains_any.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcastor <dcastor@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/23 12:52:48 by dcastor           #+#    #+#             */
/*   Updated: 2025/05/23 12:55:01 by dcastor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

bool	ft_str_contains_any(char *str, char *set)
{
	while (str && *str)
		if (ft_strchr(set, *str++))
			return (true);
	return (false);
}
