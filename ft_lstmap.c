/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlamonic <jlamonic@student.42.fr> >        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 00:48:32 by jlamonic          #+#    #+#             */
/*   Updated: 2021/10/20 18:07:11 by jlamonic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* Итерирует список ’lst’ и применяет функцию
** ’F’ к содержанию каждого элемента. Создает новый
** список, полученный в результате последовательных приложений
** функция ’f’. Функция ’del’ используется для
** при необходимости удалите содержимое элемента.
*/

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*begin_list;
	t_list	*temp_node;

	if (!lst || !f)
		return (NULL);
	begin_list = NULL;
	while (lst)
	{
		temp_node = ft_lstnew(f(lst -> content));
		if (!temp_node)
		{
			ft_lstclear(&begin_list, del);
			return (NULL);
		}
		ft_lstadd_back(&begin_list, temp_node);
		lst = lst -> next;
	}
	return (begin_list);
}
