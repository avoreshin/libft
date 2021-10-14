/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlamonic <jlamonic@student.42.fr> >        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/08 17:42:27 by jlamonic          #+#    #+#             */
/*   Updated: 2021/10/15 00:23:37 by jlamonic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Функция memccpy() копирует байты из строки src в строку dst.
** Если символ "c" (преобразованный в символ без знака)
** встречается в строке src, то копия  останавливается
** и возвращается указатель на байт после копии "c" в строке dst.
** В противном случае копируется n байт
**
** RETURN
**
** Функция memmcpy() возвращает нулевой указатель.
*/

void	*ft_memccpy(void *restrict ds, const void *restrict sr, int c, size_t n)
{
	unsigned char	*dst1;
	unsigned char	*src1;
	size_t			i;

	dst1 = (unsigned char *)ds;
	src1 = (unsigned char *)sr;
	i = 0;
	if (ds == NULL && sr == NULL)
		return (NULL);
	while (i < n)
	{
		dst1[i] = src1[i];
		if (dst1[i] == (unsigned char)c)
			return ((void *)(ds + i + 1));
		i++;
	}
	return (NULL);
}
