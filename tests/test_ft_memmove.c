/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcastor <dcastor@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/25 16:08:26 by dcastor           #+#    #+#             */
/*   Updated: 2025/04/25 17:09:10 by dcastor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include "test_utils.h"

void	test_memmove(char *src, size_t n, char *test_name)
{
	char	expected[1000];
	char	actual[1000];
	size_t	i;

	memmove(expected, src, n);
	ft_memmove(actual, src, n);
	i = 0;
	while (i < n)
	{
		if (expected[i] != actual[i])
			return (test_failed(test_name));
		i++;
	}
	return (test_passed(test_name));
}

void	test_memmove_overlap(char *src, size_t n, char *test_name)
{
	char	expected[100];
	char	actual[100];
	size_t	i;

	strcpy(expected, src);
	strcpy(actual, src);
	memmove(expected + 5, expected, n);
	ft_memmove(actual + 5, actual, n);
	i = 0;
	while (i < n)
	{
		if (expected[i] != actual[i])
			return (test_failed(test_name));
		i++;
	}
	test_passed(test_name);
}

void	overlap_tests(void)
{
	printf("\n~~ [OVERLAP] ~~\n");
	test_memmove_overlap("Hello World!", 5,
		"[Hello World!] memmove 5 bytes with overlap");
	test_memmove_overlap("Hello World!", 11,
		"[Hello World!] memmove 11 bytes with overlap");
	test_memmove_overlap("Hello World!", 0,
		"[Hello World!] memmove 0 bytes with overlap");
}

void	basic_tests(void)
{
	printf("~~ [BASICS] ~~\n");
	test_memmove("Hello World!", 5, "[Hello World!] memmove 5 bytes");
	test_memmove("Hello World!", 11, "[Hello World!] memmove 11 bytes");
	test_memmove("Hello World!", 0, "[Hello World!] memmove 0 bytes");
}

void	tests_memmove(void)
{
	printf("================= [memmove] =================\n\n");
	basic_tests();
	overlap_tests();
	printf("\n=============================================\n");
}
