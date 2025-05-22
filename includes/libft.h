/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcastor <dcastor@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 16:13:30 by dcastor           #+#    #+#             */
/*   Updated: 2025/05/22 14:37:16 by dcastor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42
# endif

/* Range */
# ifndef INT_MAX
#  define INT_MAX 2147483647
# endif
# ifndef INT_MIN
#  define INT_MIN -2147483648
# endif

/* Status */
typedef int			t_status;

# define ERROR 0
# define NOOP -1
# define SUCCESS 1

/* Bool */
typedef int			bool;

# ifndef true
#  define true 1
# endif
# ifndef false
#  define false 0
# endif

/* Double linked list */
typedef struct s_dlist
{
	void			*content;
	struct s_dlist	*next;
	struct s_dlist	*prev;
}					t_dlist;

# include "bit.h"
# include "char.h"
# include "dlist.h"
# include "int.h"
# include "list.h"
# include "mem.h"
# include "number.h"
# include "output.h"
# include "strs.h"
# include "utils.h"
# include "validate.h"

#endif
