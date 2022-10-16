/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bamrouch <bamrouch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 01:46:34 by bamrouch          #+#    #+#             */
/*   Updated: 2022/10/13 02:41:41 by bamrouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_trim_front(char const *s1, char const *set)
{
	size_t	front_skip;
	size_t	i;

	front_skip = 0;
	while (s1[front_skip])
	{
		i = 0;
		while (set[i] && set[i] != s1[front_skip])
			i++;
		if (!set[i])
			break ;
		front_skip++;
	}
	return (front_skip);
}

static size_t	ft_trim_end(char const *s1, char const *set, size_t front_skip)
{
	size_t	end_skip;
	size_t	i;

	end_skip = ft_strlen(s1) - 1;
	while (end_skip > front_skip)
	{
		i = 0;
		while (set[i] && set[i] != s1[end_skip])
			i++;
		if (!set[i])
			break ;
		end_skip--;
	}
	return (end_skip);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	front_trim;
	size_t	end_trim;

	front_trim = ft_trim_front(s1, set);
	end_trim = ft_trim_end(s1, set, front_trim);
	return (ft_substr(s1, front_trim, end_trim - front_trim + 1));
}