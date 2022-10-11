/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bamrouch <bamrouch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 17:16:35 by bamrouch          #+#    #+#             */
/*   Updated: 2022/10/10 01:43:45 by bamrouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_strncmp(const char *s1, const char *s2,size_t n)
{
    size_t i;

    i = 0;
    while ((*(s1 + i) || *(s2 + i)) && i < n)
    {   
        if ( ((unsigned char) *(s1 + i)) !=  ((unsigned char) *(s2 + i)))
            return ((unsigned char) *(s1 + i)) - ((unsigned char) *(s2 + i));
        i++;
    }
    return 0;
}