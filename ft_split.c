/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlamonic <jlamonic@student.42.fr> >        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 21:44:54 by jlamonic          #+#    #+#             */
/*   Updated: 2021/10/16 20:54:09 by jlamonic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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

int ft_count_words(char *s, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (s[i] == c)
		i++;
	while(s[i])
	{
		if (s[i++] == c && s[i] != c)
			count++;
	}
	if(s[--i] != c)
		count++;
	return (count);
}


char	**ft_split(char const *s, char c)
{
	int		count;
	int		j;
	int		len;
	char	**str;

	if(!*s || !c)
		return (NULL);
	count = ft_count_words((char *)s,c);
	str = (char **)malloc(sizeof(char *) * (count + 1));
	if(!str) {
		return (NULL);
	}
	len = 0;
	j = 0;
	//Ловим слова и выделяем память
	while(*s)
	{
		while(*s && *s == c)
			s++;
		len = 0;
		while (*s && *s != c)
		{
			s++;
			len++;
		}
		str[j] = (char *) malloc(sizeof (char *) * len + 1);
		if(!str[j])
			return(NULL);
		s -= len;
		len = 0;
		while (*s && *s != c)
		{
			str[j][len++] = (char )*s++;
		}
		str[j++][len] = 0;
	}
	str[j] = 0;
	return(str);
}