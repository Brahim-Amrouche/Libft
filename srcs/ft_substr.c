/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bamrouch <bamrouch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 20:49:30 by bamrouch          #+#    #+#             */
/*   Updated: 2022/10/11 22:47:15 by bamrouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_substr(char const *s,unsigned int start,size_t len)
{
    size_t s_len;
    size_t i;
    char *res;

    res = (char *) ft_calloc(len + 1,sizeof(char));
    if (!res)
        return NULL;
    s_len = ft_strlen(s);
    i = 0;
    while ( i < len && start + i < s_len)
    {
        res[i] = s[start + i];
        i++;
    }
    res[i] = 0;
    return res;
}