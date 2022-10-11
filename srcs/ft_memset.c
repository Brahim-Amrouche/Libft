/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bamrouch <bamrouch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 20:20:25 by bamrouch          #+#    #+#             */
/*   Updated: 2022/10/10 00:57:51 by bamrouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"
void *ft_memset(void *b,int c, size_t len)
{
    size_t i;
    i = 0;
    while (i < len)
        ((char *) b)[i++] = (unsigned char) c ;
    return b;
}