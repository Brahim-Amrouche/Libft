/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bamrouch <bamrouch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 18:28:42 by bamrouch          #+#    #+#             */
/*   Updated: 2022/10/06 11:47:20 by bamrouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_strlen(char *c){
    int i;

    i=0;
    while ( *(c + (i++)) );
    return i;
}