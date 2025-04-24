/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcastor <dcastor@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 16:05:29 by dcastor           #+#    #+#             */
/*   Updated: 2025/04/24 17:48:10 by dcastor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.test.h"

bool	test_is_alpha(char c)
{
	const bool	both_are_true = (ft_isalpha(c) && isalpha(c));
	const bool	both_are_false = (!ft_isalpha(c) && !isalpha(c));
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
	test_is_alpha('a');
	test_is_alpha('z');
	test_is_alpha('A');
	test_is_alpha('Z');
}

static void	tests_should_be_false(void)
{
	printf("\n\n===== should be false =====\n\n");
	test_is_alpha('0');
	test_is_alpha('9');
	test_is_alpha('\0');
	test_is_alpha((char)127);
}

void	tests_isalpha(void)
{
	printf("================= [isalpha] =================");
	tests_should_be_true();
	tests_should_be_false();
	printf("\n=============================================");
}
