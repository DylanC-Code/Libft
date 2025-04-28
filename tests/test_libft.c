/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_libft.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcastor <dcastor@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 16:02:07 by dcastor           #+#    #+#             */
/*   Updated: 2025/04/28 13:16:03 by dcastor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_libft.h"

int	main(void)
{
	tests_isalpha();
	tests_isdigit();
	tests_isalnum();
	tests_isascii();
	tests_isprint();
	tests_strlen();
	tests_memset();
	tests_bzero();
	tests_memcpy();
	tests_memmove();
	tests_strlcpy();
	tests_strlcat();
	tests_toupper();
	tests_tolower();
	tests_strchr();
	tests_strrchr();
	tests_strncmp();
	tests_memchr();
	tests_memcmp();
	// tests_strnstr();
	// tests_atoi();
	// tests_calloc();
	// tests_strdup();
	// tests_substr();
	// tests_strjoin();
	// tests_strtrim();
	// tests_split();
	// tests_itoa();
	// tests_strmapi();
	// tests_striteri();
	// tests_putchar_fd();
	// tests_putstr_fd();
	// tests_putendl_fd();
	// tests_putnbr_fd();
	// tests_lstnew();
	// tests_lstadd_front();
	// tests_lstsize();
	// tests_lstlast();
	print_summary();
	return (0);
}
