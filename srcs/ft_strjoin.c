/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bamrouch <bamrouch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 23:39:12 by bamrouch          #+#    #+#             */
/*   Updated: 2022/10/12 01:25:36 by bamrouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strjoin(char const *s1, char const*s2)
{
    size_t total_len;
    size_t s1_len;
    char *res;

    s1_len = ft_strlen(s1) + 1;
    total_len = s1_len + ft_strlen(s2);
    res = (char *) ft_calloc(total_len,sizeof(char));
    if (!res)
        return NULL;
    ft_strlcat(res ,s1,s1_len);
    ft_strlcat(res,s2,total_len + 1);
    return res;
}