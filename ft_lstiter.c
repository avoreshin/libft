/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlamonic <jlamonic@student.42.fr> >        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 00:44:22 by jlamonic          #+#    #+#             */
/*   Updated: 2021/10/19 00:45:17 by jlamonic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Итерирует список ’lst’ и применяет функцию ’F’ к содержанию каждого элемента.
*/

void ft_lstiter(t_list *lst, void (*f)(void *))
{
	if(!f || !lst)
		return ;
	while(lst)
	{
		f (lst -> content);
		lst = lst ->next;
	}
}