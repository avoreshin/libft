/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlamonic <jlamonic@student.42.fr> >        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/10 14:55:04 by jlamonic          #+#    #+#             */
/*   Updated: 2021/10/18 21:55:49 by jlamonic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Функция strnstr() находит первое вхождение строки с нулевым окончанием
** в стоге сена строки, где ищется не более символов len
** Символы, которые появляются после символа "\0", не ищутся.
** Поскольку функция strnstr() является специфичным для FreeBSD API,
** ее следует использовать только
** когда переносимость не является проблемой.
**
** RETURN
**
** Введется поиск подстроки.Возвращает указатель на первое вхождение.
** Если не нашел возвращает 0.
*/

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (!ft_strlen(needle))
		return ((char *)haystack);
	if (ft_strlen(haystack) < ft_strlen(needle) || len < ft_strlen(needle))
		return (NULL);
	while (haystack[i] != '\0')
	{
		j = 0;
		while (haystack[i + j] == needle[j] && (i + j) < len)
		{
			if (haystack[i + j] == '\0' && needle[j] == '\0')
				return ((char *)&haystack[i]);
			j++;
		}
		if (needle[j] == '\0')
			return ((char *)haystack + i);
		i++;
	}
	return (0);
}
