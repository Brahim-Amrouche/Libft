/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bamrouch <bamrouch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 01:16:42 by bamrouch          #+#    #+#             */
/*   Updated: 2022/10/12 22:17:01 by bamrouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int main(int argc,char **argv)
{
    (void) argc;
    size_t i;
    char **s = ft_split(argv[1],argv[2][0]);
    i = -1;
    while (s[++i])
        printf("%s ==> index = %zu \n",s[i],i);
    return 0; 
}