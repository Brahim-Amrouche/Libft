/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bamrouch <bamrouch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 17:46:59 by bamrouch          #+#    #+#             */
/*   Updated: 2022/10/10 23:02:43 by bamrouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strstr(const char *haystack,const char *needle)
{
    unsigned int i;
    unsigned int j;
    char *res;

    i = 0;
    j = 0;
    if(*(needle) == 0) return (char *) haystack;
    while (*(haystack + i))
    {
        if(*(needle + j) && *(haystack + i + j) == *(needle + j))
        {
            if (j == 0)
                res = (char *) haystack + i;
            j++;
        }
        else if ( *(needle + j) == 0)
            return res;
        else{
            i+= (j ? j : 1);
            j = 0;
        }
    }
    return NULL;
}