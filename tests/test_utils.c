/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcastor <dcastor@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/25 09:26:41 by dcastor           #+#    #+#             */
/*   Updated: 2025/04/25 14:06:08 by dcastor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

static int	tests_passed = 0;
static int	tests_failed = 0;

#define GREEN "\033[0;32m"
#define RED "\033[0;31m"
#define RESET "\033[0m"

void	test_passed(const char *test_name)
{
	tests_passed++;
	printf(GREEN "[PASS]" RESET ": %s\n", test_name);
}

void	test_failed(const char *test_name)
{
	tests_failed++;
	printf(RED "[FAIL]" RESET ": %s\n", test_name);
}

void	assert_int_equal(int actual, int expected, const char *test_name)
{
	if (actual == expected)
		test_passed(test_name);
	else
	{
		tests_failed++;
		printf(RED "[FAIL]" RESET ":%s - Expected  \"%d\", got \"%d\"\n",
			test_name, expected, actual);
	}
}

void	assert_str_equal(const char *actual, const char *expected,
		const char *test_name)
{
	if (strcmp(actual, expected) == EXIT_SUCCESS)
		test_passed(test_name);
	else
	{
		tests_failed++;
		printf(RED "[FAIL]" RESET ":%s - Expected  \"%s\", got \"%s\"\n",
			test_name, expected, actual);
	}
}

void	assert_truthy_equal(int actual, int expected, const char *test_name)
{
	if ((actual != 0) == (expected != 0))
		test_passed(test_name);
	else
	{
		tests_failed++;
		printf(RED "[FAIL]" RESET " %s - Expected  \"%s\", got \"%s\"\n",
			test_name, expected ? "truthy" : "falsy",
			actual ? "truthy" : "falsy");
	}
}

void	assert_falsy_equal(int actual, int expected, const char *test_name)
{
	if ((actual == 0) && (expected == 0))
		test_passed(test_name);
	else
	{
		tests_failed++;
		printf(RED "[FAIL]" RESET " %s - Expected  \"%s\", got \"%s\"\n",
			test_name, expected ? "truthy" : "falsy",
			actual ? "truthy" : "falsy");
	}
}

void	print_summary(void)
{
	printf("\n\nTests passed: %d\nTests failed: %d\n\n", tests_passed,
		tests_failed);
}
