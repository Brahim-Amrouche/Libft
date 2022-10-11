/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bamrouch <bamrouch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 11:42:47 by bamrouch          #+#    #+#             */
/*   Updated: 2022/10/09 17:13:40 by bamrouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strrchr(const char *s,int c)
{
    int i;

    char *temp;

    temp = (char *)s;
    i = ft_strlen(s);
    while (i >= 0)
    {
        if(*(temp + i) == c)
            return (temp + i);
        i--;
    }
    return (0);
}