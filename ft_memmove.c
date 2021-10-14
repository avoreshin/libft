/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlamonic <jlamonic@student.42.fr> >        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/08 17:42:27 by jlamonic          #+#    #+#             */
/*   Updated: 2021/10/08 17:42:27 by jlamonic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include <stdio.h>

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

// unsigned char	*to;
// 	unsigned char	*from;

// 	to = (unsigned char *)dst;
// 	from = (unsigned char *)src;
// 	if (from == to || len == 0)
// 		return (dst);
	// if (to < from)
	// 	while (len--)
	// 		*to++ = *from++;
	// else
	// {
	// 	to += len;
	// 	from += len;
	// 	while (len--)
	// 		*--to = *--from;
	// }
	// return (dst);

// int main (void)
// {
// 	char a[] = "AAA";
// 	char b[] = "qwe";
// 	printf("%s",(char*)ft_memmove(a, b, 3) );
// 	return(0);
// }
