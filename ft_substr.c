/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleonard <mleonard@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/21 20:16:28 by mleonard          #+#    #+#             */
/*   Updated: 2022/05/05 00:22:33 by mleonard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*new_str;
	size_t	index;
	size_t	s_len;
	size_t	max_mem;

	s_len = ft_strlen(s);
	max_mem = s_len - start;
	if (len > s_len)
		len = s_len;
	if (start > s_len)
		return (ft_strdup(""));
	if (len > max_mem)
		len = max_mem;
	new_str = (char *)malloc(sizeof(char) * (len + 1));
	if (!*s || !new_str)
		return (NULL);
	index = 0;
	s += start;
	while (*s && index < len && index < max_mem)
	{
		new_str[index] = *s++;
		index++;
	}
	new_str[index] = '\0';
	return (new_str);
}
