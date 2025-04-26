/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_substr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcastor <dcastor@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/26 19:35:39 by dcastor           #+#    #+#             */
/*   Updated: 2025/04/26 22:47:37 by dcastor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_libft.h"

void	test_substr(char *str, unsigned int start, size_t len, char *test_name)
{
	const char	*expected = ft_substr(str, start, len);
	size_t		i;

	if (expected == NULL)
		return (test_failed(test_name));
	i = -1;
	while (++i < len)
		if (str[start + i] != expected[i])
			return (free((void *)expected), test_failed(test_name));
	(free((void *)expected), test_passed(test_name));
}

void	tests_substr(void)
{
	printf("================= [substr] =================\n\n");
	test_substr("Hello, World!", 0, 5, "Substring from start (Hello)");
	test_substr("Hello, World!", 7, 5, "Substring from middle (World)");
	test_substr("Hello, World!", 0, 50,
		"Length longer than string (should cut)");
	test_substr("Hello", 2, 10, "Length longer than available after start");
	test_substr("Hello", 5, 1, "Start at end (should return (empty string))");
	test_substr("Hello", 6, 2, "Start past end (should return (empty string))");
	test_substr("", 0, 5, "Empty source string");
	test_substr("Test", 0, 0, "Length zero (should return (empty string))");
	test_substr("A", 0, 1, "One character string");
	test_substr("abcdef", 2, 3, "Substring in the middle (cde)");
	printf("\n=============================================\n");
}
