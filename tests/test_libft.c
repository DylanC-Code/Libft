/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_libft.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcastor <dcastor@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 16:02:07 by dcastor           #+#    #+#             */
/*   Updated: 2025/04/26 19:46:04 by dcastor          ###   ########.fr       */
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
	print_summary();
	return (0);
}
