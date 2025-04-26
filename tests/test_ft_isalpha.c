/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcastor <dcastor@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 16:05:29 by dcastor           #+#    #+#             */
/*   Updated: 2025/04/25 11:01:31 by dcastor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_libft.h"

static void	test_isalpha(char c, const char *test_name)
{
	const bool	expected = isalpha(c);
	const bool	actual = ft_isalpha(c);

	assert_truthy_equal(actual, expected, test_name);
}

static void	test_isnotalpha(char c, const char *test_name)
{
	const bool	expected = isalpha(c);
	const bool	actual = ft_isalpha(c);

	assert_falsy_equal(actual, expected, test_name);
}

static void	tests_should_be_true(void)
{
	printf("\n===== should be true =====\n\n");
	test_isalpha('a', "a is alpha");
	test_isalpha('z', "z is alpha");
	test_isalpha('A', "A is alpha");
	test_isalpha('Z', "Z is alpha");
}

static void	tests_should_be_false(void)
{
	printf("\n\n===== should be false =====\n\n");
	test_isnotalpha('0', "0 is not alpha");
	test_isnotalpha('9', "9 is not alpha");
	test_isnotalpha('\0', "\\0 is not alpha");
	test_isnotalpha((char)127, "\\127 is not alpha");
}

void	tests_isalpha(void)
{
	printf("================= [isalpha] =================");
	tests_should_be_true();
	tests_should_be_false();
	printf("\n\n=============================================");
}
