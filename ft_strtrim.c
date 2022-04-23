/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleonard <mleonard@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/22 18:25:03 by mleonard          #+#    #+#             */
/*   Updated: 2022/04/23 00:40:46 by mleonard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	set_len;
	size_t	s1_len;
	char	*start;

	set_len = ft_strlen(set);
	if (set_len == 0)
		return (NULL);
	while (!ft_memcmp(s1, set, set_len))
		s1 += set_len;
	s1_len = ft_strlen(s1);
	start = (char *)s1;
	s1 += s1_len - set_len;
	while (!ft_memcmp(s1, set, set_len))
	{
		s1 -= set_len;
		s1_len -= set_len;
	}
	return (ft_substr(start, 0, s1_len));
}
