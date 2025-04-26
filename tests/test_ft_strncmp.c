/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strncmp.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcastor <dcastor@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/26 19:35:39 by dcastor           #+#    #+#             */
/*   Updated: 2025/04/26 20:11:41 by dcastor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_libft.h"

void	test_strncmp(const char *s1, const char *s2, size_t n, char *test_name)
{
	const int	expected = strncmp(s1, s2, n);
	const int	actual = ft_strncmp(s1, s2, n);

	if (expected != actual)
		return (test_failed(test_name));
	test_passed(test_name);
}

void	tests_strncmp(void)
{
	printf("================= [strncmp] =================\n\n");
	test_strncmp("abc", "abc", 3, "strncmp('abc', 'abc', 3)");
	test_strncmp("abcdef", "abcdef", 10, "strncmp('abcdef', 'abcdef', 10)");
	test_strncmp("abc", "xbc", 3, "strncmp('abc', 'xbc', 3)");
	test_strncmp("abc", "adc", 3, "strncmp('abc', 'adc', 3)");
	test_strncmp("abc", "abd", 3, "strncmp('abc', 'abd', 3)");
	test_strncmp("abcdef", "abcxyz", 3, "strncmp('abcdef', 'abcxyz', 3)");
	test_strncmp("abcdef", "abcxyz", 5, "strncmp('abcdef', 'abcxyz', 5)");
	test_strncmp("abc", "abcd", 3, "strncmp('abc', 'abcd', 3)");
	test_strncmp("abcd", "abc", 4, "strncmp('abcd', 'abc', 4)");
	test_strncmp("", "", 1, "strncmp('', '', 1)");
	test_strncmp("abc", "", 1, "strncmp('abc', '', 1)");
	test_strncmp("", "abc", 1, "strncmp('', 'abc', 1)");
	printf("\n=============================================\n");
}
