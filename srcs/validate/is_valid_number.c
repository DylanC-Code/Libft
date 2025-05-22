/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_valid_number.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcastor <dcastor@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/09 16:48:07 by dcastor           #+#    #+#             */
/*   Updated: 2025/05/22 12:22:51 by dcastor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "validate.h"

bool	is_valid_number(char *str)
{
	if (!str)
		return (false);
	if (*str == '+' || *str == '-')
		str++;
	while (*str)
		if (!ft_isdigit(*str++))
			return (false);
	return (true);
}
