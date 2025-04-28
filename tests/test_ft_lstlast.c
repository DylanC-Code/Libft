/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_lstlast.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcastor <dcastor@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/26 19:35:39 by dcastor           #+#    #+#             */
/*   Updated: 2025/04/28 10:25:09 by dcastor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_libft.h"

static void	free_list(t_list *list)
{
	t_list	*actual;
	t_list	*next;

	actual = list;
	while (actual)
	{
		next = actual->next;
		free(actual);
		actual = next;
	}
}

static t_list	*create_list_of_n_el(unsigned char expected)
{
	t_list	*first;
	size_t	i;
	t_list	*new_el;

	if (!expected)
		return (NULL);
	first = ft_lstnew(NULL);
	if (!first)
		return (NULL);
	i = 1;
	while (i < expected)
	{
		new_el = ft_lstnew(NULL);
		if (!new_el)
			return (free_list(first), NULL);
		ft_lstadd_front(&first, new_el);
		i++;
	}
	return (first);
}

static void	test_lstlast(unsigned char lst_nbr, char *test_name)
{
	t_list	*lst;
	t_list	*last;

	lst = create_list_of_n_el(lst_nbr);
	last = ft_lstlast(lst);
	if (last == NULL && lst != NULL)
		test_failed(test_name);
	else
		test_passed(test_name);
	if (lst)
		free_list(lst);
}
void	tests_lstlast(void)
{
	printf("================= [lstlast] =================\n\n");
	test_lstlast(0, "Test 1: Empty list (lst_nbr = 0)");
	test_lstlast(1, "Test 2: Single element list (lst_nbr = 1)");
	test_lstlast(5, "Test 3: Multiple elements list (lst_nbr = 5)");
	test_lstlast(10, "Test 4: Larger list (lst_nbr = 10)");
	printf("\n=============================================\n");
}
