/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleonard <mleonard@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/05 22:43:31 by mleonard          #+#    #+#             */
/*   Updated: 2022/04/05 23:24:38 by mleonard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define FALSE 0
#define TRUE 1

int	ft_isalpha(int c)
{
	if (('a' <= c && c <= 'z') || ('A' <= c && c <= 'Z'))
		return (TRUE);
	return (FALSE);
}

#include <stdio.h>
#include <ctype.h>

int	main(void)
{
	printf("Input: %c\nEsperado: %d\nRetornado: %d\n", 'a', 1, ft_isalpha('a'));
	printf("\nInput: %c\nEsperado: %d\nRetornado: %d\n", 'b', 1, ft_isalpha('b'));
	printf("\nInput: %c\nEsperado: %d\nRetornado: %d\n", '\\', 0, ft_isalpha('\\'));
	printf("\nInput: %c\nEsperado: %d\nRetornado: %d\n", '?', 0, ft_isalpha('?'));
	printf("\nInput: %c\nEsperado: %d\nRetornado: %d\n", '.', 0, ft_isalpha('.'));
}
