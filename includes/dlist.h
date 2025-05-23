/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dlist.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcastor <dcastor@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/18 20:11:44 by dcastor           #+#    #+#             */
/*   Updated: 2025/05/22 11:54:08 by dcastor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DLIST_H
# define DLIST_H

#include "libft.h"

t_dlist				*ft_dlst_new(void *content);
void				ft_dlstadd_back(t_dlist **p_head, t_dlist *new);

#endif
