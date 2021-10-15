/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlamonic <jlamonic@student.42.fr> >        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/08 17:42:27 by jlamonic          #+#    #+#             */
/*   Updated: 2021/10/15 23:10:31 by jlamonic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Применяет функцию ’f’ к каждому символу
** string ’s’ для создания новой строки (с помощью malloc (3))
** в результате последовательного применения 'f'.
*/

#include "libft.h"

char	*ft_strmapi(const char *s, char (*f)(unsigned int, char))
{
	char	*fr;
	size_t	len;
	int		i;

	i = 0;
	if (s == NULL)
		return (NULL);
	len = ft_strlen(s);
	fr = malloc((char)(len + 1));
	if (!fr)
		return (NULL);
	fr[len] = '\0';
	while (s[i] != '\0')
	{
		fr[i] = (*f)(i, s[i]);
		i++;
	}
	return (fr);
}
