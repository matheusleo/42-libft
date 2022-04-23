/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleonard <mleonard@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/21 20:16:28 by mleonard          #+#    #+#             */
/*   Updated: 2022/04/23 00:38:11 by mleonard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*dest;
	size_t	counter;

	counter = 0;
	dest = (char *)malloc(sizeof(char) * len);
	if (!dest)
		return (NULL);
	while (counter < len)
	{
		dest[counter] = s[start + counter];
		counter++;
	}
	dest[counter] = '\0';
	return (dest);
}
