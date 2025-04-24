/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcastor <dcastor@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 09:51:00 by dcastor           #+#    #+#             */
/*   Updated: 2025/04/24 10:10:50 by dcastor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

bool	test_memmove(void)
{
	const size_t	size = 13;
	const char		src = "Hello World!";
	char			dest[size];
	const char		*res_dest = ft_memmove(dest, src, size);

	// return (ft_strc);
}

void	tests_memmove(void)
{
	test_memmove();
}
