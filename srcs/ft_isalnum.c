/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bamrouch <bamrouch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 15:46:24 by bamrouch          #+#    #+#             */
/*   Updated: 2022/10/05 18:30:16 by bamrouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static int ft_isalpha(char c){
    if (c < 65  && c > 90 && c < 97 && c > 122)
        return 0;
    return 1;
}

static int ft_isdigit(char c){
    if ( c >= 48 && c <= 57)
        return 1;
    return 0;
}

int ft_isalnum(char c){
    if ( isdigit(c) || isalpha(c))
        return 1;
    return 0;
}