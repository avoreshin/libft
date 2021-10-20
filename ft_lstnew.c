/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlamonic <jlamonic@student.42.fr> >        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/17 17:42:29 by jlamonic          #+#    #+#             */
/*   Updated: 2021/10/18 23:30:21 by jlamonic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
/*
** Контент для создания нового элемента. Возвращаемое значение Новый элемент.
** Внешние функции. маллок
** Описание Выделяет (с помощью malloc (3)) и возвращает новый
** элемент. Инициализируется значение переменной ’content’
** со значением параметра ’content’. В переменная ’next’ инициализируется
** значением NULL.
*/

t_list *ft_lstnew(void *content)
{
	t_list *new;

	new = (t_list*) malloc(sizeof (t_list));
	if (!new)
		return (NULL);
	new -> content = content;
	new -> next = NULL;
	return (new);
}
//int main (void)
//{
//	t_list *qwer;
//	int	i;
//	i = 100;
//
//	qwer = ft_lstnew(&i);
//	*(int *)qwer -> content = 200;
//
//	printf("%d\n",*(int *)qwer -> content);
//	return (0);
//
//}