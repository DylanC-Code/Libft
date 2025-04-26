/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_memcmp.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcastor <dcastor@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/26 19:35:39 by dcastor           #+#    #+#             */
/*   Updated: 2025/04/26 20:11:41 by dcastor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_libft.h"

void	test_memcmp(const void *s1, const void *s2, size_t n, char *test_name)
{
	const int	expected = memcmp(s1, s2, n);
	const int	actual = ft_memcmp(s1, s2, n);

	if (expected != actual)
		return (test_failed(test_name));
	test_passed(test_name);
}

void	tests_memcmp(void)
{
	printf("================= [memcmp] =================\n\n");
	test_memcmp("abc", "abc", 3, "Identical strings");
	test_memcmp("abc", "abd", 3, "Different last character");
	test_memcmp("abc", "ab", 2, "Partial comparison (same)");
	test_memcmp("abc", "abz", 2, "Partial comparison (same first 2 chars)");
	test_memcmp("abc", "abcde", 5, "Compare with longer second string");
	test_memcmp("", "", 0, "Empty strings comparison");
	test_memcmp("\0abc", "\0abc", 4,
		"Strings starting with null byte (identical)");
	test_memcmp("\0abc", "\0abd", 4,
		"Strings starting with null byte (different later)");
	test_memcmp("abcdef", "abcdeg", 6, "Difference at the last character");
	test_memcmp("abcdef", "abcdef", 0, "Zero length comparison");
	printf("\n=============================================\n");
}
