/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strjoin.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcastor <dcastor@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/25 11:57:39 by dcastor           #+#    #+#             */
/*   Updated: 2025/04/26 23:47:15 by dcastor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_libft.h"

static void	test_strjoin(char *s1, char *s2, const char *test_name)
{
	const size_t	s1_len = strlen(s1);
	const size_t	s2_len = strlen(s2);
	const char		*expected = ft_strjoin(s1, s2);
	size_t			i;

	if (expected == NULL)
		return (test_failed(test_name));
	i = -1;
	while (++i < s1_len)
		if (s1[i] != expected[i])
			return (free((void *)expected), test_failed(test_name));
	i = -1;
	while (++i < s2_len)
		if (s2[i] != expected[s1_len + i])
			return (free((void *)expected), test_failed(test_name));
	if (expected[s1_len + s2_len] != '\0')
		return (free((void *)expected), test_failed(test_name));
	(free((void *)expected), test_passed(test_name));
}

void	tests_strjoin(void)
{
	printf("================= [strjoin] ==================\n\n");
	test_strjoin("", "", "Join two empty strings");
	test_strjoin("Hello", "", "Join non-empty with empty (s2 empty)");
	test_strjoin("", "World", "Join empty with non-empty (s1 empty)");
	test_strjoin("Hello", "World", "Join two non-empty strings");
	test_strjoin("123", "456", "Join numbers as strings");
	test_strjoin("Hello ", "World!", "Join with space in first string");
	test_strjoin("🔥", "🚀", "Join UTF-8 characters");
	test_strjoin("A", "B", "Join single letters");
	test_strjoin("RepeatRepeatRepeat", "", "Join long string with empty");
	test_strjoin("", "RepeatRepeatRepeat", "Join empty with long string");
	printf("\n=============================================\n");
}
