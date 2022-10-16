/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bamrouch <bamrouch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 16:59:41 by bamrouch          #+#    #+#             */
/*   Updated: 2022/10/13 01:55:19 by bamrouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	size_t	i;
	char	*res;

	res = (char *)malloc(count * size);
	if (!res)
	{
		errno = ENOMEM;
		return (NULL);
	}
	i = 0;
	while (i < count * size)
		res[i++] = '\0';
	return (res);
}