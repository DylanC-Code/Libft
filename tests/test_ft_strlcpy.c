/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strlcpy.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcastor <dcastor@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/26 14:53:53 by dcastor           #+#    #+#             */
/*   Updated: 2025/04/26 15:33:45 by dcastor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_libft.h"

void test_strlcpy(char *src, size_t len, char *test_name)
{
    char expected[len];
    char actual[len];
    const bool expected_return = strlcpy(expected, src, len) == strlen(src);
    const bool actual_return = ft_strlcpy(actual, src, len) == strlen(src);

    if (!expected_return || !actual_return)
        return (test_failed(test_name));
    size_t i = -1;
    while (++i < len)
        if (expected[i] != actual[i])
            return (test_failed(test_name));
    test_passed(test_name);
}

void tests_strlcpy(void)
{
    printf("================= [strlcpy] =================\n\n");
    test_strlcpy("Hello World!", 10, "[strlcpy] Copy 'Hello World!' into size 10 buffer");
    test_strlcpy("", 10, "[strlcpy] Copy empty string into size 10 buffer");
    test_strlcpy("Short", 0, "[strlcpy] Copy 'Short' into size 0 buffer (should do nothing)");
    test_strlcpy("Fit", 4, "[strlcpy] Copy 'Fit' into size 4 buffer (perfect fit)");
    test_strlcpy("TruncateMe", 5, "[strlcpy] Copy 'TruncateMe' into size 5 buffer (truncation expected)");
    test_strlcpy("Exact", 6, "[strlcpy] Copy 'Exact' into size 6 buffer (exact + '\\0')");
    printf("\n=============================================\n");
}
