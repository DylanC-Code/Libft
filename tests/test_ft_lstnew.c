/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_lstnew.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcastor <dcastor@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/26 19:35:39 by dcastor           #+#    #+#             */
/*   Updated: 2025/04/27 22:46:24 by dcastor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_libft.h"

void	test_lstnew(char *content, char *test_name)
{
	t_list	*node;

	node = ft_lstnew(content);
	if (!node)
		return (test_failed(test_name));
	if (node->next != NULL || content != node->content)
		return (free((void *)node), test_failed(test_name));
	return (free((void *)node), test_passed(test_name));
}

void	tests_lstnew(void)
{
	printf("================= [lstnew] =================\n\n");
	test_lstnew("Hello, World!", "lstnew simple phrase");
	test_lstnew("", "lstnew chaîne vide");
	test_lstnew("42", "lstnew chiffre 42");
	test_lstnew(NULL, "lstnew NULL content");
	test_lstnew("abc", "lstnew petite string abc");
	test_lstnew("!@#$%^&*", "lstnew caractères spéciaux");
	printf("\n=============================================\n");
}
