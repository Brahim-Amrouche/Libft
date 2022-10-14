/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bamrouch <bamrouch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 20:21:27 by bamrouch          #+#    #+#             */
/*   Updated: 2022/10/14 22:10:53 by bamrouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	**ft_calloc_splits(char const *s, char sep)
{
	size_t	count;
	size_t	i;

	count = 0;
	i = 0;
	while (s[i] != 0)
	{
		while (s[i] && s[i] == sep)
			i++;
		if (s[i])
			count++;
		while (s[i] && s[i] != sep)
			i++;
	}
	return (ft_calloc(count + 1, sizeof(char *)));
}

static void	ft_free_splits(char **splits)
{
	size_t	i;

	i = -1;
	while (splits[++i])
		free(splits[i]);
	free(splits);
}

static size_t	ft_make_splits(char **splits, char const *s, char sep)
{
	size_t	split_size;
	size_t	split_pos;

	split_size = 0;
	split_pos = -1;
	while (s[split_size] && s[split_size] != sep)
		split_size++;
	while (splits[++split_pos])
		;
	splits[split_pos] = ft_substr(s, 0, split_size);
	return (split_size);
}

char	**ft_split(char const *s, char c)
{
	char	**res;
	size_t	i;

	res = ft_calloc_splits(s, c);
	if (!res)
		return (NULL);
	i = 0;
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		if (s[i])
			i += ft_make_splits(res, (s + i), c);
		if (errno == ENOMEM)
		{
			ft_free_splits(res);
			return (NULL);
		}
	}
	return (res);
}
