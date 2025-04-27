/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strmapi.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcastor <dcastor@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/26 19:35:39 by dcastor           #+#    #+#             */
/*   Updated: 2025/04/27 17:12:42 by dcastor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_libft.h"

static char	strmapi_f(unsigned int i, char c)
{
	if (i % 2 == 0)
		return (c + 1);
	else
		return (c - 1);
}

static void	test_strmapi(char *str, char *expected, char *test_name)
{
	const char	*actual = ft_strmapi(str, strmapi_f);

	if (!actual)
		return (test_failed(test_name));
	if (strcmp(actual, expected) != 0)
		return (free((void *)actual), test_failed(test_name));
	(free((void *)actual), test_passed(test_name));
}

void	tests_strmapi(void)
{
	printf("================= [strmapi] =================\n\n");
	test_strmapi("abcd", "badc", "strmapi simple abcd");
	test_strmapi("1234", "2143", "strmapi chiffres 1234");
	test_strmapi("!@#$", "\"?%\"", "strmapi symboles !@#$");
	test_strmapi("A", "B", "strmapi une majuscule seule");
	test_strmapi("", "", "strmapi chaîne vide");
	test_strmapi("XyZ", "Yx[", "strmapi mix lettres XyZ");
	printf("\n=============================================\n");
}
