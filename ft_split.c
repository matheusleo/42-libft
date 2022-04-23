/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleonard <mleonard@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/21 21:50:27 by mleonard          #+#    #+#             */
/*   Updated: 2022/04/22 12:18:53 by mleonard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static size_t	count_words(char const *str, char limit)
{
	size_t	counter;
	size_t	index;

	counter = 0;
	index = 0;
	while (str[index])
	{
		if (str[index] == limit)
			counter++;
		index++;
	}
	return (counter + 1);
}

char	**ft_split(char const *s, char c)
{
	size_t	total_strs;
	char	**all_strs;
	size_t	counter_str;
	size_t	len_str;

	total_strs = count_words(s, c);
	all_strs = (char **)malloc(sizeof(char *) * (total_strs + 1));
	if (!all_strs)
		return (NULL);
	counter_str = 0;
	while (counter_str < total_strs)
	{
		len_str = 0;
		while (s[len_str] != c && s[len_str])
			len_str++;
		len_str++;
		all_strs[counter_str] = (char *)malloc(sizeof(char) * len_str);
		if (!all_strs[counter_str])
			return (NULL);
		ft_strlcpy(all_strs[counter_str], s, len_str);
		s += len_str;
		counter_str++;
	}
	all_strs[counter_str] = NULL;
	return (all_strs);
}
