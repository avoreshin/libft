/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlamonic <jlamonic@student.42.fr> >        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/08 17:42:27 by jlamonic          #+#    #+#             */
/*   Updated: 2021/10/16 14:09:36 by jlamonic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Выделяет (с помощью malloc (3)) и возвращает копию
** ’S1’ с удаленными символами, указанными в ’set’ от начала и до конца строки.
**
** RETURN
**
** Обрезаемая строка.
** Контрольный набор символов для обрезки.
*/

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*result;
	size_t	i;

	if (!s1 || !set)
		return (NULL);
	while ((*s1) && ft_strchr(set, *s1))
		s1++;
	i = ft_strlen(s1);
	while (i && ft_strchr(set, s1[i]))
		i--;
	result = ft_substr(s1,0,i + 1);
	return (result);
}
