/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_toupper.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcastor <dcastor@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/26 19:35:39 by dcastor           #+#    #+#             */
/*   Updated: 2025/04/26 19:42:52 by dcastor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_libft.h"

void	test_toupper(int c, char *test_name)
{
	const int	expected = toupper(c);
	const int	actual = ft_toupper(c);

	if (expected != actual)
		return (test_failed(test_name));
	test_passed(test_name);
}

void	tests_toupper(void)
{
	printf("================= [toupper] =================\n\n");
	test_toupper('a', "toupper('a')");
	test_toupper('z', "toupper('z')");
	test_toupper('A', "toupper('A')");
	test_toupper('Z', "toupper('Z')");
	test_toupper('0', "toupper('0')");
	test_toupper('9', "toupper('9')");
	test_toupper('!', "toupper('!')");
	test_toupper('`', "toupper('`')");
	test_toupper(0, "toupper(0)");
	test_toupper(127, "toupper(127)");
	test_toupper(31, "toupper(31)");
	// test_toupper(-42, "toupper(-42)"); //Undefined behavior
	printf("\n=============================================\n");
}
