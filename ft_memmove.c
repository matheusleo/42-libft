/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleonard <mleonard@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 21:58:31 by mleonard          #+#    #+#             */
/*   Updated: 2022/04/13 23:29:06 by mleonard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t			counter;
	unsigned char	*temp;
	unsigned char	*s_temp;
	unsigned char	*d_temp;

	counter = 0;
	s_temp = (char *)src;
	d_temp = (char *)dest;
	temp = (char *)malloc(sizeof(char) * n);
	while (counter < n)
	{
		temp[counter] = s_temp[counter];
		counter++;
	}
	counter = 0;
	while (counter < n)
	{
		d_temp[counter] = temp[counter];
		counter++;
	}
	free(temp);
	return (dest);
}
