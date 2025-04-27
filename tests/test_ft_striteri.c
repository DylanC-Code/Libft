/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_striteri.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcastor <dcastor@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/26 19:35:39 by dcastor           #+#    #+#             */
/*   Updated: 2025/04/27 21:18:11 by dcastor          ###   ########.fr       */
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
	printf("================= [striteri] =================\n\n");
	test_striteri("abcd", "badc", "striteri simple abcd");
	test_striteri("1234", "2143", "striteri chiffres 1234");
	test_striteri("A", "B", "striteri une majuscule seule");
	test_striteri("", "", "striteri chaîne vide");
	test_striteri("XyZ", "Yx[", "striteri mix lettres XyZ");
	printf("\n=============================================\n");
}
