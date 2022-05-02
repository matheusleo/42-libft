/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleonard <mleonard@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/30 13:57:44 by mleonard          #+#    #+#             */
/*   Updated: 2022/04/30 15:22:50 by mleonard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*cur_node;

	cur_node = lst;
	if (!lst)
		return (NULL);
	while (cur_node->next)
		cur_node = cur_node->next;
	return (cur_node);
}
