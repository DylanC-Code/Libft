/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcastor <dcastor@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/27 11:09:04 by dcastor           #+#    #+#             */
/*   Updated: 2025/04/27 12:38:53 by dcastor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static unsigned int	count_words(const char *str, char delimiter)
{
	bool			in_word;
	unsigned int	count;
	size_t			i;

	in_word = false;
	count = 0;
	i = -1;
	while (str[++i])
	{
		if (str[i] == delimiter)
			in_word = false;
		else if (in_word == false)
		{
			in_word = true;
			count++;
		}
	}
	return (count);
}

static size_t	word_len(char *str, char delimiter)
{
	size_t	i;

	i = -1;
	while (str[++i])
		if (str[i] == delimiter)
			return (i);
	return (i);
}

static char	*ft_strndup(char *s, size_t n)
{
	size_t	i;
	char	*res;

	i = -1;
	res = malloc(n + 1);
	if (res == NULL)
		return (NULL);
	while (++i < n)
		res[i] = s[i];
	res[i] = '\0';
	return (res);
}

static void	free_strs(char **strs)
{
	size_t	i;

	i = -1;
	while (strs && strs[++i])
		free(strs[i]);
	if (strs)
		free(strs);
}

char	**ft_split(char const *s, char c)
{
	const unsigned int	words_nbs = count_words(s, c);
	char				*src;
	char				**strs;
	size_t				i_str;
	size_t				i;
	size_t				len;

	src = (char *)s;
	strs = malloc(sizeof(char *) * (words_nbs + 1));
	if (strs == NULL)
		return (NULL);
	i_str = 0;
	i = 0;
	while (src[i])
	{
		while (src[i] == c)
			i++;
		if (!src[i])
			break ;
		len = word_len(src + i, c);
		strs[i_str] = ft_strndup(src + i, len);
		if (strs[i_str] == NULL)
			return (free_strs(strs), NULL);
		i += len;
		i_str++;
	}
	strs[i_str] = NULL;
	return (strs);
}
