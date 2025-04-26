/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.test.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcastor <dcastor@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/25 11:57:39 by dcastor           #+#    #+#             */
/*   Updated: 2025/04/25 13:43:21 by dcastor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_libft.h"
#include <string.h>

static void	test_isprint(char *str, const char *test_name)
{
	const int	expected = strlen(str);
	const int	actual = ft_strlen(str);

	assert_int_equal(actual, expected, test_name);
}

void	tests_strlen(void)
{
	printf("================= [strlen] ==================\n\n");
	test_isprint("Hello World!", "[Hello World!]");
	test_isprint("Jambon", "[Jambon]");
	test_isprint("", "[]");
	printf("\n=============================================\n");
}
