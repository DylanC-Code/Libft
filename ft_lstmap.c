/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcastor <dcastor@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/27 22:38:04 by dcastor           #+#    #+#             */
/*   Updated: 2025/04/28 15:37:27 by dcastor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*first;
	t_list	*next;
	void	*content;

	if (!lst)
		return (NULL);
	content = f(lst->content);
	first = ft_lstnew(content);
	if (!first)
		return (del(content), NULL);
	lst = lst->next;
	while (lst)
	{
		content = f(lst->content);
		next = ft_lstnew(content);
		ft_lstadd_back(&first, next);
		lst = lst->next;
		if (!next || !content)
			return (ft_lstclear(&first, del), NULL);
	}
	return (first);
}
