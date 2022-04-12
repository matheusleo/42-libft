/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleonard <mleonard@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/09 10:41:00 by mleonard          #+#    #+#             */
/*   Updated: 2022/04/09 11:19:38 by mleonard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	d_len;
	size_t	d_index;
	size_t	s_index;
	size_t	s_len;

	d_len = ft_strlen(dst);
	if (size < d_len)
		return (d_len + size + 1);
	d_index = ft_strlen(dst);
	s_index = 0;
	s_len = ft_strlen(src);
	while (d_index < (size - 1))
		dst[d_index++] = src[s_index++];
	dst[d_index] = '\0';
	return (d_len + s_len);
}
