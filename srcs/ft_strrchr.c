/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bamrouch <bamrouch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 11:42:47 by bamrouch          #+#    #+#             */
/*   Updated: 2022/10/06 12:00:01 by bamrouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static unsigned int ft_strlen(char *s)
{
    int i;
    
    i = 0;
    while(*(s+(i++)));
    return i;
}

char *ft_strrchr(const char *s,int c)
{
    int i;

    i = ft_strlen(s);
    while (i-- >= 0)
        if(*(s + i) == c)
            return (s + i);
    return (0);
}