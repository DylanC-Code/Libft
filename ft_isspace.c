/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isspace.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcastor <dcastor@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 13:56:44 by dcastor           #+#    #+#             */
/*   Updated: 2025/04/24 14:01:22 by dcastor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

bool	ft_isspace(int c)
{
	const char	*white_spaces = " \f\n\r\t\v";
	size_t		i;

	i = 0;
	while (white_spaces[i])
		if (c == white_spaces[i])
			return (true);
	return (false);
}
