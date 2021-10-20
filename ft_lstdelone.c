/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlamonic <jlamonic@student.42.fr> >        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 00:21:13 by jlamonic          #+#    #+#             */
/*   Updated: 2021/10/19 00:22:09 by jlamonic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**Принимает в качестве параметра элемент и освобождает память содержимого
** элемента с помощью функции ’Del’, заданный как параметр, и освобождает
** элемент. Память о «следующем» не должна освобождаться.
**
*/

void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	if (lst)
	{
		if (del && lst -> content)
			del (lst -> content);
		free(lst);
	}
}
