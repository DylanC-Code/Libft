/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcastor <dcastor@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 13:49:54 by dcastor           #+#    #+#             */
/*   Updated: 2025/04/26 22:47:03 by dcastor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int		sign;
	char	*ptr;
	int		res;

	ptr = ft_trimstart((char *)nptr);
	sign = 1;
	res = 0;
	if (*ptr == '-' || *ptr == '+')
		if (*ptr++ == '-')
			sign = -1;
	while (*ptr && ft_isdigit(*ptr))
		res = res * 10 + (*ptr++ - '0');
	return (res * sign);
}
