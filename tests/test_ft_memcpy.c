/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.test.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcastor <dcastor@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/25 15:19:07 by dcastor           #+#    #+#             */
/*   Updated: 2025/04/25 15:50:38 by dcastor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include "test_utils.h"

void	test_memcpy(const char *src, size_t s, char *test_name)
{
	char	expected[1000];
	char	actual[1000];
	size_t	i;

	memcpy(expected, src, s);
	ft_memcpy(actual, src, s);
	i = 0;
	while (i < s)
	{
		if (expected[i] != src[i] || actual[i] != expected[i])
			return (test_failed(test_name));
		i++;
	}
	test_passed(test_name);
}

void	tests_memcpy(void)
{
	printf("\n================= [memcpy] ==================\n\n");
	test_memcpy("Hello", 4, "[Hello] copy 4 bytes");
	test_memcpy("Hello", 0, "[Hello] copy 0 bytes");
	test_memcpy("Jambon Beurre", 14, "[Jambon Beurre] copy 14 bytes");
	printf("\n=============================================\n");
}
