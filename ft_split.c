/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlamonic <jlamonic@student.42.fr> >        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 21:44:54 by jlamonic          #+#    #+#             */
/*   Updated: 2021/10/19 22:57:06 by jlamonic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
/*
** Описание
** выделяет (с помощью malloc(3)) и возвращает массив
** строк, полученный путем разбиения ’s’ с использованием
** символа ’c’ в качестве разделителя. Массив должен
** заканчиваться нулевым указателем.
**
** RETURN
** Возвращает значение массива новых строк,
** полученного в результате разделения.
** NULL, если выделение не удается.
*/

int	ft_count_words(char *s, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (s[i] == c && s[i])
		i++;
	while (s[i])
	{
		count++;
		while (s[i] != c && s[i])
			i++;
		while (s[i] == c && s[i])
			i++;
	}
	return (count);
}

char	*ft_get_word(const char *s1, size_t len)
{
	char	*word;
	size_t	i;

	i = 0;
	if (!s1)
		return (NULL);
	word = (char *)malloc(sizeof(char) * len + 1);
	if (!word)
		return (NULL);
	while (i < len)
	{
		word[i] = s1[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

char	**ft_make_split(char **str, char const *s, char c)
{
	int		j;
	char	*save;
	int		len;

	j = 0;
	while (*s)
	{
		while (*s && *s == c)
			s++;
		if (!*s)
			break ;
		len = 0;
		save = (char *)s;
		while (*s && *s != c)
		{
			s++;
			len++;
		}
		if (*save)
			str[j] = ft_get_word(save, len);
		if (!str[j++])
			return (NULL);
	}
	str[j] = NULL;
	return (str);
}

char	**ft_split(char const *s, char c)
{
	int		count;
	char	**str;

	if (!s)
		return (NULL);
	count = ft_count_words((char *)s, c);
	if (!count)
	{
		str = (char **)malloc(sizeof(char *));
		if (!str)
			return (NULL);
		str[count] = NULL;
		return (str);
	}
	str = (char **)malloc(sizeof(char *) * (count + 1));
	if (!str)
		return (NULL);
	return (ft_make_split (str, s, c));
}
