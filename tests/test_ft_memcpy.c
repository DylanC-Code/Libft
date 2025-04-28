/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_memcpy.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcastor <dcastor@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/25 15:19:07 by dcastor           #+#    #+#             */
/*   Updated: 2025/04/28 12:07:22 by dcastor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include "test_utils.h"

void test_memcpy(const char *src, size_t s, char *test_name)
{
    char expected[1000];
    char actual[1000];
    size_t i;

    const bool expected_return = memcpy(expected, src, s) == expected;
    const bool actual_return = ft_memcpy(actual, src, s) == actual;
    if (!expected_return || !actual_return)
        return (test_failed(test_name));
    i = 0;
    while (i < s)
    {
        if (expected[i] != src[i] || actual[i] != expected[i])
            return (test_failed(test_name));
        i++;
    }
    test_passed(test_name);
}

void tests_memcpy(void)
{
    printf("\n================= [memcpy] ==================\n\n");
    test_memcpy("Hello", 4, "[Hello] copy 4 bytes");
    test_memcpy("Hello", 0, "[Hello] copy 0 bytes");
    test_memcpy("Jambon Beurre", 14, "[Jambon Beurre] copy 14 bytes");
    test_memcpy("", 0, "[Empty string] copy 0 bytes");
    test_memcpy("42", 2, "[42] copy 2 bytes");
    test_memcpy("A very long string to test memcpy functionality", 40, "[Long string] copy 40 bytes");
    test_memcpy("Overlap test", 5, "[Overlap test] copy 5 bytes");
    test_memcpy("Special chars: \n\t\r", 20, "[Special chars] copy 20 bytes");
    test_memcpy("Null byte test\0hidden", 17, "[Null byte test] copy 17 bytes");
    test_memcpy("Boundary test", 12, "[Boundary test] copy 12 bytes");
    printf("\n=============================================\n");
}
