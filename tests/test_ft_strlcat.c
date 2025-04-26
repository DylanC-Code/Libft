/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strlcat.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcastor <dcastor@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/26 17:59:44 by dcastor           #+#    #+#             */
/*   Updated: 2025/04/26 19:32:12 by dcastor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_libft.h"

void test_strlcat(char *dest, size_t dest_size, char *src, char *test_name)
{
    char expected_dest[dest_size];
    char actual_dest[dest_size];

    bzero(expected_dest, dest_size);
    bzero(actual_dest, dest_size);
    strlcpy(expected_dest, dest, dest_size);
    strlcpy(actual_dest, dest, dest_size);

    size_t expected_return = strlcat(expected_dest, src, dest_size);
    size_t actual_return = ft_strlcat(actual_dest, src, dest_size);

    if (expected_return != actual_return)
        return test_failed(test_name);
    size_t i = -1;
    while (++i < dest_size)
        if (expected_dest[i] != actual_dest[i])
            return test_failed(test_name);
    if (dest_size > 0 && (expected_dest[dest_size - 1] != '\0' || actual_dest[dest_size - 1] != '\0'))
        return test_failed(test_name);
    test_passed(test_name);
}

void tests_strlcat(void)
{
    printf("================= [strlcat] =================\n\n");

    test_strlcat("", 10, "World", "[strlcat] Empty dest + normal src (should copy src)");
    test_strlcat("Hello", 10, "", "[strlcat] Normal dest + empty src (nothing should change)");
    test_strlcat("Hello", 20, " World", "[strlcat] Normal dest + normal src (enough space, full concat)");
    test_strlcat("Hello", 8, " World", "[strlcat] Normal dest + normal src (small buffer, truncation expected)");
    test_strlcat("123456", 7, "ignored", "[strlcat] Dest completely full, src ignored");
    test_strlcat("", 0, "World", "[strlcat] Dest size = 0 (nothing happens)");
    test_strlcat("Hi", 6, " There", "[strlcat] Small dest + normal src (partial copy, null-terminated)");

    printf("\n=============================================\n");
}
