/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.test.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcastor <dcastor@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/25 14:36:06 by dcastor           #+#    #+#             */
/*   Updated: 2025/04/25 15:16:06 by dcastor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include "strings.h"
#include "test_utils.h"

void	test_bzero(size_t n, char *test_name)
{
	char	expected[10] = {3, 3, 3, 3, 3, 3, 3, 3, 3, 3};
	char	actual[10] = {3, 3, 3, 3, 3, 3, 3, 3, 3, 3};
	size_t	i;

	bzero(expected, n);
	ft_bzero(actual, n);
	i = 0;
	while (i < 10)
	{
		if (i < n && (expected[i] != actual[i] || expected[i] != '\0'))
			return (test_failed(test_name));
		if (i >= n && (expected[i] != 3 || expected[i] != actual[i]))
			return (test_failed(test_name));
		i++;
	}
	test_passed(test_name);
}

void	tests_bzero(void)
{
	printf("================== [bzero] ==================\n\n");
	test_bzero(0, "bzero with size of 0");
	test_bzero(4, "bzero with size of 4");
	test_bzero(6, "bzero with size of 6");
	printf("\n=============================================");
}
