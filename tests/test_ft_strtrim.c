/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strtrim.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcastor <dcastor@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/26 19:35:39 by dcastor           #+#    #+#             */
/*   Updated: 2025/04/27 10:50:22 by dcastor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_libft.h"

void	test_strtrim(char const *s1, char const *set, char *expected,
		char *test_name)
{
	const char	*actual = ft_strtrim(s1, set);

	if (actual == NULL)
		return (test_failed(test_name));
	if (strcmp(actual, expected))
		return (free((void *)actual), test_failed(test_name));
	return (free((void *)actual), test_passed(test_name));
}

void	tests_strtrim(void)
{
	printf("================= [strtrim] =================\n\n");
	test_strtrim("   Hello World   ", " ", "Hello World", "Trim spaces around");
	test_strtrim("xxx42xxx", "x", "42", "Trim 'x' around");
	test_strtrim("42", " ", "42", "No trimming needed");
	test_strtrim("", " ", "", "Empty source string");
	test_strtrim("   ", " ", "",
		"Only spaces to trim (should return (empty string))");
	test_strtrim("   Hello", " ", "Hello", "Trim spaces at start only");
	test_strtrim("Hello   ", " ", "Hello", "Trim spaces at end only");
	test_strtrim("--Test--", "-", "Test", "Trim dashes around");
	test_strtrim("ABCTestABC", "ABC", "Test", "Trim multiple characters (ABC)");
	test_strtrim("🔥Hello🔥", "🔥", "Hello", "Trim emojis around");
	test_strtrim("   \n\tHello\n\t   ", " \n\t", "Hello",
		"Trim whitespace characters");
	test_strtrim("###Keep##Inside###", "#", "Keep##Inside",
		"Trim hashes only outside");
	test_strtrim("NothingToTrim", "", "NothingToTrim",
		"Empty set (should do nothing)");
	test_strtrim("RemoveEverything", "RemoveEverything", "",
		"Set contains all characters (should return (empty))");
	printf("\n=============================================\n");
}
