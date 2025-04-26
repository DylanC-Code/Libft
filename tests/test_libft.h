/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_libft.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcastor <dcastor@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 15:59:48 by dcastor           #+#    #+#             */
/*   Updated: 2025/04/26 19:46:10 by dcastor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_TEST_H
# define LIBFT_TEST_H

# include "../libft.h"
# include "test_utils.h"
# include <bsd/string.h>
# include <ctype.h>
# include <stdio.h>
# include <string.h>
# include <strings.h>

void	tests_isalpha(void);
void	tests_isdigit(void);
void	tests_isalnum(void);
void	tests_isascii(void);
void	tests_isprint(void);
void	tests_strlen(void);
void	tests_memset(void);
void	tests_bzero(void);
void	tests_memcpy(void);
void	tests_memmove(void);
void	tests_strlcpy(void);
void	tests_strlcat(void);
void	tests_toupper(void);
void	tests_tolower(void);
void	tests_strchr(void);

#endif
