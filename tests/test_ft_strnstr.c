/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strnstr.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcastor <dcastor@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/26 19:35:39 by dcastor           #+#    #+#             */
/*   Updated: 2025/04/28 16:23:25 by dcastor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_libft.h"

void	test_strnstr(char *s1, char *s2, size_t n, char *expected,
		char *test_name)
{
	const char	*actual = ft_strnstr(s1, s2, n);
	const char	*dd = strnstr(s1, s2, n);

	printf("E: %s, A: %s\n", dd, actual);
	if (actual != expected)
		return (test_failed(test_name));
	test_passed(test_name);
}

void	tests_strnstr(void)
{
	char	*str;
	char	*str2;

	str = "Hello world";
	str2 = "abcdef";
	printf("================= [strnstr] =================\n\n");
	test_strnstr(str, "world", 11, str + 6, "Find 'world' in 'Hello world'");
	test_strnstr(str, "Hello", 11, str, "Find 'Hello' at beginning");
	test_strnstr(str, "world", 5, NULL, "Not enough length to find 'world'");
	test_strnstr(str, "planet", 11, NULL, "Needle 'planet' not found");
	test_strnstr(str, "", 11, str, "Empty needle returns haystack");
	test_strnstr(str2, "def", 6, str2 + 3, "Find 'def' at end of 'abcdef'");
	test_strnstr(str2, "def", 5, NULL, "Not enough length to find 'def'");
	test_strnstr(str2, "abc", 3, str2, "Find 'abc' at start of 'abcdef'");
	test_strnstr(str2, "f", 6, str2 + 5, "Find 'f' at end of 'abcdef'");
	test_strnstr(str2, "f", 5, NULL, "Not enough length to find 'f'");
	printf("\n=============================================\n");
}
