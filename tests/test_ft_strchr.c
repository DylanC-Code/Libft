/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strchr.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcastor <dcastor@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/26 19:35:39 by dcastor           #+#    #+#             */
/*   Updated: 2025/04/26 19:55:14 by dcastor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_libft.h"

void	test_strchr(int c, char *test_name)
{
	const char	*s = "Hello, World!";
	const char	*expected = strchr(s, c);
	const char	*actual = ft_strchr(s, c);

	if (expected != actual)
		return (test_failed(test_name));
	test_passed(test_name);
}

void	tests_strchr(void)
{
	printf("================= [strchr] =================\n\n");
	test_strchr('H', "strchr('H')");
	test_strchr('W', "strchr('W')");
	test_strchr('o', "strchr('o')");
	test_strchr(',', "strchr(',')");
	test_strchr('!', "strchr('!')");
	test_strchr('\0', "strchr('\\0')");
	test_strchr('x', "strchr('x')");
	test_strchr('1', "strchr('1')");
	test_strchr(127, "strchr(127)");
	test_strchr(0, "strchr(0)");
	printf("\n=============================================\n");
}
