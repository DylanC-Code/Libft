/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_utils.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcastor <dcastor@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/25 09:25:01 by dcastor           #+#    #+#             */
/*   Updated: 2025/04/25 09:47:09 by dcastor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TEST_UTILS_H
# define TEST_UTILS_H

void	assert_int_equal(int actual, int expected, const char *test_name);
void	assert_str_equal(const char *actual, const char *expected,
			const char *test_name);
void	assert_truthy_equal(int actual, int expected, const char *test_name);
void	assert_falsy_equal(int actual, int expected, const char *test_name);
void	print_summary(void);

#endif
