/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_putnbr_fd.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcastor <dcastor@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/26 19:35:39 by dcastor           #+#    #+#             */
/*   Updated: 2025/04/27 22:11:44 by dcastor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_libft.h"

static void	test_putnbr_fd_pipe(int nbr, char *expected, char *test_name)
{
	int		pipefd[2];
	char	buffer[13];
	ssize_t	bytes_read;

	if (pipe(pipefd) == -1)
		return (test_failed(test_name));
	ft_putnbr_fd(nbr, pipefd[1]);
	close(pipefd[1]);
	bytes_read = read(pipefd[0], buffer, 13);
	close(pipefd[0]);
	if (bytes_read < 0)
		return (test_failed(test_name));
	buffer[bytes_read] = '\0';
	if (strcmp(buffer, expected) != 0)
		return (test_failed(test_name));
	test_passed(test_name);
}

void	tests_putnbr_fd(void)
{
	printf("================= [putnbr_fd] =================\n\n");
	test_putnbr_fd_pipe(0, "0", "putnbr_fd zéro");
	test_putnbr_fd_pipe(42, "42", "putnbr_fd positif simple");
	test_putnbr_fd_pipe(-42, "-42", "putnbr_fd négatif simple");
	test_putnbr_fd_pipe(123456789, "123456789", "putnbr_fd grand positif");
	test_putnbr_fd_pipe(-123456789, "-123456789", "putnbr_fd grand négatif");
	test_putnbr_fd_pipe(2147483647, "2147483647", "putnbr_fd INT_MAX");
	test_putnbr_fd_pipe(-2147483648, "-2147483648", "putnbr_fd INT_MIN");
	test_putnbr_fd_pipe(1, "1", "putnbr_fd petit positif");
	test_putnbr_fd_pipe(-1, "-1", "putnbr_fd petit négatif");
	printf("\n=============================================\n");
}
