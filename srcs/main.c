/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bamrouch <bamrouch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 01:16:42 by bamrouch          #+#    #+#             */
/*   Updated: 2022/10/13 20:00:00 by bamrouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_upper(unsigned int pos, char *c)
{
	(void) pos;
	if ( *c >= 'a' && *c <= 'z')
		*c = *c - 32;
}


int	main(int argc, char **argv)
{
	(void)argc;
	ft_striteri(argv[1],ft_upper);
	printf("%s \n",argv[1]);
	return (0);
}