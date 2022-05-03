/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleonard <mleonard@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/30 15:29:49 by mleonard          #+#    #+#             */
/*   Updated: 2022/05/02 21:52:38 by mleonard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_bonus.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_node;
	t_list	*new_lst;
	t_list	*cur_node;

	if (!lst || !f)
		return (NULL);
	new_node = ft_lstnew(f(lst->content));
	if (!new_node)
	{
		ft_lstclear(&lst, del);
		return (NULL);
	}
	new_lst = new_node;
	cur_node = lst->next;
	while (cur_node)
	{
		new_node = ft_lstnew(f(cur_node->content));
		if (!new_node)
			return (NULL);
		ft_lstadd_back(&new_lst, new_node);
		cur_node = cur_node->next;
	}
	return (new_lst);
}

/*
	[] iterates the 'lst' and aplies the function 'f' on the **content**
	of each node
	[] creates a new lst based on the result of the sucessive operations of 'f'
	[] use 'del' if needed
	[] return NULL if fails
*/
