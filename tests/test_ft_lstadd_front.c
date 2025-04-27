/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_lstadd_front.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcastor <dcastor@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/26 19:35:39 by dcastor           #+#    #+#             */
/*   Updated: 2025/04/27 22:57:03 by dcastor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_libft.h"

static void	test_lstadd_front(char *first_content, char *new_content,
		char *test_name)
{
	t_list	*first;
	t_list	*new_node;

	first = ft_lstnew(first_content);
	new_node = ft_lstnew(new_content);
	ft_lstadd_front(&first, new_node);
	if (first != new_node)
		return (free(new_node), free(first), test_failed(test_name));
	if (new_node->next->content != first_content)
		return (free(first), free(new_node), test_failed(test_name));
	(free(first->next), free(first), test_passed(test_name));
}
void	tests_lstadd_front(void)
{
	printf("================= [lstadd_front] =================\n\n");
	test_lstadd_front("First", "NewFirst", "lstadd_front simple");
	test_lstadd_front("", "New", "lstadd_front avec premier vide");
	test_lstadd_front("42", "", "lstadd_front avec nouveau vide");
	test_lstadd_front(NULL, "New", "lstadd_front ancien NULL content");
	test_lstadd_front("Old", NULL, "lstadd_front new NULL content");
	printf("\n=============================================\n");
}
