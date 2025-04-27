/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_itoa.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcastor <dcastor@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/26 19:35:39 by dcastor           #+#    #+#             */
/*   Updated: 2025/04/27 16:59:38 by dcastor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_libft.h"

void	test_itoa(int nbr, char *expected, char *test_name)
{
	const char	*actual = ft_itoa(nbr);

	if (actual == NULL)
		return (test_failed(test_name));
	if (strcmp(expected, actual) != 0)
		return (free((void *)actual), test_failed(test_name));
	test_passed(test_name);
}

void	tests_itoa(void)
{
	printf("================= [itoa] =================\n\n");
	test_itoa(0, "0", "itoa zéro");
	test_itoa(42, "42", "itoa positif simple");
	test_itoa(-42, "-42", "itoa négatif simple");
	test_itoa(2147483647, "2147483647", "itoa INT_MAX");
	test_itoa(-2147483648, "-2147483648", "itoa INT_MIN");
	test_itoa(123456789, "123456789", "itoa grand positif");
	test_itoa(-123456789, "-123456789", "itoa grand négatif");
	test_itoa(1, "1", "itoa petit positif");
	test_itoa(-1, "-1", "itoa petit négatif");
	printf("\n=============================================\n");
}
