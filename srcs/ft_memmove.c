/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bamrouch <bamrouch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 00:42:22 by bamrouch          #+#    #+#             */
/*   Updated: 2022/10/14 23:49:15 by bamrouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*dest;
	char	*source;

	if (dst == NULL)
		return (NULL);
	dest = (char *)dst;
	source = (char *)src;
	if (dest > source)
		while (len-- > 0)
			dest[len] = source[len];
	else
		ft_memcpy(dst, src, len);
	return (dst);
}
