/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleonard <mleonard@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 21:51:45 by mleonard          #+#    #+#             */
/*   Updated: 2022/04/13 23:28:52 by mleonard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t			counter;
	unsigned char	*d_temp;
	unsigned char	*s_temp;

	if (src <= dest && dest <= (src + n))
		return (dest);
	if (dest <= src && src <= (dest + n))
		return (dest);
	counter = 0;
	d_temp = (char *)dest;
	s_temp = (char *)src;
	while (counter < n)
	{
		d_temp[counter] = s_temp[counter];
		counter++;
	}
	return (dest);
}
