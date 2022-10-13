/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bamrouch <bamrouch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 17:46:59 by bamrouch          #+#    #+#             */
/*   Updated: 2022/10/13 02:57:53 by bamrouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_no_ternary(size_t j)
{
	if (j)
		return (j);
	return (1);
}

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;
	char	*res;

	i = 0;
	j = 0;
	if (*(needle) == 0)
		return ((char *)haystack);
	while (*(haystack + i) && (i + j) < len)
	{
		if (*(needle + j) && *(haystack + i + j) == *(needle + j))
		{
			if (j == 0)
				res = (char *)haystack + i;
			j++;
		}
		else if (*(needle + j) == 0)
			return (res);
		else
		{
			i += ft_no_ternary(j);
			j = 0;
		}
	}
	return (NULL);
}
