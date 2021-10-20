/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlamonic <jlamonic@student.42.fr> >        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/08 17:42:27 by jlamonic          #+#    #+#             */
/*   Updated: 2021/10/15 16:10:08 by jlamonic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** RUS
**
** Функция memmove() копирует байты len  из строки src в строку dst.
** Эти две строки могут накладываться друг на друга;
** копирование всегда выполняется неразрушающим способом.
** То есть если они в одной области памяти копирование будет
** гарантировано правильным
**
** RETURN
**
** Функция memmove() возвращает исходное значение dst.
*/

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	int				i;
	unsigned char	*dst1;
	unsigned char	*src1;

	i = 0;
	dst1 = (unsigned char *)dst;
	src1 = (unsigned char *)src;
	if (dst1 == src1 || len == 0)
		return (dst);
	if (dst1 < src1)
	{
		while (i < (int)len)
		{
			dst1[i] = src1[i];
			i++;
		}
	}
	else
	{
		i += (int)len;
		while (--i > -1)
			dst1[i] = src1[i];
	}
	return (dst);
}
