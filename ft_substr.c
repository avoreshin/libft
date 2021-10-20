/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlamonic <jlamonic@student.42.fr> >        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/08 17:42:27 by jlamonic          #+#    #+#             */
/*   Updated: 2021/10/19 01:17:06 by jlamonic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Выделяет (с помощью malloc(3)) и возвращает подстроку из строки ’s’.
** Подстрока начинается с индекса "start" и имеет максимальный размер "len".
** RETURN
**
** Возвращает указатель на эту подстроку
** NULL, если выделение не удается.
*/

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	j;
	char	*substr;

	i = 0;
	j = 0;
	if (!s || start >= ft_strlen(s) || len <= 0)
		return (ft_strdup(""));
	if (ft_strlen(s + start) < len)
		len = ft_strlen(s + start);
	substr = (char *)malloc(sizeof(char) * (len + 1));
	if (!substr)
		return (NULL);
	while (s[i])
	{
		if (i >= start && j < len)
		{
			substr[j] = s[i];
			j++;
		}
		i++;
	}
	substr[j] = '\0';
	return (substr);
}
