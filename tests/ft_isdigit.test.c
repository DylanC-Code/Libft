/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcastor <dcastor@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 16:05:29 by dcastor           #+#    #+#             */
/*   Updated: 2025/04/24 17:40:02 by dcastor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <ctype.h>
#include <stdio.h>

bool	test_is_digit(char c)
{
	const bool	both_are_true = (ft_isdigit(c) && isdigit(c));
	const bool	both_are_false = (!ft_isdigit(c) && !isdigit(c));
	const bool	is_ok = (both_are_false || both_are_true);

	if (is_ok)
		printf("%c is OK ✅\n", c);
	else
		printf("%c is not OK ❌\n", c);
	return (is_ok);
}

static void	tests_should_be_true(void)
{
	printf("\n\n===== should be true =====\n\n");
	test_is_digit('0');
	test_is_digit('5');
	test_is_digit('9');
}

static void	tests_should_be_false(void)
{
	printf("\n\n===== should be false =====\n\n");
	test_is_digit('a');
	test_is_digit('&');
	test_is_digit('>');
}

void	tests_isdigit(void)
{
	printf("\n================= [isdigit] =================");
	tests_should_be_true();
	tests_should_be_false();
	printf("\n=============================================\n");
}
