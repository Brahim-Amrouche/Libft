/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bamrouch <bamrouch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 01:16:42 by bamrouch          #+#    #+#             */
/*   Updated: 2022/10/12 20:16:56 by bamrouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int main(int argc,char **argv)
{
    (void) argc;
    printf("%s==== \n",ft_strtrim(argv[1],argv[2]));
    return 0; 
}