/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlamonic <jlamonic@student.42.fr> >        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/17 19:03:24 by jlamonic          #+#    #+#             */
/*   Updated: 2021/10/18 23:45:50 by jlamonic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Добавляет элемент "новый" в начало список.
 */

void ft_lstadd_front(t_list **lst, t_list *new)
{
	if(lst)
	{
		if(*lst)
			new -> next = *lst;
		*lst = new;
	}
}
//#include <stdio.h>
//int main (void)
//{
//	t_list *wer;
//	t_list *poq;
//	t_list *poq1;
//	t_list *poq2;
//	t_list *poq3;
//	int	i;
//	char j;
//	char j1;
//	char j2;
//	char j3;
//
//	i = 100;
//	j = 'A';
//	j1 = 'B';
//	j2 = 'C';
//	j3 = 'D';
//
//	wer = ft_lstnew(&i);
//	poq = ft_lstnew(&j);
//	poq1 = ft_lstnew(&j1);
//	poq2 = ft_lstnew(&j2);
//	poq3 = ft_lstnew(&j3);
//
//	ft_lstadd_front(&wer,poq);
//	ft_lstadd_front(&poq,poq1);
//	ft_lstadd_front(&poq1,poq2);
//	ft_lstadd_front(&poq2,poq3);
//
//	printf("%c",*(char *)poq3 ->content);
////	poq -> next;
//	printf("%c",*(char *)poq3 -> next -> content);
//	printf("%c",*(char *)poq3 -> next -> next -> content);
//	printf("%c",*(char *)poq3 -> next -> next -> next -> content);
//	printf("%d",*(int *)poq3 -> next -> next -> next -> next->content);
//	return (0);
//}