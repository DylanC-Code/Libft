/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsome.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcastor <dcastor@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/10 13:41:36 by dcastor           #+#    #+#             */
/*   Updated: 2025/05/22 12:21:20 by dcastor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "list.h"

bool	ft_lstsome(t_list *head, bool (*f)(t_list *))
{
	while (head)
	{
		if (f(head))
			return (true);
		head = head->next;
	}
	return (false);
}
