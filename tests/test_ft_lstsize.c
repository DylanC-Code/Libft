/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_lstsize.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcastor <dcastor@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/26 19:35:39 by dcastor           #+#    #+#             */
/*   Updated: 2025/04/28 10:04:04 by dcastor          ###   ########.fr       */
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

static void	test_lstsize(unsigned char expected, char *test_name)
{
	t_list	*list;
	int		actual;

	list = create_list_of_n_el(expected);
	actual = ft_lstsize(list);
	// printf("E:  %d, A: %d \n", expected, actual);
	if (actual != expected)
		(test_failed(test_name));
	else
		(test_passed(test_name));
	if (list)
		free_list(list);
}

void	tests_lstsize(void)
{
	printf("================= [lstsize] =================\n\n");
	test_lstsize(0, "Test with 0 elements");
	test_lstsize(1, "Test with 1 element");
	test_lstsize(5, "Test with 5 elements");
	test_lstsize(10, "Test with 10 elements");
	test_lstsize(50, "Test with 50 elements");
	printf("\n=============================================\n");
}
