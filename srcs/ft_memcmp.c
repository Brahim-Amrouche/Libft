/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bamrouch <bamrouch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 01:33:47 by bamrouch          #+#    #+#             */
/*   Updated: 2022/10/10 02:02:39 by bamrouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_memcmp(const void *s1,const void *s2, size_t n)
{
    int i;

    i = 0;
    while (i < n)
    {
        if (*((unsigned char *)(s1 + i) )) != *( (unsigned char *)(s2 + i) ) 
            return (*(( unsigned char *)(s1 + i) )) - (*( (unsigned char *)(s2 + i) )) ;
        i++;
    }
    return 0;
}