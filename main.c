/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bamrouch <bamrouch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 01:16:42 by bamrouch          #+#    #+#             */
/*   Updated: 2022/10/16 17:42:00 by bamrouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *special_hello(void *x)
{
	char *s = ft_strdup("Hello");
	s[0]= *((char *)x);
	return s;
}

void	del_func(void *x)
{
	free(x);
}

int	main(int argc, char **argv)
{
	(void)argc;
	(void)argv;
	// t_list *x,*y,*z;
	// t_list *current,*res;	
	// char *s1 = ft_strdup("wabalab");
	// char *s2 = ft_strdup("dubidu");
	// char *s3 = ft_strdup("bolido");

	// x =ft_lstnew(s1);
	// y =ft_lstnew(s2);
	// z = ft_lstnew(s3);
	// ft_lstadd_front(&y,x);
	// ft_lstadd_back(&x,z);
	// current = x ;
	// res = ft_lstmap(x,special_hello,del_func);
	// while(current->next)
	// {
	// 	printf("%s is from x \n",current->content);
	// 	printf("%s is from map \n",res->content);
	// 	current = current->next;
	// 	res = res->next;
	// }
	// printf("%s is from x \n",current->content);
	// printf("%s is from map \n",res->content);
	// ft_lstclear(&res,del_func);
	char **s= ft_split("xxxxxxxxhello!xxxxxxaaa", 'x');
	int i=-1;
	while ( s[++i])
		printf("|%s| is a split \n",s[i]);
	return (0);
}