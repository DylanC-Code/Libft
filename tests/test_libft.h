/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_libft.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcastor <dcastor@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 15:59:48 by dcastor           #+#    #+#             */
/*   Updated: 2025/04/27 22:05:25 by dcastor          ###   ########.fr       */
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
# include <unistd.h>

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
void	tests_strrchr(void);
void	tests_strncmp(void);
void	tests_memchr(void);
void	tests_memcmp(void);
void	tests_strnstr(void);
void	tests_atoi(void);
void	tests_calloc(void);
void	tests_strdup(void);
void	tests_substr(void);
void	tests_strjoin(void);
void	tests_strtrim(void);
void	tests_split(void);
void	tests_itoa(void);
void	tests_strmapi(void);
void	tests_striteri(void);
void	tests_putchar_fd(void);
void	tests_putstr_fd(void);
void	tests_putendl_fd(void);
void	tests_putnbr_fd(void);

#endif
