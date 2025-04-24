/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcastor <dcastor@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 17:49:07 by dcastor           #+#    #+#             */
/*   Updated: 2025/04/24 17:52:27 by dcastor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.test.h"

bool	test_isascii(char c)
{
	const bool	both_are_true = (ft_isascii(c) && isascii(c));
	const bool	both_are_false = (!ft_isascii(c) && !isascii(c));
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
	test_isascii('\0');
	test_isascii('!');
	test_isascii('?');
	test_isascii('Z');
	test_isascii((char)127);
}

static void	tests_should_be_false(void)
{
	printf("\n\n===== should be false =====\n\n");
	test_isascii((char)-4);
	test_isascii((char)-50);
	test_isascii((char)128);
}

void	tests_isascii(void)
{
	printf("================= [isascii] =================");
	tests_should_be_true();
	tests_should_be_false();
	printf("\n=============================================");
}
