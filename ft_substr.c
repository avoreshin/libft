/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlamonic <jlamonic@student.42.fr> >        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/08 17:42:27 by jlamonic          #+#    #+#             */
/*   Updated: 2021/10/15 00:23:37 by jlamonic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;

	char	*substr;
	if (!s || len <= 0 || start >= ft_strlen(s))
		return (ft_strdup(" "));
	else
	{
		if (ft_strlen(s + start) < len)
			len = ft_strlen(s + start);
		substr = malloc((len + 1) * sizeof(char));
		if (!substr)
			return (NULL);
		i = 0;
		while (s[i] && i < len)
			substr[i++] = s[start++];
		substr[i] = '\0';
		return (substr);
	}
}
