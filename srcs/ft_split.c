/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bamrouch <bamrouch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 20:21:27 by bamrouch          #+#    #+#             */
/*   Updated: 2022/10/13 02:58:13 by bamrouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_is_seperator(char car, char sep)
{
	if (car == sep)
		return (1);
	return (0);
}

static char	**ft_calloc_splits(char const *s, char sep)
{
	size_t	count;
	size_t	i;

	count = 0;
	i = 0;
	while (s[i] != 0)
	{
		while (s[i] != 0 && ft_is_seperator(s[i], sep))
			i++;
		if (s[i] != 0)
			count++;
		while (s[i] != 0 && !ft_is_seperator(s[i], sep))
			i++;
	}
	return (ft_calloc(count + 1, sizeof(char *)));
}

static char	**ft_make_splits(char **splits, char const *s, char c)
{
	size_t	i;
	size_t	split_len;
	size_t	pos;
	size_t	temp;

	i = 0;
	pos = 0;
	while (s[i])
	{
		split_len = 0;
		while (s[i] && ft_is_seperator(s[i], c))
			i++;
		temp = i;
		while (s[i] && !ft_is_seperator(s[i], c))
		{
			i++;
			split_len++;
		}
		if (s[temp])
			splits[pos++] = ft_substr(s, temp, split_len);
	}
	return (splits);
}

char	**ft_split(char const *s, char c)
{
	char	**res;

	res = ft_calloc_splits(s, c);
	if (!res)
		return (NULL);
	res = ft_make_splits(res, s, c);
	return (res);
}
