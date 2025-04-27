/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_striteri.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcastor <dcastor@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/26 19:35:39 by dcastor           #+#    #+#             */
/*   Updated: 2025/04/27 21:25:42 by dcastor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_libft.h"

void	striteri_f(unsigned int i, char *c)
{
	if (i % 2 == 0)
		*c = *c + 1;
	else
		*c = *c - 1;
}

void	test_striteri(char *str, char *expected, char *test_name)
{
	ft_striteri(str, striteri_f);
	if (strcmp(str, expected) != 0)
		test_failed(test_name);
	else
		test_passed(test_name);
}

void	tests_striteri(void)
{
	char	str1[] = "abcd";
	char	str2[] = "1234";
	char	str3[] = "!@#$";
	char	str4[] = "A";
	char	str5[] = "";
	char	str6[] = "XyZ";

	printf("================= [striteri] =================\n\n");
	test_striteri(str1, "badc", "striteri simple abcd");
	test_striteri(str2, "2143", "striteri chiffres 1234");
	test_striteri(str3, "\"?$#", "striteri symboles !@#$");
	test_striteri(str4, "B", "striteri une majuscule seule");
	test_striteri(str5, "", "striteri chaîne vide");
	test_striteri(str6, "Yx[", "striteri mix lettres XyZ");
	printf("\n=============================================\n");
}
