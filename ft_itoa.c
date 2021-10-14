/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlamonic <jlamonic@student.42.fr> >        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/08 17:42:27 by jlamonic          #+#    #+#             */
/*   Updated: 2021/10/14 21:52:25 by jlamonic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Описание выделяет (с помощью malloc(3)) и возвращает строку
**  представляющую целое число, полученное в качестве аргумента.
**
** RETURN
**
** Cтрока, представляющая целое число. NULL, если выделение не удается.
*/

int	ft_abs(int n)
{
	if (n < 0)
		return (-n);
	return (n);
}

size_t	ft_getlen(int n)
{
	size_t	size;

	size = 0;
	if (n <= 0)
		size++;
	while (n)
	{
		size++;
		n = n / 10;
	}
	return (size);
}

char	*ft_itoa(int n)
{
	char	*result;
	size_t	i;

	i = ft_getlen(n);
	result = (char *)malloc(sizeof (char) * ft_getlen(n) + 1);
	if (!result)
		return (NULL);
	if (n < 0)
		result[0] = '-';
	if (!n)
		result[0] = '0';
	result[i] = '\0';
	i--;
	while (n)
	{
		result[i] = ft_abs(n % 10) + '0';
		n = n / 10;
		i--;
	}
	return (result);
}
