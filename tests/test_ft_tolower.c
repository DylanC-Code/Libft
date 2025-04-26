/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_tolower.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcastor <dcastor@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/26 19:35:39 by dcastor           #+#    #+#             */
/*   Updated: 2025/04/26 19:44:20 by dcastor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_libft.h"

void	test_tolower(int c, char *test_name)
{
	const int	expected = tolower(c);
	const int	actual = ft_tolower(c);

	if (expected != actual)
		return (test_failed(test_name));
	test_passed(test_name);
}

void	tests_tolower(void)
{
	printf("================= [tolower] =================\n\n");
	test_tolower('a', "tolower('a')");
	test_tolower('z', "tolower('z')");
	test_tolower('A', "tolower('A')");
	test_tolower('Z', "tolower('Z')");
	test_tolower('0', "tolower('0')");
	test_tolower('9', "tolower('9')");
	test_tolower('!', "tolower('!')");
	test_tolower('`', "tolower('`')");
	test_tolower(0, "tolower(0)");
	test_tolower(127, "tolower(127)");
	test_tolower(31, "tolower(31)");
	// test_tolower(-42, "tolower(-42)"); //Undefined behavior
	printf("\n=============================================\n");
}
