/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_putchar_fd.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcastor <dcastor@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/26 19:35:39 by dcastor           #+#    #+#             */
/*   Updated: 2025/04/27 21:39:33 by dcastor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_libft.h"
#include <unistd.h>

static void	test_putchar_fd_pipe(char c, char *test_name)
{
	int		pipefd[2];
	char	buffer[2];
	ssize_t	bytes_read;

	if (pipe(pipefd) == -1)
		return (test_failed(test_name));
	ft_putchar_fd(c, pipefd[1]);
	close(pipefd[1]);
	bytes_read = read(pipefd[0], buffer, 1);
	close(pipefd[0]);
	buffer[bytes_read] = '\0';
	if (bytes_read != 1 || buffer[0] != c)
		test_failed(test_name);
	else
		test_passed(test_name);
}

void	tests_putchar_fd(void)
{
	printf("================= [putchar_fd] =================\n\n");
	test_putchar_fd_pipe('A', "putchar_fd A simple");
	test_putchar_fd_pipe('z', "putchar_fd z simple");
	test_putchar_fd_pipe('0', "putchar_fd chiffre 0");
	test_putchar_fd_pipe('\n', "putchar_fd retour ligne");
	printf("\n=============================================\n");
}
