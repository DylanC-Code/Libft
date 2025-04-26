/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_memchr.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcastor <dcastor@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/25 16:08:26 by dcastor           #+#    #+#             */
/*   Updated: 2025/04/26 20:23:36 by dcastor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_libft.h"

void	test_memchr(const void *s, int c, size_t n, char *test_name)
{
	const void	*expected = memchr(s, c, n);
	const void	*actual = ft_memchr(s, c, n);

	if (expected != actual)
		return (test_failed(test_name));
	test_passed(test_name);
}

void	tests_memchr(void)
{
	const char	data[] = "Hello\0World";

	printf("================= [memchr] =================\n\n");
	test_memchr(data, 'H', 11, "memchr('H')");
	test_memchr(data, 'e', 11, "memchr('e')");
	test_memchr(data, 'o', 11, "memchr('o')");
	test_memchr(data, '\0', 11, "memchr('\\0')");
	test_memchr(data, 'x', 11, "memchr('x')");
	test_memchr(data, 'W', 5,
		"memchr('W') dans les 5 premiers octets (pas trouvé)");
	test_memchr(data, 'W', 7,
		"memchr('W') dans les 7 premiers octets (trouvé)");
	printf("\n=============================================\n");
}
