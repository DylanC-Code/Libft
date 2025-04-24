/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcastor <dcastor@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 17:42:04 by dcastor           #+#    #+#             */
/*   Updated: 2025/04/24 17:47:40 by dcastor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.test.h"

bool	test_is_alnum(char c)
{
	const bool	both_are_true = (ft_isalnum(c) && isalnum(c));
	const bool	both_are_false = (!ft_isalnum(c) && !isalnum(c));
	const bool	is_ok = (both_are_false || both_are_true);

	if (is_ok)
		printf("%c is OK ✅\n", c);
	else
		printf("%c is not OK ❌\n", c);
	return (is_ok);
}

static void	tests_should_be_true(void)
{
	printf("\n===== should be true =====\n\n");
	test_is_alnum('a');
	test_is_alnum('z');
	test_is_alnum('A');
	test_is_alnum('Z');
	test_is_alnum('0');
	test_is_alnum('9');
}

static void	tests_should_be_false(void)
{
	printf("\n\n===== should be false =====\n\n");
	test_is_alnum('!');
	test_is_alnum(':');
	test_is_alnum('[');
	test_is_alnum('|');
}

void	tests_isalnum(void)
{
	printf("================= [isalnum] =================");
	tests_should_be_true();
	tests_should_be_false();
	printf("\n=============================================");
}
