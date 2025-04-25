/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcastor <dcastor@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 16:05:29 by dcastor           #+#    #+#             */
/*   Updated: 2025/04/25 11:07:25 by dcastor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.test.h"

static void	test_isdigit(char c, const char *test_name)
{
	const bool	expected = isdigit(c);
	const bool	actual = ft_isdigit(c);

	assert_truthy_equal(actual, expected, test_name);
}

static void	test_isnotdigit(char c, const char *test_name)
{
	const bool	expected = isdigit(c);
	const bool	actual = ft_isdigit(c);

	assert_falsy_equal(actual, expected, test_name);
}

static void	tests_should_be_true(void)
{
	printf("\n===== should be true =====\n\n");
	test_isdigit('0', "0 is digit");
	test_isdigit('5', "5 is digit");
	test_isdigit('9', "9 is digit");
}

static void	tests_should_be_false(void)
{
	printf("\n\n===== should be false =====\n\n");
	test_isnotdigit('a', "a is not digit");
	test_isnotdigit('&', "& is not digit");
	test_isnotdigit('>', "> is not digit");
}

void	tests_isdigit(void)
{
	printf("\n================= [isdigit] =================");
	tests_should_be_true();
	tests_should_be_false();
	printf("\n=============================================\n");
}
