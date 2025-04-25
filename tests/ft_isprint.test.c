/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcastor <dcastor@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/25 11:23:53 by dcastor           #+#    #+#             */
/*   Updated: 2025/04/25 11:54:06 by dcastor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.test.h"

static void	test_isprint(char c, const char *test_name)
{
	const bool	expected = isprint(c);
	const bool	actual = ft_isprint(c);

	assert_truthy_equal(actual, expected, test_name);
}

static void	test_isnotprint(char c, const char *test_name)
{
	const bool	expected = isprint(c);
	const bool	actual = ft_isprint(c);

	assert_falsy_equal(actual, expected, test_name);
}

static void	tests_should_be_true(void)
{
	printf("\n===== should be true =====\n\n");
	test_isprint('0', "0 is print");
	test_isprint('a', "a is print");
	test_isprint('%', "\% is print");
	test_isprint('{', "{ is print");
	test_isprint('{', "{ is print");
}

static void	tests_should_be_false(void)
{
	printf("\n\n===== should be false =====\n\n");
	test_isnotprint((char)31, "0x1F is not print");
	test_isnotprint((char)10, "0xA is not print");
	test_isnotprint('\0', "\\0 is not print");
}

void	tests_isprint(void)
{
	printf("\n================= [isdigit] =================");
	tests_should_be_true();
	tests_should_be_false();
	printf("\n=============================================\n");
}
