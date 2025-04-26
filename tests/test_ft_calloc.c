/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_calloc.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcastor <dcastor@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/26 19:35:39 by dcastor           #+#    #+#             */
/*   Updated: 2025/04/26 23:08:56 by dcastor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_libft.h"

void	test_calloc(size_t count, size_t size, char *test_name)
{
	void	*expected;
	void	*actual;

	expected = calloc(count, size);
	actual = ft_calloc(count, size);
	if ((expected != NULL && actual == NULL) || (actual != NULL
			&& expected == NULL))
		return (free(expected), free(actual), test_failed(test_name));
	if (expected && actual && memcmp(expected, actual, count * size) != 0)
		return (free(expected), free(actual), test_failed(test_name));
	(free(expected), free(actual), test_passed(test_name));
}

void	tests_calloc(void)
{
	printf("================= [calloc] =================\n\n");
	test_calloc(5, sizeof(int), "Allocate 5 ints");
	test_calloc(10, sizeof(char), "Allocate 10 chars");
	test_calloc(0, sizeof(int), "Zero elements");
	test_calloc(10, 0, "Zero size elements");
	test_calloc(1000000, sizeof(char), "Large allocation");
	test_calloc((size_t)-1, sizeof(char), "Overflow test");
	printf("\n=============================================\n");
}
