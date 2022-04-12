/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleonard <mleonard@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/08 22:22:21 by mleonard          #+#    #+#             */
/*   Updated: 2022/04/08 23:27:25 by mleonard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	l_len;
	size_t	b_index;
	size_t	aux_var;
	size_t	l_index;

	b_index = 0;
	l_len = ft_strlen(little);
	if (l_len == 0)
		return ((char *)big);
	while (big[b_index] && b_index <= len)
	{
		if (big[b_index] == little[0] && (b_index + l_len <= len))
		{
			aux_var = b_index;
			l_index = 0;
			while (big[++aux_var] == little[++l_index])
				;
			if (l_index == l_len)
				return ((char *)(big + b_index));
		}
		b_index++;
	}
	return (NULL);
}
