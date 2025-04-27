/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_putstr_fd.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcastor <dcastor@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/26 19:35:39 by dcastor           #+#    #+#             */
/*   Updated: 2025/04/27 21:54:18 by dcastor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_libft.h"

static void	test_putstr_fd_pipe(char *str, char *test_name)
{
	const size_t	len = strlen(str);
	int				pipefd[2];
	char			buffer[len + 1];
	ssize_t			bytes_read;

	if (pipe(pipefd) == -1)
		return (test_failed(test_name));
	ft_putstr_fd(str, pipefd[1]);
	close(pipefd[1]);
	bytes_read = read(pipefd[0], buffer, len);
	close(pipefd[0]);
	buffer[bytes_read] = '\0';
	if (bytes_read < 0 || (size_t)bytes_read != len || strcmp(buffer, str) != 0)
		return (test_failed(test_name));
	else
		test_passed(test_name);
}

void	tests_putstr_fd(void)
{
	printf("================= [putstr_fd] =================\n\n");
	test_putstr_fd_pipe("Hello, world!", "putstr_fd phrase simple");
	test_putstr_fd_pipe("", "putstr_fd chaîne vide");
	test_putstr_fd_pipe("42", "putstr_fd chiffres");
	test_putstr_fd_pipe("Test\nNewLine", "putstr_fd avec saut de ligne");
	test_putstr_fd_pipe("!@#$%^&*()", "putstr_fd caractères spéciaux");
	test_putstr_fd_pipe("abcdefghijklmnopqrstuvwxyz",
		"putstr_fd alphabet minuscule");
	test_putstr_fd_pipe("ABCDEFGHIJKLMNOPQRSTUVWXYZ",
		"putstr_fd alphabet majuscule");
	printf("\n=============================================\n");
}
