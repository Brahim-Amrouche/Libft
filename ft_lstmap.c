/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bamrouch <bamrouch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 18:36:02 by bamrouch          #+#    #+#             */
/*   Updated: 2022/10/15 23:06:45 by bamrouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	*ft_make_content(t_list **lst, void *content, void *(*f)(void *),
		void (*del)(void *))
{
	void	*temp;

	temp = f(content);
	if (!temp)
	{
		ft_lstclear(lst, del);
		return (NULL);
	}
	return (temp);
}

static void	*ft_free_empty_list(t_list *lst)
{
	t_list	*temp;
	t_list	*next;

	temp = lst;
	while (temp->next)
	{
		next = temp->next;
		free(temp);
		temp = next;
	}
	free(temp);
	return (NULL);
}

static t_list	*ft_lst_copy(t_list *lst)
{
	t_list	*temp;
	t_list	*list_head;
	int		list_len;

	if (!lst)
		return (NULL);
	list_len = ft_lstsize(lst) - 1;
	temp = ft_calloc(1, sizeof(t_list));
	if (!temp)
		return (NULL);
	list_head = temp;
	while (list_len--)
	{
		temp->next = ft_calloc(1, sizeof(t_list));
		if (!(temp->next))
			return (ft_free_empty_list(list_head));
		temp = temp->next;
	}
	return (list_head);
}

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*map_current;
	t_list	*lst_current;
	t_list	*res;

	if (!lst)
		return (NULL);
	map_current = ft_lst_copy(lst);
	lst_current = lst;
	if (!map_current)
		return (NULL);
	res = map_current;
	while (lst_current->next)
	{
		map_current->content = ft_make_content(&res, lst_current->content, f,
				del);
		if (!map_current->content)
			return (NULL);
		lst_current = lst_current->next;
		map_current = map_current->next;
	}
	map_current->content = ft_make_content(&res, lst_current->content, f, del);
	return (res);
}
