/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bamrouch <bamrouch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 16:50:37 by bamrouch          #+#    #+#             */
/*   Updated: 2022/10/15 21:16:19 by bamrouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*current;
	t_list	*next;

	if (!lst || !(*lst))
		return ;
	current = (*lst);
	while (current->next)
	{
		next = current->next;
		ft_lstdelone(current, del);
		current = next;
	}
	ft_lstdelone(current, del);
	lst = NULL;
}
