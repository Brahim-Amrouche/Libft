/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bamrouch <bamrouch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 00:42:22 by bamrouch          #+#    #+#             */
/*   Updated: 2022/10/11 13:53:57 by bamrouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memmove(void *dst,const void *src,size_t len)
{
    size_t i;
    char temp[len];
    i = 0;
    while ( i < len )
    {
        temp[i] = ((char *) src)[i];
        i++;
    }    
    i = 0;
    while (i < len)
    {   
        ((char *) dst)[i] = temp[i];
        i++;
    }
    return dst;
}
