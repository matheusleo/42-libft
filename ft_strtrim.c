/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleonard <mleonard@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/22 18:25:03 by mleonard          #+#    #+#             */
/*   Updated: 2022/04/28 23:16:30 by mleonard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*start;
	char	*end;

	while (ft_strchr(set, *s1))
		s1++;
	start = (char *)s1;
	s1 += ft_strlen(s1);
	while (ft_strchr(set, *s1))
		s1--;
	end = (char *)s1;
	return (ft_substr(start, 0, (end - start + 1)));
}
