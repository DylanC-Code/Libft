/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_putendl_fd.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcastor <dcastor@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/26 19:35:39 by dcastor           #+#    #+#             */
/*   Updated: 2025/04/27 21:56:57 by dcastor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_libft.h"

static void	test_putendl_fd_pipe(char *str, char *test_name)
{
	const size_t	len = strlen(str);
	int				pipefd[2];
	char			buffer[len + 2];
	ssize_t			bytes_read;

	if (pipe(pipefd) == -1)
		return (test_failed(test_name));
	ft_putendl_fd(str, pipefd[1]);
	close(pipefd[1]);
	bytes_read = read(pipefd[0], buffer, len + 1);
	close(pipefd[0]);
	buffer[bytes_read] = '\0';
	if (bytes_read < 0 || strncmp(buffer, str, len) != 0 || buffer[len] != '\n')
		return (test_failed(test_name));
	else
		test_passed(test_name);
}

void	tests_putendl_fd(void)
{
	printf("================= [putendl_fd] =================\n\n");
	test_putendl_fd_pipe("Hello", "putendl_fd simple Hello");
	test_putendl_fd_pipe("", "putendl_fd chaîne vide");
	test_putendl_fd_pipe("42", "putendl_fd chiffre 42");
	test_putendl_fd_pipe("newline test", "putendl_fd phrase normale");
	test_putendl_fd_pipe("!@#$", "putendl_fd caractères spéciaux");
	printf("\n=============================================\n");
}
