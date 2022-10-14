/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bamrouch <bamrouch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 01:16:42 by bamrouch          #+#    #+#             */
/*   Updated: 2022/10/14 23:48:15 by bamrouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	main(int argc, char **argv)
{
	(void)argc;
	(void)argv;
	printf("libray memcpy === %s \n",(char *)memcpy(argv[1]+2 ,argv[1],ft_atoi(argv[2])));
	printf("ft_memcpy === %s \n",(char *)ft_memcpy(argv[2]+2 ,argv[2],ft_atoi(argv[2])));
	return (0);
}