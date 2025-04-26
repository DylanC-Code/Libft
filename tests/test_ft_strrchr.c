/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strrchr.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcastor <dcastor@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/26 19:35:39 by dcastor           #+#    #+#             */
/*   Updated: 2025/04/26 19:55:14 by dcastor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_libft.h"

void	test_strrchr(int c, char *test_name)
{
	const char	*s = "Hello, World!";
	const char	*expected = strrchr(s, c);
	const char	*actual = ft_strrchr(s, c);

	if (expected != actual)
		return (test_failed(test_name));
	test_passed(test_name);
}

void	tests_strrchr(void)
{
	printf("================= [strrchr] =================\n\n");
	test_strrchr('l', "strrchr('l')");
	test_strrchr('o', "strrchr('o')");
	test_strrchr('H', "strrchr('H')");
	test_strrchr(',', "strrchr(',')");
	test_strrchr('!', "strrchr('!')");
	test_strrchr('\0', "strrchr('\\0')");
	test_strrchr('x', "strrchr('x')");
	test_strrchr('1', "strrchr('1')");
	test_strrchr(127, "strrchr(127)");
	test_strrchr(0, "strrchr(0)");
	printf("\n=============================================\n");
}
