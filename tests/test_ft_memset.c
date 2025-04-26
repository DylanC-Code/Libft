/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_memset.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcastor <dcastor@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/25 13:40:34 by dcastor           #+#    #+#             */
/*   Updated: 2025/04/26 13:49:46 by dcastor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include "test_utils.h"

static void test_memset(char c, size_t n, char *test_name)
{
    char expected[10] = {};
    char actual[10] = {};
    const bool expected_return = memset(expected, c, n) == expected;
    const bool actual_return = ft_memset(actual, c, n) == actual;
    size_t i;

    i = 0;
    if (!expected_return || !actual_return)
        return (test_failed(test_name));
    while (i < n)
    {
        if (expected[i] != actual[i])
            return (test_failed(test_name));
        i++;
    }
    test_passed(test_name);
}

/*static void	test_memset_segfault(void *s)
{
    memset(s, 'c', 4);
    ft_memset(s, 'c', 4);
}*/
static void tests_should_pass(void)
{
    test_memset('c', 5, "memset with 'c' for 5 bytes");
    test_memset('\0', 3, "memset with '0' for 3 bytes");
    test_memset('&', 7, "memset with '&' for 7 bytes");
    test_memset('e', 0, "memset with 'e' for 0 bytes");
}

void tests_memset(void)
{
    printf("================= [memset] ==================\n\n");
    tests_should_pass();
    /*test_memset_segfault((void *)NULL);*/
    printf("\n=============================================\n");
}
