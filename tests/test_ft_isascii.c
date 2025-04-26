/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcastor <dcastor@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 17:49:07 by dcastor           #+#    #+#             */
/*   Updated: 2025/04/25 11:13:03 by dcastor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_libft.h"

static void	test_isascii(char c, const char *test_name)
{
	const bool	expected = isascii(c);
	const bool	actual = ft_isascii(c);

	assert_truthy_equal(actual, expected, test_name);
}

static void	test_isnotascii(char c, const char *test_name)
{
	const bool	expected = isascii(c);
	const bool	actual = ft_isascii(c);

	assert_falsy_equal(actual, expected, test_name);
}

static void	tests_should_be_true(void)
{
	printf("\n===== should be true =====\n\n");
	test_isascii('\0', "\\0 is ascii");
	test_isascii('!', "! is ascii");
	test_isascii('?', "? is ascii");
	test_isascii('Z', "Z is ascii");
	test_isascii((char)127, "\\127 is ascii");
}

static void	tests_should_be_false(void)
{
	printf("\n\n===== should be false =====\n\n");
	test_isnotascii((char)-4, "\\-4 is not ascii");
	test_isnotascii((char)-50, "\\-50 is not ascii");
	test_isnotascii((char)128, "\\128 is not ascii");
}

void	tests_isascii(void)
{
	printf("================= [isascii] =================");
	tests_should_be_true();
	tests_should_be_false();
	printf("\n=============================================");
}
