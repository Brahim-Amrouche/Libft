/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bamrouch <bamrouch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 11:26:21 by bamrouch          #+#    #+#             */
/*   Updated: 2022/10/09 16:59:26 by bamrouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_strchr(const char *s , int c)
{
    char *temp = (char *) s;
    while (*temp){
        if (*temp == c)
            return temp;
        temp++;
    }
    return ((*temp == c) ? temp : 0) ;   
}