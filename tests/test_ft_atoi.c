/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_atoi.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcastor <dcastor@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/26 19:35:39 by dcastor           #+#    #+#             */
/*   Updated: 2025/04/26 22:47:37 by dcastor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_libft.h"

void	test_atoi(char *nbr, char *test_name)
{
	const int	expected = atoi(nbr);
	const int	actual = ft_atoi(nbr);

	if (expected != actual)
		return (test_failed(test_name));
	test_passed(test_name);
}

void	tests_atoi(void)
{
	printf("================= [atoi] =================\n\n");
	test_atoi("0", "Zero");
	test_atoi("42", "Positive number");
	test_atoi("-42", "Negative number");
	test_atoi("+42", "Positive number with plus");
	test_atoi("2147483647", "Max int");
	test_atoi("-2147483648", "Min int");
	test_atoi("2147483648", "Overflow positive");
	test_atoi("-2147483649", "Overflow negative");
	test_atoi("    123", "Leading spaces");
	test_atoi("\t\n\v\f\r 456", "Leading whitespace chars");
	test_atoi("  +789", "Spaces and plus");
	test_atoi("  -987", "Spaces and minus");
	test_atoi("--42", "Double minus");
	test_atoi("++42", "Double plus");
	test_atoi("4a2", "Digits then letters");
	test_atoi("  -0012a42", "Spaces, zeros and letters");
	test_atoi("", "Empty string");
	test_atoi("   ", "Only spaces");
	test_atoi("   +0", "Spaces and zero with plus");
	test_atoi("00000123", "Leading zeros");
	test_atoi("-00000123", "Negative with leading zeros");
	printf("\n=============================================\n");
}
