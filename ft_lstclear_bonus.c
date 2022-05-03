/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleonard <mleonard@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/30 14:09:36 by mleonard          #+#    #+#             */
/*   Updated: 2022/05/02 21:53:43 by mleonard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_bonus.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*cur_node;
	t_list	*next_node;

	cur_node = *lst;
	while (cur_node)
	{
		next_node = cur_node->next;
		ft_lstdelone(cur_node, del);
		cur_node = next_node;
	}
	*lst = NULL;
}
