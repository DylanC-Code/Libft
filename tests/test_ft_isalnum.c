/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcastor <dcastor@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 17:42:04 by dcastor           #+#    #+#             */
/*   Updated: 2025/04/25 11:09:50 by dcastor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_libft.h"

static void	test_isalnum(char c, const char *test_name)
{
	const bool	expected = isalnum(c);
	const bool	actual = ft_isalnum(c);

	assert_truthy_equal(actual, expected, test_name);
}

static void	test_isnotalnum(char c, const char *test_name)
{
	const bool	expected = isalnum(c);
	const bool	actual = ft_isalnum(c);

	assert_falsy_equal(actual, expected, test_name);
}

static void	tests_should_be_true(void)
{
	printf("\n===== should be true =====\n\n");
	test_isalnum('a', "a is alnum");
	test_isalnum('z', "z is alnum");
	test_isalnum('A', "A is alnum");
	test_isalnum('Z', "Z is alnum");
	test_isalnum('0', "0 is alnum");
	test_isalnum('9', "9 is alnum");
}

static void	tests_should_be_false(void)
{
	printf("\n\n===== should be false =====\n\n");
	test_isnotalnum('!', "! is not alnum");
	test_isnotalnum(':', ": is not alnum");
	test_isnotalnum('[', "[ is not alnum");
	test_isnotalnum('|', "| is not alnum");
}

void	tests_isalnum(void)
{
	printf("================= [isalnum] =================");
	tests_should_be_true();
	tests_should_be_false();
	printf("\n=============================================");
}
