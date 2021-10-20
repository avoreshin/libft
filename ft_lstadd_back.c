/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlamonic <jlamonic@student.42.fr> >        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 23:47:12 by jlamonic          #+#    #+#             */
/*   Updated: 2021/10/20 17:52:05 by jlamonic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Добавляет элемент "новый" в конец списка.
 */

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*save;

	if (lst && *lst)
	{
		save = *lst;
		while (save -> next)
			save = save -> next;
		save -> next = new;
	}
	else if (lst)
		*lst = new;
}
