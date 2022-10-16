/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bamrouch <bamrouch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 23:16:29 by bamrouch          #+#    #+#             */
/*   Updated: 2022/10/16 01:46:36 by bamrouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *restrict dst, const void *restrict src, size_t n)
{
	char	*c_dst;
	char	*c_src;
	size_t	i;

	if (!dst && !src && n)
		return (dst);
	c_dst = (char *)dst;
	c_src = (char *)src;
	i = 0;
	while (i < n)
	{
		c_dst[i] = c_src[i];
		i++;
	}
	return (dst);
}
