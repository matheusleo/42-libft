/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleonard <mleonard@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 22:25:51 by mleonard          #+#    #+#             */
/*   Updated: 2022/04/13 22:40:10 by mleonard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			index;
	unsigned char	*s_temp;

	index = 0;
	s_temp = (unsigned char *)s;
	while (index < n)
	{
		if (s_temp[index] == c)
			return ((void *)(s + index));
		index++;
	}
	return (NULL);
}
