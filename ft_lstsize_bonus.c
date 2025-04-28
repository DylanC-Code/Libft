/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcastor <dcastor@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/27 22:38:04 by dcastor           #+#    #+#             */
/*   Updated: 2025/04/28 10:02:19 by dcastor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_bonus.h"
#include "stdio.h"

int	ft_lstsize(t_list *lst)
{
	int		count;
	t_list	*actual;

	count = 0;
	actual = lst;
	while (actual)
	{
		count++;
		actual = actual->next;
	}
	return (count);
}
