/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcastor <dcastor@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/27 22:38:04 by dcastor           #+#    #+#             */
/*   Updated: 2025/04/28 11:54:06 by dcastor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_bonus.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*first;
	t_list	*actual;
	t_list	*next;
	void	*content;

	if (!lst)
		return (NULL);
	content = f(lst->content);
	if (!content)
		return (NULL);
	first = ft_lstnew(content);
	if (!first)
		return (del(content), NULL);
	first->next = lst->next;
	actual = first->next;
	while (actual)
	{
		content = f(actual->content);
		next = ft_lstnew(content);
		ft_lstadd_back(&first, next);
		actual = actual->next;
		if (!content || !next)
			return (ft_lstclear(&first, del), NULL);
	}
	return (first);
}
