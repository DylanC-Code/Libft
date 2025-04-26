/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strdup.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcastor <dcastor@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/26 19:35:39 by dcastor           #+#    #+#             */
/*   Updated: 2025/04/26 23:19:26 by dcastor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_libft.h"

void	test_strdup(char *str, char *test_name)
{
	const char	*expected = strdup(str);
	const char	*actual = ft_strdup(str);
	size_t		i;

	if ((expected == NULL && actual != NULL) || (actual == NULL
			&& expected != NULL))
		return (free((void *)expected), free((void *)actual),
			test_failed(test_name));
	i = -1;
	while (expected[++i])
		if (expected[i] != actual[i])
			return (free((void *)expected), free((void *)actual),
				test_failed(test_name));
	(free((void *)expected), free((void *)actual), test_passed(test_name));
}

void	tests_strdup(void)
{
	printf("================= [strdup] =================\n\n");
	test_strdup("", "Empty string");
	test_strdup("Hello, World!", "Simple string");
	test_strdup("0123456789", "Numeric string");
	test_strdup("A", "Single character");
	test_strdup("This is a longer string for testing purposes.", "Long string");
	test_strdup("   ", "Spaces only");
	test_strdup("\t\n\r", "Escape characters");
	test_strdup("Hello\0World", "Embedded null character");
	test_strdup("🔥🚀🌟", "UTF-8 emojis");
	test_strdup("End with newline\n", "Ending with newline");
	test_strdup("Spaces   in   middle", "Multiple spaces in middle");
	printf("\n=============================================\n");
}
