/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bit.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcastor <dcastor@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/11 15:20:08 by dcastor           #+#    #+#             */
/*   Updated: 2025/05/16 17:57:05 by dcastor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BIT_H
# define BIT_H

# include "libft.h"

bool		bit_is_set(__uint32_t value, __uint8_t bit_index);
__uint32_t	set_bit(__uint32_t value, __uint8_t bit_index);

#endif
