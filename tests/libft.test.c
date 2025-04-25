/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.test.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcastor <dcastor@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 16:02:07 by dcastor           #+#    #+#             */
/*   Updated: 2025/04/25 13:40:26 by dcastor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.test.h"

int	main(void)
{
	tests_isalpha();
	tests_isdigit();
	tests_isalnum();
	tests_isascii();
	tests_isprint();
	tests_strlen();
	tests_memset();
	print_summary();
	return (0);
}
