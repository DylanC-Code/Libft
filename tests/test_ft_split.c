/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_split.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcastor <dcastor@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/26 19:35:39 by dcastor           #+#    #+#             */
/*   Updated: 2025/04/26 19:42:52 by dcastor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_libft.h"

void	free_strs(char **strs)
{
	size_t	i;

	i = -1;
	while (strs && strs[++i])
		free(strs[i]);
	if (strs)
		free(strs);
}

void	test_split(char *str, char c, unsigned int expected, char *test_name)
{
	char	**actuals;
	size_t	i;

	actuals = ft_split(str, c);
	i = -1;
	if (actuals == NULL)
		return (test_failed(test_name));
	while (actuals[++i])
		if (ft_haschar(actuals[i], c))
			return (free_strs(actuals), test_failed(test_name));
	if (i != expected)
		return (free_strs(actuals), test_failed(test_name));
	(free_strs(actuals), test_passed(test_name));
}

void	tests_split(void)
{
	printf("================= [split] =================\n\n");
	test_split("hello world", ' ', 2, "split simple phrase");
	test_split("42network", ' ', 1, "split sans séparateur");
	test_split("a:b:c:d", ':', 4, "split avec séparateur :");
	test_split(",,one,,two,,three", ',', 3, "split double virgule");
	test_split("", ' ', 0, "split chaine vide");
	test_split("onlydelimiters", 'x', 1, "split sans trouver séparateur");
	test_split("start middle end ", ' ', 3, "split avec espace final");
	test_split("  spaces  at start", ' ', 3, "split avec espaces début");
	test_split("multiple      spaces", ' ', 2, "split multiples espaces");
	test_split("::split::colons::", ':', 2, "split avec colons et bords");
	printf("\n=============================================\n");
}
