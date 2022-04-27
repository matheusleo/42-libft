/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleonard <mleonard@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/24 23:35:16 by mleonard          #+#    #+#             */
/*   Updated: 2022/04/27 19:37:48 by mleonard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

// 2147483647
// -2147483648

static size_t	ft_count_dgts_sign(int n)
{
	size_t	counter;

	counter = 1;
	if (n < 0)
		counter++;
	while (n / 10 != 0)
	{
		counter++;
		n = n / 10;
	}
	return (counter);
}

static char	*ft_reverse(char *str, size_t start_index)
{
	size_t	start;
	size_t	end;
	char	aux_var;

	start = start_index;
	end = ft_strlen(str) - 1;
	while (end > start)
	{
		aux_var = str[start];
		str[start] = str[end];
		str[end] = aux_var;
		start++;
		end--;
	}
	return (str);
}

char	*ft_itoa(int n)
{
	size_t	total_dgts_sign;
	char	*str;
	size_t	start;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	if (n == 0)
		return (ft_strdup("0"));
	total_dgts_sign = ft_count_dgts_sign(n);
	str = (char *)ft_calloc((total_dgts_sign + 1), sizeof(char));
	start = 0;
	if (n < 0)
	{
		*str++ = '-';
		start++;
		n *= -1;
	}
	while (n != 0)
	{
		*str++ = n % 10 + '0';
		n /= 10;
	}
	*str = '\0';
	return (ft_reverse(str -= total_dgts_sign, start));
}
