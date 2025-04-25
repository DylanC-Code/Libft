/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.test.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcastor <dcastor@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 15:59:48 by dcastor           #+#    #+#             */
/*   Updated: 2025/04/25 15:19:35 by dcastor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_TEST_H
# define LIBFT_TEST_H

# include "../libft.h"
# include "test_utils.h"
# include <ctype.h>
# include <stdio.h>

void	tests_isalpha(void);
void	tests_isdigit(void);
void	tests_isalnum(void);
void	tests_isascii(void);
void	tests_isprint(void);
void	tests_strlen(void);
void	tests_memset(void);
void	tests_bzero(void);
void	tests_memcpy(void);

#endif
