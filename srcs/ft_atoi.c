/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bamrouch <bamrouch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 15:42:21 by bamrouch          #+#    #+#             */
/*   Updated: 2022/10/10 17:59:14 by bamrouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int isspace(int c)
{
    if ( c == ' ' || c == '\f' || c == '\n' || c == '\r' || c == '\t' || c == '\v')
        return 1;
    return 0;
}

int ft_atoi(const char *str)
{
    int i;
    int res;
    int sign;

    res = 0;
    i = -1;
    while (isspace(*(str + (++i))));
    if (*(str + i) == '+' || *(str + i) == '-')
    {
        sign = 1;
        if (*(str + i) == '-')
            sign = -1;
        i++;
    }
    while(*(str + i) >= '0' && *(str + i)  <= '9')
    {
        res = (10 * res) + (*(str + i) - '0');
        i++;
    }
    return (res * sign);
}