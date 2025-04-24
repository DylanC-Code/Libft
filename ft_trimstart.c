/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_trimstart.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcastor <dcastor@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 13:54:14 by dcastor           #+#    #+#             */
/*   Updated: 2025/04/24 14:10:33 by dcastor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_trimstart(char *s)
{
	if (!s)
		return (NULL);
	while (*s)
	{
		if (!ft_isspace(*s))
			return (s);
		s++;
	}
	return (s);
}
